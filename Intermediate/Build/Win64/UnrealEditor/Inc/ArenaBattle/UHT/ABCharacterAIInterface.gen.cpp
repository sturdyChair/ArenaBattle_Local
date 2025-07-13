// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Interface/ABCharacterAIInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterAIInterface() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterAIInterface();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterAIInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Interface UABCharacterAIInterface
void UABCharacterAIInterface::StaticRegisterNativesUABCharacterAIInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterAIInterface);
UClass* Z_Construct_UClass_UABCharacterAIInterface_NoRegister()
{
	return UABCharacterAIInterface::StaticClass();
}
struct Z_Construct_UClass_UABCharacterAIInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/ABCharacterAIInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IABCharacterAIInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABCharacterAIInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterAIInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterAIInterface_Statics::ClassParams = {
	&UABCharacterAIInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterAIInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterAIInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterAIInterface()
{
	if (!Z_Registration_Info_UClass_UABCharacterAIInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterAIInterface.OuterSingleton, Z_Construct_UClass_UABCharacterAIInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterAIInterface.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABCharacterAIInterface>()
{
	return UABCharacterAIInterface::StaticClass();
}
UABCharacterAIInterface::UABCharacterAIInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterAIInterface);
UABCharacterAIInterface::~UABCharacterAIInterface() {}
// End Interface UABCharacterAIInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterAIInterface, UABCharacterAIInterface::StaticClass, TEXT("UABCharacterAIInterface"), &Z_Registration_Info_UClass_UABCharacterAIInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterAIInterface), 3716960442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_1883518133(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
