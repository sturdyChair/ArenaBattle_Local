// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/GameData/ABGameSingleton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameSingleton() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABGameSingleton();
ARENABATTLE_API UClass* Z_Construct_UClass_UABGameSingleton_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABGameSingleton
void UABGameSingleton::StaticRegisterNativesUABGameSingleton()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABGameSingleton);
UClass* Z_Construct_UClass_UABGameSingleton_NoRegister()
{
	return UABGameSingleton::StaticClass();
}
struct Z_Construct_UClass_UABGameSingleton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameData/ABGameSingleton.h" },
		{ "ModuleRelativePath", "GameData/ABGameSingleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMaxLevel_MetaData[] = {
		{ "ModuleRelativePath", "GameData/ABGameSingleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterMaxLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGameSingleton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABGameSingleton_Statics::NewProp_CharacterMaxLevel = { "CharacterMaxLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABGameSingleton, CharacterMaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMaxLevel_MetaData), NewProp_CharacterMaxLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABGameSingleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameSingleton_Statics::NewProp_CharacterMaxLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameSingleton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABGameSingleton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameSingleton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABGameSingleton_Statics::ClassParams = {
	&UABGameSingleton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABGameSingleton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABGameSingleton_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameSingleton_Statics::Class_MetaDataParams), Z_Construct_UClass_UABGameSingleton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABGameSingleton()
{
	if (!Z_Registration_Info_UClass_UABGameSingleton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABGameSingleton.OuterSingleton, Z_Construct_UClass_UABGameSingleton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABGameSingleton.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABGameSingleton>()
{
	return UABGameSingleton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameSingleton);
UABGameSingleton::~UABGameSingleton() {}
// End Class UABGameSingleton

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABGameSingleton, UABGameSingleton::StaticClass, TEXT("UABGameSingleton"), &Z_Registration_Info_UClass_UABGameSingleton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABGameSingleton), 1735475122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_336764407(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
