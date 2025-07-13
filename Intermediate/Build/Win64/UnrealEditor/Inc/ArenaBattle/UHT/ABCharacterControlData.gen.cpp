// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Character/ABCharacterControlData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterControlData() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterControlData();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterControlData_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class UABCharacterControlData
void UABCharacterControlData::StaticRegisterNativesUABCharacterControlData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterControlData);
UClass* Z_Construct_UClass_UABCharacterControlData_NoRegister()
{
	return UABCharacterControlData::StaticClass();
}
struct Z_Construct_UClass_UABCharacterControlData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/ABCharacterControlData.h" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationYaw_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientRotationToMovement_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerDesiredRotation_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritPitch_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritYaw_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritRoll_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoCollisionTest_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseControllerRotationYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationYaw;
	static void NewProp_bOrientRotationToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientRotationToMovement;
	static void NewProp_bUseControllerDesiredRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerDesiredRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
	static void NewProp_bUsePawnControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation;
	static void NewProp_bInheritPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritPitch;
	static void NewProp_bInheritYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritYaw;
	static void NewProp_bInheritRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritRoll;
	static void NewProp_bDoCollisionTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCollisionTest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterControlData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_SetBit(void* Obj)
{
	((UABCharacterControlData*)Obj)->bUseControllerRotationYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw = { "bUseControllerRotationYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseControllerRotationYaw_MetaData), NewProp_bUseControllerRotationYaw_MetaData) };
void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement_SetBit(void* Obj)
{
	((UABCharacterControlData*)Obj)->bOrientRotationToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement = { "bOrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientRotationToMovement_MetaData), NewProp_bOrientRotationToMovement_MetaData) };
void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation_SetBit(void* Obj)
{
	((UABCharacterControlData*)Obj)->bUseControllerDesiredRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation = { "bUseControllerDesiredRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseControllerDesiredRotation_MetaData), NewProp_bUseControllerDesiredRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterControlData, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterControlData, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterControlData, TargetArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetArmLength_MetaData), NewProp_TargetArmLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterControlData, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeRotation_MetaData), NewProp_RelativeRotation_MetaData) };
void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation_SetBit(void* Obj)
{
	((UABCharacterControlData*)Obj)->bUsePawnControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation = { "bUsePawnControlRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePawnControlRotation_MetaData), NewProp_bUsePawnControlRotation_MetaData) };
void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch_SetBit(void* Obj)
{
	((UABCharacterControlData*)Obj)->bInheritPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch = { "bInheritPitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritPitch_MetaData), NewProp_bInheritPitch_MetaData) };
void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw_SetBit(void* Obj)
{
	((UABCharacterControlData*)Obj)->bInheritYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw = { "bInheritYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritYaw_MetaData), NewProp_bInheritYaw_MetaData) };
void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll_SetBit(void* Obj)
{
	((UABCharacterControlData*)Obj)->bInheritRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll = { "bInheritRoll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritRoll_MetaData), NewProp_bInheritRoll_MetaData) };
void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest_SetBit(void* Obj)
{
	((UABCharacterControlData*)Obj)->bDoCollisionTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest = { "bDoCollisionTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoCollisionTest_MetaData), NewProp_bDoCollisionTest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterControlData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_TargetArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABCharacterControlData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterControlData_Statics::ClassParams = {
	&UABCharacterControlData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABCharacterControlData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterControlData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCharacterControlData()
{
	if (!Z_Registration_Info_UClass_UABCharacterControlData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterControlData.OuterSingleton, Z_Construct_UClass_UABCharacterControlData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCharacterControlData.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<UABCharacterControlData>()
{
	return UABCharacterControlData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterControlData);
UABCharacterControlData::~UABCharacterControlData() {}
// End Class UABCharacterControlData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterControlData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterControlData, UABCharacterControlData::StaticClass, TEXT("UABCharacterControlData"), &Z_Registration_Info_UClass_UABCharacterControlData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterControlData), 2984678640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterControlData_h_340994966(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterControlData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterControlData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
