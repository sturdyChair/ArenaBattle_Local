// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/UI/ABCharacterStatWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterStatWidget() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatWidget();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABCharacterStatWidget
void UABCharacterStatWidget::StaticRegisterNativesUABCharacterStatWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterStatWidget);
UClass* Z_Construct_UClass_UABCharacterStatWidget_NoRegister()
{
	return UABCharacterStatWidget::StaticClass();
}
struct Z_Construct_UClass_UABCharacterStatWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ABCharacterStatWidget.h" },
		{ "ModuleRelativePath", "UI/ABCharacterStatWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterStatWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABCharacterStatWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterStatWidget_Statics::ClassParams = {
	&UABCharacterStatWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterStatWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterStatWidget()
{
	if (!Z_Registration_Info_UClass_UABCharacterStatWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterStatWidget.OuterSingleton, Z_Construct_UClass_UABCharacterStatWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterStatWidget.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABCharacterStatWidget>()
{
	return UABCharacterStatWidget::StaticClass();
}
UABCharacterStatWidget::UABCharacterStatWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterStatWidget);
UABCharacterStatWidget::~UABCharacterStatWidget() {}
// End Class UABCharacterStatWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABCharacterStatWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterStatWidget, UABCharacterStatWidget::StaticClass, TEXT("UABCharacterStatWidget"), &Z_Registration_Info_UClass_UABCharacterStatWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterStatWidget), 2916214997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABCharacterStatWidget_h_154205665(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABCharacterStatWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABCharacterStatWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
