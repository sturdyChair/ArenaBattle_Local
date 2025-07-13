// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABCharacterStatComponent.h"
#include "GameData/ABGameSingleton.h"

// Sets default values for this component's properties
UABCharacterStatComponent::UABCharacterStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	CurrentLevel = 1.f;
	AttackRadius = 50.f;
	bWantsInitializeComponent = true;
	// ...
}




void UABCharacterStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetLevelStat(CurrentLevel);
	SetHp(BaseStat.MaxHp);
}

void UABCharacterStatComponent::SetLevelStat(int32 InNewLevel)
{
	CurrentLevel = FMath::Clamp(InNewLevel, 1, UABGameSingleton::Get().CharacterMaxLevel);
	SetBaseStat(UABGameSingleton::Get().GetCharacterStat(CurrentLevel));
	check(BaseStat.MaxHp > 0);

}

float UABCharacterStatComponent::ApplyDamage(float InDamage)
{
	const float PrevHp = CurrentHp;
	const float ActualDamage = FMath::Clamp<float>(InDamage, 0.f, InDamage);
	SetHp(CurrentHp - InDamage);
	if (CurrentHp < KINDA_SMALL_NUMBER)
	{
		//Notify Death
		OnZeroHp.Broadcast();
	}

	return ActualDamage;
}

void UABCharacterStatComponent::SetHp(float NewHp)
{
	CurrentHp = FMath::Clamp<float>(NewHp,0.f, BaseStat.MaxHp);
	OnHpChanged.Broadcast(CurrentHp);
}

