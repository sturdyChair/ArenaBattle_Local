// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/UI/ABHpBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABHpBarWidget() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABHpBarWidget();
ARENABATTLE_API UClass* Z_Construct_UClass_UABHpBarWidget_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABUserWidget();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABHpBarWidget
void UABHpBarWidget::StaticRegisterNativesUABHpBarWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABHpBarWidget);
UClass* Z_Construct_UClass_UABHpBarWidget_NoRegister()
{
	return UABHpBarWidget::StaticClass();
}
struct Z_Construct_UClass_UABHpBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ABHpBarWidget.h" },
		{ "ModuleRelativePath", "UI/ABHpBarWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HpProgressBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ABHpBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HpStat_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ABHpBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHp_MetaData[] = {
		{ "ModuleRelativePath", "UI/ABHpBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[] = {
		{ "ModuleRelativePath", "UI/ABHpBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HpProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HpStat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABHpBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHpBarWidget_Statics::NewProp_HpProgressBar = { "HpProgressBar", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHpBarWidget, HpProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HpProgressBar_MetaData), NewProp_HpProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHpBarWidget_Statics::NewProp_HpStat = { "HpStat", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHpBarWidget, HpStat), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HpStat_MetaData), NewProp_HpStat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABHpBarWidget_Statics::NewProp_CurrentHp = { "CurrentHp", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHpBarWidget, CurrentHp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHp_MetaData), NewProp_CurrentHp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABHpBarWidget_Statics::NewProp_MaxHp = { "MaxHp", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHpBarWidget, MaxHp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHp_MetaData), NewProp_MaxHp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABHpBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHpBarWidget_Statics::NewProp_HpProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHpBarWidget_Statics::NewProp_HpStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHpBarWidget_Statics::NewProp_CurrentHp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHpBarWidget_Statics::NewProp_MaxHp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABHpBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABHpBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UABUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABHpBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABHpBarWidget_Statics::ClassParams = {
	&UABHpBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABHpBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABHpBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABHpBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UABHpBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABHpBarWidget()
{
	if (!Z_Registration_Info_UClass_UABHpBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABHpBarWidget.OuterSingleton, Z_Construct_UClass_UABHpBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABHpBarWidget.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABHpBarWidget>()
{
	return UABHpBarWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABHpBarWidget);
UABHpBarWidget::~UABHpBarWidget() {}
// End Class UABHpBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABHpBarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABHpBarWidget, UABHpBarWidget::StaticClass, TEXT("UABHpBarWidget"), &Z_Registration_Info_UClass_UABHpBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABHpBarWidget), 1585784290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABHpBarWidget_h_1231284384(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABHpBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABHpBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
