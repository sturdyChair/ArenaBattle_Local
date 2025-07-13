// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Interface/ABGameInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameInterface() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABGameInterface();
ARENABATTLE_API UClass* Z_Construct_UClass_UABGameInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Interface UABGameInterface
void UABGameInterface::StaticRegisterNativesUABGameInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABGameInterface);
UClass* Z_Construct_UClass_UABGameInterface_NoRegister()
{
	return UABGameInterface::StaticClass();
}
struct Z_Construct_UClass_UABGameInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/ABGameInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IABGameInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABGameInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABGameInterface_Statics::ClassParams = {
	&UABGameInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABGameInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UABGameInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABGameInterface()
{
	if (!Z_Registration_Info_UClass_UABGameInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABGameInterface.OuterSingleton, Z_Construct_UClass_UABGameInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABGameInterface.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABGameInterface>()
{
	return UABGameInterface::StaticClass();
}
UABGameInterface::UABGameInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameInterface);
UABGameInterface::~UABGameInterface() {}
// End Interface UABGameInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABGameInterface, UABGameInterface::StaticClass, TEXT("UABGameInterface"), &Z_Registration_Info_UClass_UABGameInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABGameInterface), 1325803388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_985079850(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
