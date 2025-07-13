// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Character/AB_ComboAttackData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAB_ComboAttackData() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UAB_ComboAttackData();
ARENABATTLE_API UClass* Z_Construct_UClass_UAB_ComboAttackData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UAB_ComboAttackData
void UAB_ComboAttackData::StaticRegisterNativesUAB_ComboAttackData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAB_ComboAttackData);
UClass* Z_Construct_UClass_UAB_ComboAttackData_NoRegister()
{
	return UAB_ComboAttackData::StaticClass();
}
struct Z_Construct_UClass_UAB_ComboAttackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/AB_ComboAttackData.h" },
		{ "ModuleRelativePath", "Character/AB_ComboAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageSectionNamePrefix_MetaData[] = {
		{ "Category", "Name" },
		{ "ModuleRelativePath", "Character/AB_ComboAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxComboCount_MetaData[] = {
		{ "Category", "Name" },
		{ "ModuleRelativePath", "Character/AB_ComboAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Name" },
		{ "ModuleRelativePath", "Character/AB_ComboAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectiveFrameCount_MetaData[] = {
		{ "Category", "ComboData" },
		{ "ModuleRelativePath", "Character/AB_ComboAttackData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MontageSectionNamePrefix;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxComboCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectiveFrameCount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectiveFrameCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAB_ComboAttackData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAB_ComboAttackData_Statics::NewProp_MontageSectionNamePrefix = { "MontageSectionNamePrefix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAB_ComboAttackData, MontageSectionNamePrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageSectionNamePrefix_MetaData), NewProp_MontageSectionNamePrefix_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAB_ComboAttackData_Statics::NewProp_MaxComboCount = { "MaxComboCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAB_ComboAttackData, MaxComboCount), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxComboCount_MetaData), NewProp_MaxComboCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAB_ComboAttackData_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAB_ComboAttackData, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAB_ComboAttackData_Statics::NewProp_EffectiveFrameCount_Inner = { "EffectiveFrameCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAB_ComboAttackData_Statics::NewProp_EffectiveFrameCount = { "EffectiveFrameCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAB_ComboAttackData, EffectiveFrameCount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectiveFrameCount_MetaData), NewProp_EffectiveFrameCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAB_ComboAttackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAB_ComboAttackData_Statics::NewProp_MontageSectionNamePrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAB_ComboAttackData_Statics::NewProp_MaxComboCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAB_ComboAttackData_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAB_ComboAttackData_Statics::NewProp_EffectiveFrameCount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAB_ComboAttackData_Statics::NewProp_EffectiveFrameCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAB_ComboAttackData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAB_ComboAttackData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAB_ComboAttackData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAB_ComboAttackData_Statics::ClassParams = {
	&UAB_ComboAttackData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAB_ComboAttackData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAB_ComboAttackData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAB_ComboAttackData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAB_ComboAttackData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAB_ComboAttackData()
{
	if (!Z_Registration_Info_UClass_UAB_ComboAttackData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAB_ComboAttackData.OuterSingleton, Z_Construct_UClass_UAB_ComboAttackData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAB_ComboAttackData.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UAB_ComboAttackData>()
{
	return UAB_ComboAttackData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAB_ComboAttackData);
UAB_ComboAttackData::~UAB_ComboAttackData() {}
// End Class UAB_ComboAttackData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AB_ComboAttackData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAB_ComboAttackData, UAB_ComboAttackData::StaticClass, TEXT("UAB_ComboAttackData"), &Z_Registration_Info_UClass_UAB_ComboAttackData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAB_ComboAttackData), 2288526358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AB_ComboAttackData_h_2155031993(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AB_ComboAttackData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AB_ComboAttackData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
