// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Interface/ABCharacterItemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterItemInterface() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterItemInterface();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterItemInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Interface UABCharacterItemInterface
void UABCharacterItemInterface::StaticRegisterNativesUABCharacterItemInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterItemInterface);
UClass* Z_Construct_UClass_UABCharacterItemInterface_NoRegister()
{
	return UABCharacterItemInterface::StaticClass();
}
struct Z_Construct_UClass_UABCharacterItemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/ABCharacterItemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IABCharacterItemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABCharacterItemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterItemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterItemInterface_Statics::ClassParams = {
	&UABCharacterItemInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterItemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterItemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterItemInterface()
{
	if (!Z_Registration_Info_UClass_UABCharacterItemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterItemInterface.OuterSingleton, Z_Construct_UClass_UABCharacterItemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterItemInterface.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABCharacterItemInterface>()
{
	return UABCharacterItemInterface::StaticClass();
}
UABCharacterItemInterface::UABCharacterItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterItemInterface);
UABCharacterItemInterface::~UABCharacterItemInterface() {}
// End Interface UABCharacterItemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterItemInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterItemInterface, UABCharacterItemInterface::StaticClass, TEXT("UABCharacterItemInterface"), &Z_Registration_Info_UClass_UABCharacterItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterItemInterface), 2071918642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterItemInterface_h_1301046153(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterItemInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
