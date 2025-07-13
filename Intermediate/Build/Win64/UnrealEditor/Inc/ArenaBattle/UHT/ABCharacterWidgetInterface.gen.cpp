// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Interface/ABCharacterWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterWidgetInterface() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterWidgetInterface();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterWidgetInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Interface UABCharacterWidgetInterface
void UABCharacterWidgetInterface::StaticRegisterNativesUABCharacterWidgetInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterWidgetInterface);
UClass* Z_Construct_UClass_UABCharacterWidgetInterface_NoRegister()
{
	return UABCharacterWidgetInterface::StaticClass();
}
struct Z_Construct_UClass_UABCharacterWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/ABCharacterWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IABCharacterWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABCharacterWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterWidgetInterface_Statics::ClassParams = {
	&UABCharacterWidgetInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UABCharacterWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterWidgetInterface.OuterSingleton, Z_Construct_UClass_UABCharacterWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterWidgetInterface.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABCharacterWidgetInterface>()
{
	return UABCharacterWidgetInterface::StaticClass();
}
UABCharacterWidgetInterface::UABCharacterWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterWidgetInterface);
UABCharacterWidgetInterface::~UABCharacterWidgetInterface() {}
// End Interface UABCharacterWidgetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterWidgetInterface, UABCharacterWidgetInterface::StaticClass, TEXT("UABCharacterWidgetInterface"), &Z_Registration_Info_UClass_UABCharacterWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterWidgetInterface), 798325905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_1729205741(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
