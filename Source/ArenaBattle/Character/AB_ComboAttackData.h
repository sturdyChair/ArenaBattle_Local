// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AB_ComboAttackData.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UAB_ComboAttackData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UAB_ComboAttackData();

	UPROPERTY(EditAnywhere, Category = Name)
	FString MontageSectionNamePrefix;
	UPROPERTY(EditAnywhere, Category = Name)
	uint8 MaxComboCount;
	UPROPERTY(EditAnywhere, Category = Name)
	float FrameRate;
	UPROPERTY(EditAnywhere, Category = ComboData)
	TArray<float> EffectiveFrameCount;
};
