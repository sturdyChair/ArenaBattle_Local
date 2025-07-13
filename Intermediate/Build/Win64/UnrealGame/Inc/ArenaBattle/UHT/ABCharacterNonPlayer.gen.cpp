// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Character/ABCharacterNonPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterNonPlayer() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterBase();
ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterNonPlayer();
ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterNonPlayer_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterAIInterface_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class AABCharacterNonPlayer
void AABCharacterNonPlayer::StaticRegisterNativesAABCharacterNonPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABCharacterNonPlayer);
UClass* Z_Construct_UClass_AABCharacterNonPlayer_NoRegister()
{
	return AABCharacterNonPlayer::StaticClass();
}
struct Z_Construct_UClass_AABCharacterNonPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ABCharacterNonPlayer.h" },
		{ "ModuleRelativePath", "Character/ABCharacterNonPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Character/ABCharacterNonPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPatrolRadius_MetaData[] = {
		{ "Category", "ABCharacterNonPlayer" },
		{ "ModuleRelativePath", "Character/ABCharacterNonPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCMeshes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AIPatrolRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABCharacterNonPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes_Inner = { "NPCMeshes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes = { "NPCMeshes", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterNonPlayer, NPCMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCMeshes_MetaData), NewProp_NPCMeshes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_AIPatrolRadius = { "AIPatrolRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterNonPlayer, AIPatrolRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPatrolRadius_MetaData), NewProp_AIPatrolRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABCharacterNonPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_AIPatrolRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterNonPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABCharacterNonPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AABCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterNonPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AABCharacterNonPlayer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UABCharacterAIInterface_NoRegister, (int32)VTABLE_OFFSET(AABCharacterNonPlayer, IABCharacterAIInterface), false },  // 3716960442
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABCharacterNonPlayer_Statics::ClassParams = {
	&AABCharacterNonPlayer::StaticClass,
	"ArenaBattle",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABCharacterNonPlayer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterNonPlayer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterNonPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AABCharacterNonPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABCharacterNonPlayer()
{
	if (!Z_Registration_Info_UClass_AABCharacterNonPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABCharacterNonPlayer.OuterSingleton, Z_Construct_UClass_AABCharacterNonPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABCharacterNonPlayer.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<AABCharacterNonPlayer>()
{
	return AABCharacterNonPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABCharacterNonPlayer);
AABCharacterNonPlayer::~AABCharacterNonPlayer() {}
// End Class AABCharacterNonPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABCharacterNonPlayer, AABCharacterNonPlayer::StaticClass, TEXT("AABCharacterNonPlayer"), &Z_Registration_Info_UClass_AABCharacterNonPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABCharacterNonPlayer), 1198938996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_4054407097(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
