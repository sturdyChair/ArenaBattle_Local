// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "Player/ABPlayerController.h"


AABGameMode::AABGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> 
		TPCRef(TEXT("/Game/ArenaBattle/Blueprint/BP_ABPlayerCharacter.BP_ABPlayerCharacter_C"));
	if (TPCRef.Class)
	{
		DefaultPawnClass = TPCRef.Class;
	}
	static ConstructorHelpers::FClassFinder<APlayerController>
		PlayerControllerRef(TEXT("/Script/ArenaBattle.ABPlayerController"));
	if(PlayerControllerRef.Class)
		PlayerControllerClass = PlayerControllerRef.Class;
	
	ClearScore = 3;
	CurrentScore = 0;
	bIsCleared = false;
}

void AABGameMode::OnPlayerScoreChanged(int32 InNewPlayerScore)
{
	CurrentScore = InNewPlayerScore;
	AABPlayerController* PlayerController = Cast<AABPlayerController>(GetWorld()->GetFirstPlayerController());
	if (PlayerController)
	{
		PlayerController->GameScoreChanged(CurrentScore);
	}

	if (ClearScore <= CurrentScore)
	{
		bIsCleared = true;
		if (PlayerController)
		{
			PlayerController->GameClear();
		}
	}
}

void AABGameMode::OnPlayerDead()
{
	CurrentScore = 0;
	bIsCleared = false;
	AABPlayerController* PlayerController = Cast<AABPlayerController>(GetWorld()->GetFirstPlayerController());
	if (PlayerController)
	{
		PlayerController->GameOver();
	}
}

bool AABGameMode::IsGameCleared()
{
	return bIsCleared;
}
