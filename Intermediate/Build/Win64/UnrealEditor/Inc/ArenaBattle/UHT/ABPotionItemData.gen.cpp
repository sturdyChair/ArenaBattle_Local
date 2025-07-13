// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Item/ABPotionItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPotionItemData() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABItemData();
ARENABATTLE_API UClass* Z_Construct_UClass_UABPotionItemData();
ARENABATTLE_API UClass* Z_Construct_UClass_UABPotionItemData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABPotionItemData
void UABPotionItemData::StaticRegisterNativesUABPotionItemData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABPotionItemData);
UClass* Z_Construct_UClass_UABPotionItemData_NoRegister()
{
	return UABPotionItemData::StaticClass();
}
struct Z_Construct_UClass_UABPotionItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Item/ABPotionItemData.h" },
		{ "ModuleRelativePath", "Item/ABPotionItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[] = {
		{ "Category", "Hp" },
		{ "ModuleRelativePath", "Item/ABPotionItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABPotionItemData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABPotionItemData_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABPotionItemData, HealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealAmount_MetaData), NewProp_HealAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABPotionItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABPotionItemData_Statics::NewProp_HealAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABPotionItemData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABPotionItemData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UABItemData,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABPotionItemData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABPotionItemData_Statics::ClassParams = {
	&UABPotionItemData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABPotionItemData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABPotionItemData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABPotionItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_UABPotionItemData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABPotionItemData()
{
	if (!Z_Registration_Info_UClass_UABPotionItemData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABPotionItemData.OuterSingleton, Z_Construct_UClass_UABPotionItemData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABPotionItemData.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABPotionItemData>()
{
	return UABPotionItemData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABPotionItemData);
UABPotionItemData::~UABPotionItemData() {}
// End Class UABPotionItemData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Item_ABPotionItemData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABPotionItemData, UABPotionItemData::StaticClass, TEXT("UABPotionItemData"), &Z_Registration_Info_UClass_UABPotionItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABPotionItemData), 1719574601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Item_ABPotionItemData_h_816397934(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Item_ABPotionItemData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Item_ABPotionItemData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
