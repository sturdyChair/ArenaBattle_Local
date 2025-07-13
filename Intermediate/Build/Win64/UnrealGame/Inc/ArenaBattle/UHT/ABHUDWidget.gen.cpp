// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/UI/ABHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABHUDWidget() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatWidget_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABHpBarWidget_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget();
ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABHUDWidget
void UABHUDWidget::StaticRegisterNativesUABHUDWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABHUDWidget);
UClass* Z_Construct_UClass_UABHUDWidget_NoRegister()
{
	return UABHUDWidget::StaticClass();
}
struct Z_Construct_UClass_UABHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ABHUDWidget.h" },
		{ "ModuleRelativePath", "UI/ABHUDWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HpBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ABHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStat_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ABHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HpBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterStat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HpBar = { "HpBar", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHUDWidget, HpBar), Z_Construct_UClass_UABHpBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HpBar_MetaData), NewProp_HpBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_CharacterStat = { "CharacterStat", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABHUDWidget, CharacterStat), Z_Construct_UClass_UABCharacterStatWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStat_MetaData), NewProp_CharacterStat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HpBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_CharacterStat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABHUDWidget_Statics::ClassParams = {
	&UABHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UABHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABHUDWidget()
{
	if (!Z_Registration_Info_UClass_UABHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABHUDWidget.OuterSingleton, Z_Construct_UClass_UABHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABHUDWidget.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABHUDWidget>()
{
	return UABHUDWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABHUDWidget);
UABHUDWidget::~UABHUDWidget() {}
// End Class UABHUDWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABHUDWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABHUDWidget, UABHUDWidget::StaticClass, TEXT("UABHUDWidget"), &Z_Registration_Info_UClass_UABHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABHUDWidget), 3363123044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABHUDWidget_h_3858276518(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABHUDWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
