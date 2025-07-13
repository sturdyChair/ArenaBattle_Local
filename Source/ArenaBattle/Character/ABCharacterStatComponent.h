// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameData/ABCharacterStat.h"
#include "ABCharacterStatComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnZeroHpDelegate)
DECLARE_MULTICAST_DELEGATE_OneParam(FOnHpChangedDelegate, float /*CurrentHp*/)
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnStatChanged, const FABCharacterStat& /*BaseStat*/, const FABCharacterStat& /*ModifierStat*/)

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ARENABATTLE_API UABCharacterStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UABCharacterStatComponent();

protected:
	virtual void InitializeComponent() override;

public:
	FOnZeroHpDelegate OnZeroHp;
	FOnHpChangedDelegate OnHpChanged;
	FOnStatChanged	OnStatChanged;

	FORCEINLINE float GetMaxHp() const { return BaseStat.MaxHp + ModifierStat.MaxHp; }
	FORCEINLINE float GetCurrentHp() const { return CurrentHp; }

	void SetLevelStat(int32 InNewLevel);
	FORCEINLINE void SetModifierStat(const FABCharacterStat& InNewModifierStat) { ModifierStat = InNewModifierStat; OnStatChanged.Broadcast(GetBaseStat(), GetModifierStat()); }
	FORCEINLINE void SetBaseStat(const FABCharacterStat& InNewBaseStat) { BaseStat = InNewBaseStat; OnStatChanged.Broadcast(GetBaseStat(), GetModifierStat()); }
	FORCEINLINE FABCharacterStat GetTotalStat() { return BaseStat + ModifierStat; }
	FORCEINLINE const FABCharacterStat& GetBaseStat() const { return BaseStat; }
	FORCEINLINE const FABCharacterStat& GetModifierStat() const { return ModifierStat; }
	FORCEINLINE float GetCurrentLevel() const { return CurrentLevel; }
	FORCEINLINE float GetAttackRadius() const { return AttackRadius; }
	FORCEINLINE void AddBaseStat(const FABCharacterStat& InAddBaseStat) { SetBaseStat(BaseStat + InAddBaseStat); }
	FORCEINLINE void HealHp(float InHealAmount) { SetHp(CurrentHp + InHealAmount); }
	float ApplyDamage(float InDamage);

protected:
	void SetHp(float NewHp);

	UPROPERTY(Transient, VisibleInstanceOnly, Category = Stat)
	float CurrentHp;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = Stat)
	float CurrentLevel;

	UPROPERTY(VisibleInstanceOnly, Category = Stat, Meta = (AllowPrivateAccess = "true"))
	float AttackRadius;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = Stat, Meta =(AllowPrivateAccess = "true"))
	FABCharacterStat BaseStat;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = Stat, Meta = (AllowPrivateAccess = "true"))
	FABCharacterStat ModifierStat;
};
