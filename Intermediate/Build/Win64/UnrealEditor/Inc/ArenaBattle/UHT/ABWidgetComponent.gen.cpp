// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/UI/ABWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABWidgetComponent() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABWidgetComponent();
ARENABATTLE_API UClass* Z_Construct_UClass_UABWidgetComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABWidgetComponent
void UABWidgetComponent::StaticRegisterNativesUABWidgetComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABWidgetComponent);
UClass* Z_Construct_UClass_UABWidgetComponent_NoRegister()
{
	return UABWidgetComponent::StaticClass();
}
struct Z_Construct_UClass_UABWidgetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/ABWidgetComponent.h" },
		{ "ModuleRelativePath", "UI/ABWidgetComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABWidgetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABWidgetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABWidgetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABWidgetComponent_Statics::ClassParams = {
	&UABWidgetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UABWidgetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABWidgetComponent()
{
	if (!Z_Registration_Info_UClass_UABWidgetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABWidgetComponent.OuterSingleton, Z_Construct_UClass_UABWidgetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABWidgetComponent.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABWidgetComponent>()
{
	return UABWidgetComponent::StaticClass();
}
UABWidgetComponent::UABWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABWidgetComponent);
UABWidgetComponent::~UABWidgetComponent() {}
// End Class UABWidgetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABWidgetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABWidgetComponent, UABWidgetComponent::StaticClass, TEXT("UABWidgetComponent"), &Z_Registration_Info_UClass_UABWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABWidgetComponent), 2410425310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABWidgetComponent_h_2413962310(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_UI_ABWidgetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
