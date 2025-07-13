// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/MyDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDataAsset() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UMyDataAsset();
ARENABATTLE_API UClass* Z_Construct_UClass_UMyDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UMyDataAsset
void UMyDataAsset::StaticRegisterNativesUMyDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyDataAsset);
UClass* Z_Construct_UClass_UMyDataAsset_NoRegister()
{
	return UMyDataAsset::StaticClass();
}
struct Z_Construct_UClass_UMyDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyDataAsset.h" },
		{ "ModuleRelativePath", "MyDataAsset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyDataAsset_Statics::ClassParams = {
	&UMyDataAsset::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyDataAsset()
{
	if (!Z_Registration_Info_UClass_UMyDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyDataAsset.OuterSingleton, Z_Construct_UClass_UMyDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyDataAsset.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UMyDataAsset>()
{
	return UMyDataAsset::StaticClass();
}
UMyDataAsset::UMyDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyDataAsset);
UMyDataAsset::~UMyDataAsset() {}
// End Class UMyDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_MyDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyDataAsset, UMyDataAsset::StaticClass, TEXT("UMyDataAsset"), &Z_Registration_Info_UClass_UMyDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyDataAsset), 3574296843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_MyDataAsset_h_2841623028(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_MyDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_MyDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
