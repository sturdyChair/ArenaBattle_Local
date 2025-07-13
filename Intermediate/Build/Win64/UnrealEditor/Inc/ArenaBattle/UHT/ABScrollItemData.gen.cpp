// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Item/ABScrollItemData.h"
#include "ArenaBattle/GameData/ABCharacterStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABScrollItemData() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABItemData();
ARENABATTLE_API UClass* Z_Construct_UClass_UABScrollItemData();
ARENABATTLE_API UClass* Z_Construct_UClass_UABScrollItemData_NoRegister();
ARENABATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FABCharacterStat();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABScrollItemData
void UABScrollItemData::StaticRegisterNativesUABScrollItemData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABScrollItemData);
UClass* Z_Construct_UClass_UABScrollItemData_NoRegister()
{
	return UABScrollItemData::StaticClass();
}
struct Z_Construct_UClass_UABScrollItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Item/ABScrollItemData.h" },
		{ "ModuleRelativePath", "Item/ABScrollItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseStat_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Item/ABScrollItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseStat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABScrollItemData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABScrollItemData_Statics::NewProp_BaseStat = { "BaseStat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABScrollItemData, BaseStat), Z_Construct_UScriptStruct_FABCharacterStat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseStat_MetaData), NewProp_BaseStat_MetaData) }; // 1436401665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABScrollItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABScrollItemData_Statics::NewProp_BaseStat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABScrollItemData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABScrollItemData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UABItemData,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABScrollItemData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABScrollItemData_Statics::ClassParams = {
	&UABScrollItemData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABScrollItemData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABScrollItemData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABScrollItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_UABScrollItemData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABScrollItemData()
{
	if (!Z_Registration_Info_UClass_UABScrollItemData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABScrollItemData.OuterSingleton, Z_Construct_UClass_UABScrollItemData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABScrollItemData.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABScrollItemData>()
{
	return UABScrollItemData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABScrollItemData);
UABScrollItemData::~UABScrollItemData() {}
// End Class UABScrollItemData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Item_ABScrollItemData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABScrollItemData, UABScrollItemData::StaticClass, TEXT("UABScrollItemData"), &Z_Registration_Info_UClass_UABScrollItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABScrollItemData), 1707275991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Item_ABScrollItemData_h_270450919(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Item_ABScrollItemData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Item_ABScrollItemData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
