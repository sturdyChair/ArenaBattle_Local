#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ABCharacterStat.generated.h"


USTRUCT(BlueprintType)
struct FABCharacterStat : public FTableRowBase
{
	GENERATED_BODY()

public:
	FABCharacterStat() : MaxHp(0.f), Attack(0.f),AttackRange(0.f),AttackSpeed(0.f), MovementSpeed(0.f) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat)
	float MaxHp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat)
	float Attack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat)
	float AttackRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat)
	float AttackSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stat)
	float MovementSpeed;

	FABCharacterStat operator+(const FABCharacterStat& rhs)
	{
		FABCharacterStat Result;
		float* ResultPtr = reinterpret_cast<float*> (&Result);
		const float* const lhsPtr = reinterpret_cast<const float* const>(this);
		const float* const rhsPtr = reinterpret_cast<const float* const>(&rhs);
		int32 StatNum = sizeof(FABCharacterStat) / sizeof(float);
		for (int32 i = 0; i < StatNum; ++i)
		{
			ResultPtr[i] = lhsPtr[i] + rhsPtr[i];
		}
		return Result;
	}
};