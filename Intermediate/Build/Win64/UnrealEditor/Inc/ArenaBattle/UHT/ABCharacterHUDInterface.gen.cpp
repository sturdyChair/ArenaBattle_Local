// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Interface/ABCharacterHUDInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterHUDInterface() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterHUDInterface();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterHUDInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Interface UABCharacterHUDInterface
void UABCharacterHUDInterface::StaticRegisterNativesUABCharacterHUDInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterHUDInterface);
UClass* Z_Construct_UClass_UABCharacterHUDInterface_NoRegister()
{
	return UABCharacterHUDInterface::StaticClass();
}
struct Z_Construct_UClass_UABCharacterHUDInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/ABCharacterHUDInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IABCharacterHUDInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABCharacterHUDInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterHUDInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterHUDInterface_Statics::ClassParams = {
	&UABCharacterHUDInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterHUDInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterHUDInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterHUDInterface()
{
	if (!Z_Registration_Info_UClass_UABCharacterHUDInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterHUDInterface.OuterSingleton, Z_Construct_UClass_UABCharacterHUDInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterHUDInterface.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABCharacterHUDInterface>()
{
	return UABCharacterHUDInterface::StaticClass();
}
UABCharacterHUDInterface::UABCharacterHUDInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterHUDInterface);
UABCharacterHUDInterface::~UABCharacterHUDInterface() {}
// End Interface UABCharacterHUDInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterHUDInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterHUDInterface, UABCharacterHUDInterface::StaticClass, TEXT("UABCharacterHUDInterface"), &Z_Registration_Info_UClass_UABCharacterHUDInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterHUDInterface), 501653805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterHUDInterface_h_3320519081(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterHUDInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterHUDInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
