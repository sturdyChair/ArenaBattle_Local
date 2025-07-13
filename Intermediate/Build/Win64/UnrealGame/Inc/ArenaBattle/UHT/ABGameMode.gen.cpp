// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/ABGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameMode() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_AABGameMode();
ARENABATTLE_API UClass* Z_Construct_UClass_AABGameMode_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABGameInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class AABGameMode
void AABGameMode::StaticRegisterNativesAABGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABGameMode);
UClass* Z_Construct_UClass_AABGameMode_NoRegister()
{
	return AABGameMode::StaticClass();
}
struct Z_Construct_UClass_AABGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ABGameMode.h" },
		{ "ModuleRelativePath", "ABGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearScore_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "ABGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "ABGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCleared_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "ABGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClearScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
	static void NewProp_bIsCleared_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCleared;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABGameMode_Statics::NewProp_ClearScore = { "ClearScore", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABGameMode, ClearScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearScore_MetaData), NewProp_ClearScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABGameMode_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABGameMode, CurrentScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentScore_MetaData), NewProp_CurrentScore_MetaData) };
void Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleared_SetBit(void* Obj)
{
	((AABGameMode*)Obj)->bIsCleared = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleared = { "bIsCleared", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AABGameMode), &Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleared_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCleared_MetaData), NewProp_bIsCleared_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameMode_Statics::NewProp_ClearScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameMode_Statics::NewProp_CurrentScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleared,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AABGameMode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UABGameInterface_NoRegister, (int32)VTABLE_OFFSET(AABGameMode, IABGameInterface), false },  // 1325803388
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABGameMode_Statics::ClassParams = {
	&AABGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABGameMode_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AABGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABGameMode()
{
	if (!Z_Registration_Info_UClass_AABGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABGameMode.OuterSingleton, Z_Construct_UClass_AABGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABGameMode.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<AABGameMode>()
{
	return AABGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABGameMode);
AABGameMode::~AABGameMode() {}
// End Class AABGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_ABGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABGameMode, AABGameMode::StaticClass, TEXT("AABGameMode"), &Z_Registration_Info_UClass_AABGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABGameMode), 2282213252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_ABGameMode_h_2117066472(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_ABGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_ABGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
