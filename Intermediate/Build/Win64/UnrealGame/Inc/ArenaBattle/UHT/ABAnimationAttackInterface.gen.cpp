// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Interface/ABAnimationAttackInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAnimationAttackInterface() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABAnimationAttackInterface();
ARENABATTLE_API UClass* Z_Construct_UClass_UABAnimationAttackInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Interface UABAnimationAttackInterface
void UABAnimationAttackInterface::StaticRegisterNativesUABAnimationAttackInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABAnimationAttackInterface);
UClass* Z_Construct_UClass_UABAnimationAttackInterface_NoRegister()
{
	return UABAnimationAttackInterface::StaticClass();
}
struct Z_Construct_UClass_UABAnimationAttackInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/ABAnimationAttackInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IABAnimationAttackInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABAnimationAttackInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimationAttackInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABAnimationAttackInterface_Statics::ClassParams = {
	&UABAnimationAttackInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimationAttackInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UABAnimationAttackInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABAnimationAttackInterface()
{
	if (!Z_Registration_Info_UClass_UABAnimationAttackInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABAnimationAttackInterface.OuterSingleton, Z_Construct_UClass_UABAnimationAttackInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABAnimationAttackInterface.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABAnimationAttackInterface>()
{
	return UABAnimationAttackInterface::StaticClass();
}
UABAnimationAttackInterface::UABAnimationAttackInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABAnimationAttackInterface);
UABAnimationAttackInterface::~UABAnimationAttackInterface() {}
// End Interface UABAnimationAttackInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABAnimationAttackInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABAnimationAttackInterface, UABAnimationAttackInterface::StaticClass, TEXT("UABAnimationAttackInterface"), &Z_Registration_Info_UClass_UABAnimationAttackInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABAnimationAttackInterface), 933931035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABAnimationAttackInterface_h_2190540334(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABAnimationAttackInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABAnimationAttackInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
