// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Character/ABCharacterStatComponent.h"
#include "ArenaBattle/GameData/ABCharacterStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterStatComponent() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatComponent();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister();
ARENABATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FABCharacterStat();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABCharacterStatComponent
void UABCharacterStatComponent::StaticRegisterNativesUABCharacterStatComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterStatComponent);
UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister()
{
	return UABCharacterStatComponent::StaticClass();
}
struct Z_Construct_UClass_UABCharacterStatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/ABCharacterStatComponent.h" },
		{ "ModuleRelativePath", "Character/ABCharacterStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHp_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Character/ABCharacterStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Character/ABCharacterStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Character/ABCharacterStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseStat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Character/ABCharacterStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierStat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Character/ABCharacterStatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseStat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierStat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterStatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp = { "CurrentHp", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, CurrentHp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHp_MetaData), NewProp_CurrentHp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, AttackRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRadius_MetaData), NewProp_AttackRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_BaseStat = { "BaseStat", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, BaseStat), Z_Construct_UScriptStruct_FABCharacterStat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseStat_MetaData), NewProp_BaseStat_MetaData) }; // 1436401665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_ModifierStat = { "ModifierStat", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, ModifierStat), Z_Construct_UScriptStruct_FABCharacterStat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierStat_MetaData), NewProp_ModifierStat_MetaData) }; // 1436401665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_AttackRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_BaseStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_ModifierStat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABCharacterStatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterStatComponent_Statics::ClassParams = {
	&UABCharacterStatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterStatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterStatComponent()
{
	if (!Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton, Z_Construct_UClass_UABCharacterStatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABCharacterStatComponent>()
{
	return UABCharacterStatComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterStatComponent);
UABCharacterStatComponent::~UABCharacterStatComponent() {}
// End Class UABCharacterStatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterStatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterStatComponent, UABCharacterStatComponent::StaticClass, TEXT("UABCharacterStatComponent"), &Z_Registration_Info_UClass_UABCharacterStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterStatComponent), 2321693112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterStatComponent_h_1725282523(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterStatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
