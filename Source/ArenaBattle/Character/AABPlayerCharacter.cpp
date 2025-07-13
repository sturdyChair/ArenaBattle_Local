// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AABPlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFrameWork/SpringArmComponent.h"
#include "EnhancedInput/Public/InputMappingContext.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "Character/ABCharacterControlData.h"
#include "UI/ABHUDWidget.h"
#include "ABCharacterStatComponent.h"
#include "Interface/ABGameInterface.h"
#include "ABGameMode.h"

AAABPlayerCharacter::AAABPlayerCharacter()
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	static ConstructorHelpers::FObjectFinder<UInputAction>
		MoveActionRef(TEXT("/Game/ArenaBattle/Input/Actions/IA_ShoulderMove.IA_ShoulderMove"));
	if (MoveActionRef.Object)
		ShoulderMoveAction = MoveActionRef.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction>
		LookActionRef(TEXT("/Game/ArenaBattle/Input/Actions/IA_ShoulderLook.IA_ShoulderLook"));
	if (LookActionRef.Object)
		ShoulderLookAction = LookActionRef.Object;


	static ConstructorHelpers::FObjectFinder<UInputAction>
		QuaterMoveActionRef(TEXT("/Game/ArenaBattle/Input/Actions/IA_QuaterMove.IA_QuaterMove"));
	if (QuaterMoveActionRef.Object)
		QuaterMoveAction = QuaterMoveActionRef.Object;


	static ConstructorHelpers::FObjectFinder<UInputAction>
		JumpActionRef(TEXT("/Game/ArenaBattle/Input/Actions/IA_Jump.IA_Jump"));
	if (JumpActionRef.Object)
		JumpAction = JumpActionRef.Object;


	static ConstructorHelpers::FObjectFinder<UInputAction>
		ChangeContorlActionRef(TEXT("/Game/ArenaBattle/Input/Actions/IA_ControlChange.IA_ControlChange"));
	if (ChangeContorlActionRef.Object)
		ChangeControlAction = ChangeContorlActionRef.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction>
		AttackActionRef(TEXT("/Game/ArenaBattle/Input/Actions/IA_Attack.IA_Attack"));
	if (AttackActionRef.Object)
		AttackAction = AttackActionRef.Object;
	///Script/EnhancedInput.InputMappingContext'/Game/ArenaBattle/Input/IMC_Default.IMC_Default'
	
}

void AAABPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
	EnhancedInputComponent->BindAction(ShoulderMoveAction, ETriggerEvent::Triggered, this, &AAABPlayerCharacter::ShoulderMove);
	EnhancedInputComponent->BindAction(ShoulderLookAction, ETriggerEvent::Triggered, this, &AAABPlayerCharacter::ShoulderLook);

	EnhancedInputComponent->BindAction(QuaterMoveAction, ETriggerEvent::Triggered, this, &AAABPlayerCharacter::QuaterMove);

	EnhancedInputComponent->BindAction(ChangeControlAction, ETriggerEvent::Triggered, this, &AAABPlayerCharacter::ChangeCharacterControl);
	EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Triggered, this, &AAABPlayerCharacter::Attack);
}

void AAABPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	CurrentCharacterControlType = ECharactetControlType::Quater;
	SetCharacterControl(CurrentCharacterControlType);
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		EnableInput(PlayerController);
	}

}

void AAABPlayerCharacter::SetDead()
{
	Super::SetDead();
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		DisableInput(PlayerController);
		IABGameInterface* GameMode = Cast<IABGameInterface>(GetWorld()->GetAuthGameMode());
		if (GameMode)
		{
			GameMode->OnPlayerDead();
		}
	}
	
}

void AAABPlayerCharacter::ChangeCharacterControl()
{
	if (CurrentCharacterControlType == ECharactetControlType::Shoulder)
	{
		SetCharacterControl(ECharactetControlType::Quater);
	}
	else if (CurrentCharacterControlType == ECharactetControlType::Quater)
	{
		SetCharacterControl(ECharactetControlType::Shoulder);
	}
}

void AAABPlayerCharacter::SetCharacterControl(ECharactetControlType NewCharacterControlType)
{
	UABCharacterControlData* NewControlData = CharacterControlManager[NewCharacterControlType];
	check(NewControlData);
	SetCharacterControlData(NewControlData);
	CurrentCharacterControlType = NewCharacterControlType;

	APlayerController* PlayerController = CastChecked<APlayerController>(GetController());
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
	{
		Subsystem->ClearAllMappings();
		Subsystem->AddMappingContext(NewControlData->InputMappingContext, 0);
	}

}

void AAABPlayerCharacter::SetCharacterControlData(const UABCharacterControlData* CharacterControlData)
{
	Super::SetCharacterControlData(CharacterControlData);


	CameraBoom->TargetArmLength = CharacterControlData->TargetArmLength;
	CameraBoom->SetRelativeRotation(CharacterControlData->RelativeRotation);
	CameraBoom->bUsePawnControlRotation = CharacterControlData->bUsePawnControlRotation;
	CameraBoom->bInheritPitch = CharacterControlData->bInheritPitch;
	CameraBoom->bInheritYaw = CharacterControlData->bInheritYaw;
	CameraBoom->bInheritRoll = CharacterControlData->bInheritRoll;
	CameraBoom->bDoCollisionTest = CharacterControlData->bDoCollisionTest;

}

void AAABPlayerCharacter::ShoulderMove(const FInputActionValue& InputValue)
{
	FVector2D MovementVector = InputValue.Get<FVector2D>();
	FRotationMatrix RotationMatrix(FRotator(0.f, Controller->GetControlRotation().Yaw, 0.f));
	FVector ForwardDirection = RotationMatrix.GetUnitAxis(EAxis::X);
	FVector RightDirection = RotationMatrix.GetUnitAxis(EAxis::Y);

	AddMovementInput(ForwardDirection, MovementVector.X);
	AddMovementInput(RightDirection, MovementVector.Y);

}

void AAABPlayerCharacter::ShoulderLook(const FInputActionValue& InputValue)
{
	FVector2D LookAxisVector = InputValue.Get<FVector2D>();

	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);

}

void AAABPlayerCharacter::QuaterMove(const FInputActionValue& InputValue)
{
	FVector2D MovementVector = InputValue.Get<FVector2D>();

	float InputSizeSquared = MovementVector.SquaredLength();
	float MovementVectorSize = 1.0f;
	float MovementVectorSizeSquared = MovementVector.SquaredLength();
	if (MovementVectorSizeSquared > 1.0f)
	{
		MovementVector.Normalize();
		MovementVectorSizeSquared = 1.0f;
	}
	else
	{
		MovementVectorSize = FMath::Sqrt(MovementVectorSizeSquared);
	}

	FVector MoveDirection = FVector(MovementVector.X, MovementVector.Y, 0.0f);
	GetController()->SetControlRotation(FRotationMatrix::MakeFromX(MoveDirection).Rotator());
	AddMovementInput(MoveDirection, MovementVectorSize);
}

void AAABPlayerCharacter::Attack()
{
	ProcessComboCommand();
}

void AAABPlayerCharacter::SetupHUDWidget(UABHUDWidget* InUserWidget)
{
	if (InUserWidget)
	{
		InUserWidget->UpdateStat(Stat->GetBaseStat(), Stat->GetModifierStat());
		InUserWidget->UpdateHpBar(Stat->GetCurrentHp());
		Stat->OnStatChanged.AddUObject(InUserWidget, &UABHUDWidget::UpdateStat);
		Stat->OnHpChanged.AddUObject(InUserWidget, &UABHUDWidget::UpdateHpBar);
	}
}
