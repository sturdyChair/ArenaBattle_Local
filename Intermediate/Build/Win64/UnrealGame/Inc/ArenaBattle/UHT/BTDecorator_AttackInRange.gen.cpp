// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/AI/BTDecorator_AttackInRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_AttackInRange() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
ARENABATTLE_API UClass* Z_Construct_UClass_UBTDecorator_AttackInRange();
ARENABATTLE_API UClass* Z_Construct_UClass_UBTDecorator_AttackInRange_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UBTDecorator_AttackInRange
void UBTDecorator_AttackInRange::StaticRegisterNativesUBTDecorator_AttackInRange()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_AttackInRange);
UClass* Z_Construct_UClass_UBTDecorator_AttackInRange_NoRegister()
{
	return UBTDecorator_AttackInRange::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_AttackInRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/BTDecorator_AttackInRange.h" },
		{ "ModuleRelativePath", "AI/BTDecorator_AttackInRange.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_AttackInRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTDecorator_AttackInRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_AttackInRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_AttackInRange_Statics::ClassParams = {
	&UBTDecorator_AttackInRange::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_AttackInRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_AttackInRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_AttackInRange()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_AttackInRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_AttackInRange.OuterSingleton, Z_Construct_UClass_UBTDecorator_AttackInRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_AttackInRange.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UBTDecorator_AttackInRange>()
{
	return UBTDecorator_AttackInRange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_AttackInRange);
UBTDecorator_AttackInRange::~UBTDecorator_AttackInRange() {}
// End Class UBTDecorator_AttackInRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_AI_BTDecorator_AttackInRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_AttackInRange, UBTDecorator_AttackInRange::StaticClass, TEXT("UBTDecorator_AttackInRange"), &Z_Registration_Info_UClass_UBTDecorator_AttackInRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_AttackInRange), 1183616272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_AI_BTDecorator_AttackInRange_h_3016960710(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_AI_BTDecorator_AttackInRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_AI_BTDecorator_AttackInRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
