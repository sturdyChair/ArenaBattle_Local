// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/UI/ABUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABUserWidget() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABUserWidget();
ARENABATTLE_API UClass* Z_Construct_UClass_UABUserWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABUserWidget
void UABUserWidget::StaticRegisterNativesUABUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABUserWidget);
UClass* Z_Construct_UClass_UABUserWidget_NoRegister()
{
	return UABUserWidget::StaticClass();
}
struct Z_Construct_UClass_UABUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ABUserWidget.h" },
		{ "ModuleRelativePath", "UI/ABUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "UI/ABUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABUserWidget_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABUserWidget, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningActor_MetaData), NewProp_OwningActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABUserWidget_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABUserWidget_Statics::ClassParams = {
	&UABUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UABUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABUserWidget()
{
	if (!Z_Registration_Info_UClass_UABUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABUserWidget.OuterSingleton, Z_Construct_UClass_UABUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABUserWidget.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABUserWidget>()
{
	return UABUserWidget::StaticClass();
}
UABUserWidget::UABUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABUserWidget);
UABUserWidget::~UABUserWidget() {}
// End Class UABUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABUserWidget, UABUserWidget::StaticClass, TEXT("UABUserWidget"), &Z_Registration_Info_UClass_UABUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABUserWidget), 2507023173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABUserWidget_h_1358217393(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
