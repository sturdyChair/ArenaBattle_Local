// Fill out your copyright notice in the Description page of Project Settings.


#include "GameData/ABGameSingleton.h"
#include "Engine/DataTable.h"

DEFINE_LOG_CATEGORY(LogABGameSingleton);

UABGameSingleton::UABGameSingleton()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> DataTableRef(TEXT("/Script/Engine.DataTable'/Game/ArenaBattle/GameData/ABCharacterStatTable.ABCharacterStatTable'"));
	if (DataTableRef.Object)
	{
		const UDataTable* DataTable = DataTableRef.Object;
		check(DataTable->GetRowMap().Num() > 0);
		TArray<uint8*> ValueArray;
		DataTable->GetRowMap().GenerateValueArray(ValueArray);
		Algo::Transform(ValueArray, CharacterStatTable, [](uint8* value) 
			{
				return *reinterpret_cast<FABCharacterStat*>(value);
			});
	}
	CharacterMaxLevel = CharacterStatTable.Num();
	ensure(CharacterMaxLevel > 0);
}

UABGameSingleton& UABGameSingleton::Get()
{
	UABGameSingleton* Singleton = CastChecked<UABGameSingleton>(GEngine->GameSingleton);
	if (!Singleton)
	{
		UE_LOG(LogABGameSingleton, Error, TEXT("Invalid Game Singleton"));
	}
	return *Singleton;
}
