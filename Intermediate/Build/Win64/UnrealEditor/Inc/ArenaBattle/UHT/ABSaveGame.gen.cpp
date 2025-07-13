// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Player/ABSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSaveGame() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABSaveGame();
ARENABATTLE_API UClass* Z_Construct_UClass_UABSaveGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABSaveGame
void UABSaveGame::StaticRegisterNativesUABSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABSaveGame);
UClass* Z_Construct_UClass_UABSaveGame_NoRegister()
{
	return UABSaveGame::StaticClass();
}
struct Z_Construct_UClass_UABSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/ABSaveGame.h" },
		{ "ModuleRelativePath", "Player/ABSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetryCount_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Player/ABSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RetryCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABSaveGame_Statics::NewProp_RetryCount = { "RetryCount", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABSaveGame, RetryCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetryCount_MetaData), NewProp_RetryCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABSaveGame_Statics::NewProp_RetryCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABSaveGame_Statics::ClassParams = {
	&UABSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UABSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABSaveGame()
{
	if (!Z_Registration_Info_UClass_UABSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABSaveGame.OuterSingleton, Z_Construct_UClass_UABSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABSaveGame.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABSaveGame>()
{
	return UABSaveGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABSaveGame);
UABSaveGame::~UABSaveGame() {}
// End Class UABSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABSaveGame, UABSaveGame::StaticClass, TEXT("UABSaveGame"), &Z_Registration_Info_UClass_UABSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABSaveGame), 4249098103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h_4107319516(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
