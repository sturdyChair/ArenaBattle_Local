// Fill out your copyright notice in the Description page of Project Settings.


#include "Gimmick/ABStageGimmick.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Physics/ABCollision.h"
#include "Character/ABCharacterNonPlayer.h"
#include "Engine/OverlapResult.h"
#include "Item/ABItemBox.h"
#include "Interface/ABGameInterface.h"
#include "ABGameMode.h"

// Sets default values
AABStageGimmick::AABStageGimmick()
{
	Stage = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Stage"));
	RootComponent = Stage;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StageMeshRef(TEXT("/Script/Engine.StaticMesh'/Game/ArenaBattle/Environment/Stages/SM_SQUARE.SM_SQUARE'"));
	if (StageMeshRef.Object)
	{
		Stage->SetStaticMesh(StageMeshRef.Object);
	}

	StageTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("StageTrigger"));
	StageTrigger->SetupAttachment(Stage);
	StageTrigger->SetBoxExtent(FVector(775.f, 775.f, 300.f));
	StageTrigger->SetRelativeLocation(FVector(0.f, 0.f, 225.f));
	StageTrigger->SetCollisionProfileName(CPROFILE_ABTRIGGER);
	StageTrigger->OnComponentBeginOverlap.AddDynamic(this, &AABStageGimmick::OnStageTriggerBeginOverlap);


	static FName GateSockets[4]{TEXT("+XGate"),TEXT("-XGate"),TEXT("+YGate"),TEXT("-YGate") };
	static ConstructorHelpers::FObjectFinder<UStaticMesh> GateMeshRef(TEXT("/Script/Engine.StaticMesh'/Game/ArenaBattle/Environment/Props/SM_GATE.SM_GATE'"));

	for (FName GateSocket : GateSockets)
	{
		UStaticMeshComponent* Gate = CreateDefaultSubobject<UStaticMeshComponent>(GateSocket);
		Gate->SetupAttachment(Stage, GateSocket);
		Gate->SetRelativeLocation(FVector(0.f, -80.5f, 0.f));
		Gate->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
		Gate->SetStaticMesh(GateMeshRef.Object);
		Gates.Add(GateSocket, Gate);

		FName TriggerName = *GateSocket.ToString().Append(TEXT("Trigger"));
		UBoxComponent* GateTrigger = CreateDefaultSubobject<UBoxComponent>(TriggerName);
		GateTrigger->SetupAttachment(Stage, GateSocket);
		GateTrigger->SetBoxExtent(FVector(100.f, 100.f, 300.f));
		GateTrigger->SetRelativeLocation(FVector(70.f, 0.f, 250.f));
		GateTrigger->SetCollisionProfileName(CPROFILE_ABTRIGGER);
		GateTrigger->OnComponentBeginOverlap.AddDynamic(this, &AABStageGimmick::OnGateTriggerBeginOverlap);
		GateTrigger->ComponentTags.Add(GateSocket);

		GateTriggers.Add(TriggerName, GateTrigger);
	}

	CurrentState = EStageState::READY;
	StateChangeAction.Add(EStageState::READY, 
		FStageStateChangedDelegateWrapper(FOnStageStateChangedDelegate::CreateUObject(this, &AABStageGimmick::SetReady)));
	StateChangeAction.Add(EStageState::FIGHT, 
		FStageStateChangedDelegateWrapper(FOnStageStateChangedDelegate::CreateUObject(this, &AABStageGimmick::SetFight)));
	StateChangeAction.Add(EStageState::REWARD, 
		FStageStateChangedDelegateWrapper(FOnStageStateChangedDelegate::CreateUObject(this, &AABStageGimmick::SetReward)));
	StateChangeAction.Add(EStageState::NEXT, 
		FStageStateChangedDelegateWrapper(FOnStageStateChangedDelegate::CreateUObject(this, &AABStageGimmick::SetNext)));

	OpponentSpawnTime = 2.f;


	OpponentClass = AABCharacterNonPlayer::StaticClass();

	RewardBoxClass = AABItemBox::StaticClass();
	for (FName GateSocket : GateSockets)
	{
		FVector BoxLocation = Stage->GetSocketLocation(GateSocket) * 0.5f;
		RewardBoxLocations.Add(GateSocket, BoxLocation);
	}

	CurrentStageNum = 0;
}

void AABStageGimmick::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	SetState(CurrentState);
}


void AABStageGimmick::OnStageTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
{
	SetState(EStageState::FIGHT);
}

void AABStageGimmick::OnGateTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
{
	check(OverlappedComponent->ComponentTags.Num() == 1);
	FName ComponentTag = OverlappedComponent->ComponentTags[0];
	FName SocketName = FName(*ComponentTag.ToString().Left(2));
	check(Stage->DoesSocketExist(SocketName));
	
	FVector NewLocation = Stage->GetSocketLocation(SocketName);
	TArray<FOverlapResult> OverlapResults;
	FCollisionQueryParams CollisionQueryParams{SCENE_QUERY_STAT(GateTrigger), false, this};
	bool bResult = GetWorld()->OverlapMultiByObjectType(OverlapResults, NewLocation, FQuat::Identity,
		FCollisionObjectQueryParams::InitType::AllStaticObjects, FCollisionShape::MakeSphere(775.f), CollisionQueryParams);
	if (!bResult)
	{
		AABStageGimmick* NextStage = GetWorld()->SpawnActorDeferred<AABStageGimmick>(AABStageGimmick::StaticClass(), FTransform(NewLocation));
		if (NextStage)
		{
			NextStage->SetStageNum(CurrentStageNum + 1);
			NextStage->FinishSpawning(FTransform(NewLocation));
		}
	}
}

void AABStageGimmick::OpenAllGates()
{
	for (auto& Gate : Gates)
	{
		Gate.Value->SetRelativeRotation(FRotator(0.f,-90.f,0.f));
	}
}

void AABStageGimmick::CloseAllGates()
{
	for (auto& Gate : Gates)
	{
		Gate.Value->SetRelativeRotation(FRotator::ZeroRotator);
	}
}

void AABStageGimmick::SetState(EStageState InNewState)
{
	CurrentState = InNewState;
	if (StateChangeAction.Contains(CurrentState))
	{
		StateChangeAction[CurrentState].StageDelegate.ExecuteIfBound();
	}

}

void AABStageGimmick::SetReady()
{
	StageTrigger->SetCollisionProfileName(CPROFILE_ABTRIGGER);
	for (auto& GateTrigger : GateTriggers)
	{
		GateTrigger.Value->SetCollisionProfileName(TEXT("NoCollision"));
	}
	OpenAllGates();
}

void AABStageGimmick::SetFight()
{
	StageTrigger->SetCollisionProfileName(TEXT("NoCollision"));
	for (auto& GateTrigger : GateTriggers)
	{
		GateTrigger.Value->SetCollisionProfileName(TEXT("NoCollision"));
	}
	CloseAllGates();
	GetWorld()->GetTimerManager().SetTimer(OpponentTimerHandle,
		FTimerDelegate::CreateUObject(this, &AABStageGimmick::OnOpponentSpawn), OpponentSpawnTime, false);
}

void AABStageGimmick::SetReward()
{
	StageTrigger->SetCollisionProfileName(TEXT("NoCollision"));
	for (auto& GateTrigger : GateTriggers)
	{
		GateTrigger.Value->SetCollisionProfileName(TEXT("NoCollision"));
	}
	CloseAllGates();
	SpawnRewardBoxes();
}

void AABStageGimmick::SetNext()
{
	StageTrigger->SetCollisionProfileName(TEXT("NoCollision"));
	for (auto& GateTrigger : GateTriggers)
	{
		GateTrigger.Value->SetCollisionProfileName(CPROFILE_ABTRIGGER);
	}
	OpenAllGates();
}

void AABStageGimmick::OnOpponentDestroy(AActor* DestroyedActor)
{
	IABGameInterface* GameMode = Cast<IABGameInterface>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GameMode->OnPlayerScoreChanged(CurrentStageNum);
		if (GameMode->IsGameCleared())
		{
			return;
		}
	}	
	SetState(EStageState::REWARD);
}

void AABStageGimmick::OnOpponentSpawn()
{
	const FTransform SpawnTransform(GetActorLocation() + FVector::UpVector * 88.f);

	AABCharacterNonPlayer* OpponentCharacter = GetWorld()->SpawnActorDeferred<AABCharacterNonPlayer>(OpponentClass, SpawnTransform);

	if (OpponentCharacter)
	{
		OpponentCharacter->OnDestroyed.AddDynamic(this, &AABStageGimmick::OnOpponentDestroy);
		OpponentCharacter->SetLevel(CurrentStageNum);
		OpponentCharacter->FinishSpawning(SpawnTransform);
	}
}

void AABStageGimmick::OnRewardTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
{
	for (const auto& RewardBox : RewardBoxes)
	{
		if (RewardBox.IsValid())
		{
			AABItemBox* ValidItemBox = RewardBox.Get();
			AActor* OverlappedBox = OverlappedComponent->GetOwner();
			if (OverlappedBox != ValidItemBox)
			{
				ValidItemBox->Destroy();
			}
		}
	}

	SetState(EStageState::NEXT);
}

void AABStageGimmick::SpawnRewardBoxes()
{
	for (auto& BoxLocation : RewardBoxLocations)
	{
		FTransform SpawnTransform(GetActorLocation() + BoxLocation.Value + FVector(0.f, 0.f, 30.f));
		AABItemBox* ItemBox = GetWorld()->SpawnActorDeferred<AABItemBox>(RewardBoxClass, SpawnTransform);
		if (ItemBox)
		{
			ItemBox->Tags.Add(BoxLocation.Key);
			ItemBox->GetTrigger()->OnComponentBeginOverlap.AddDynamic(this, &AABStageGimmick::OnRewardTriggerBeginOverlap);
			RewardBoxes.Add(ItemBox);
		
		}
	}
	for (auto& ItemBox : RewardBoxes)
	{
		if (ItemBox.IsValid())
		{
			ItemBox.Get()->FinishSpawning(ItemBox.Get()->GetActorTransform());
		}
	}
}

