// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ABCharacterBase.h"
#include "Engine/StreamableManager.h"
#include "Interface/ABCharacterAIInterface.h"
#include "ABCharacterNonPlayer.generated.h"

/**
 * 
 */
UCLASS(config = ArenaBattle)
class ARENABATTLE_API AABCharacterNonPlayer : public AABCharacterBase, public IABCharacterAIInterface
{
	GENERATED_BODY()
public:
	AABCharacterNonPlayer();

protected:
	virtual void PostInitializeComponents() override;

protected:
	void SetDead() override;

	void NPCMeshLoadCompleted();

	UPROPERTY(config)
	TArray<FSoftObjectPath> NPCMeshes;

	TSharedPtr<FStreamableHandle> NPCMeshHandle;
	
	//AI Interface
protected:
	virtual float GetAIPatrolRadius()	override;
	virtual float GetAIDetectRange()	override;
	virtual float GetAIAttackRange()	override;
	virtual float GetAITurnSpeed()		override;

	virtual void SetAIAttackDelegate(const FATCharacterAttackFinished& InOnAttackFinished) override;
	virtual void AttackByAI() override;

	virtual void NotifyComboActionEnd() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AIPatrolRadius;

	FATCharacterAttackFinished OnAttackFinished;
};
