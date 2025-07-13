// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Character/ABCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterBase() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterBase();
ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterBase_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UAB_ComboAttackData_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABAnimationAttackInterface_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterControlData_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterItemInterface_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterWidgetInterface_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABWidgetComponent_NoRegister();
ARENABATTLE_API UEnum* Z_Construct_UEnum_ArenaBattle_ECharactetControlType();
ARENABATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FTakeItemDelegateWrapper();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Enum ECharactetControlType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharactetControlType;
static UEnum* ECharactetControlType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharactetControlType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharactetControlType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArenaBattle_ECharactetControlType, (UObject*)Z_Construct_UPackage__Script_ArenaBattle(), TEXT("ECharactetControlType"));
	}
	return Z_Registration_Info_UEnum_ECharactetControlType.OuterSingleton;
}
template<> ARENABATTLE_API UEnum* StaticEnum<ECharactetControlType>()
{
	return ECharactetControlType_StaticEnum();
}
struct Z_Construct_UEnum_ArenaBattle_ECharactetControlType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
		{ "Quater.Name", "ECharactetControlType::Quater" },
		{ "Shoulder.Name", "ECharactetControlType::Shoulder" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharactetControlType::Shoulder", (int64)ECharactetControlType::Shoulder },
		{ "ECharactetControlType::Quater", (int64)ECharactetControlType::Quater },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArenaBattle_ECharactetControlType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArenaBattle,
	nullptr,
	"ECharactetControlType",
	"ECharactetControlType",
	Z_Construct_UEnum_ArenaBattle_ECharactetControlType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArenaBattle_ECharactetControlType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArenaBattle_ECharactetControlType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArenaBattle_ECharactetControlType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArenaBattle_ECharactetControlType()
{
	if (!Z_Registration_Info_UEnum_ECharactetControlType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharactetControlType.InnerSingleton, Z_Construct_UEnum_ArenaBattle_ECharactetControlType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharactetControlType.InnerSingleton;
}
// End Enum ECharactetControlType

// Begin ScriptStruct FTakeItemDelegateWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper;
class UScriptStruct* FTakeItemDelegateWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTakeItemDelegateWrapper, (UObject*)Z_Construct_UPackage__Script_ArenaBattle(), TEXT("TakeItemDelegateWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.OuterSingleton;
}
template<> ARENABATTLE_API UScriptStruct* StaticStruct<FTakeItemDelegateWrapper>()
{
	return FTakeItemDelegateWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTakeItemDelegateWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	nullptr,
	&NewStructOps,
	"TakeItemDelegateWrapper",
	nullptr,
	0,
	sizeof(FTakeItemDelegateWrapper),
	alignof(FTakeItemDelegateWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTakeItemDelegateWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.InnerSingleton, Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper.InnerSingleton;
}
// End ScriptStruct FTakeItemDelegateWrapper

// Begin Class AABCharacterBase
void AABCharacterBase::StaticRegisterNativesAABCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABCharacterBase);
UClass* Z_Construct_UClass_AABCharacterBase_NoRegister()
{
	return AABCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AABCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ABCharacterBase.h" },
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterControlManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterControl" },
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboActionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboActionData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HpBar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakeItemActions_MetaData[] = {
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/ABCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterControlManager_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterControlManager_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterControlManager_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterControlManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboActionMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboActionData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HpBar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TakeItemActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TakeItemActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_ValueProp = { "CharacterControlManager", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UABCharacterControlData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp = { "CharacterControlManager_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ArenaBattle_ECharactetControlType, METADATA_PARAMS(0, nullptr) }; // 984388481
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager = { "CharacterControlManager", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, CharacterControlManager), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterControlManager_MetaData), NewProp_CharacterControlManager_MetaData) }; // 984388481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_ComboActionMontage = { "ComboActionMontage", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, ComboActionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboActionMontage_MetaData), NewProp_ComboActionMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_ComboActionData = { "ComboActionData", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, ComboActionData), Z_Construct_UClass_UAB_ComboAttackData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboActionData_MetaData), NewProp_ComboActionData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_DeadMontage = { "DeadMontage", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, DeadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadMontage_MetaData), NewProp_DeadMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, Stat), Z_Construct_UClass_UABCharacterStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_HpBar = { "HpBar", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, HpBar), Z_Construct_UClass_UABWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HpBar_MetaData), NewProp_HpBar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_TakeItemActions_Inner = { "TakeItemActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTakeItemDelegateWrapper, METADATA_PARAMS(0, nullptr) }; // 1791740769
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_TakeItemActions = { "TakeItemActions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, TakeItemActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakeItemActions_MetaData), NewProp_TakeItemActions_MetaData) }; // 1791740769
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacterBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_CharacterControlManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_ComboActionMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_ComboActionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_DeadMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_HpBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_TakeItemActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_TakeItemActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBase_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AABCharacterBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UABAnimationAttackInterface_NoRegister, (int32)VTABLE_OFFSET(AABCharacterBase, IABAnimationAttackInterface), false },  // 933931035
	{ Z_Construct_UClass_UABCharacterWidgetInterface_NoRegister, (int32)VTABLE_OFFSET(AABCharacterBase, IABCharacterWidgetInterface), false },  // 798325905
	{ Z_Construct_UClass_UABCharacterItemInterface_NoRegister, (int32)VTABLE_OFFSET(AABCharacterBase, IABCharacterItemInterface), false },  // 2071918642
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABCharacterBase_Statics::ClassParams = {
	&AABCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AABCharacterBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AABCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABCharacterBase()
{
	if (!Z_Registration_Info_UClass_AABCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABCharacterBase.OuterSingleton, Z_Construct_UClass_AABCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABCharacterBase.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<AABCharacterBase>()
{
	return AABCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABCharacterBase);
AABCharacterBase::~AABCharacterBase() {}
// End Class AABCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharactetControlType_StaticEnum, TEXT("ECharactetControlType"), &Z_Registration_Info_UEnum_ECharactetControlType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 984388481U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTakeItemDelegateWrapper::StaticStruct, Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics::NewStructOps, TEXT("TakeItemDelegateWrapper"), &Z_Registration_Info_UScriptStruct_TakeItemDelegateWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTakeItemDelegateWrapper), 1791740769U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABCharacterBase, AABCharacterBase::StaticClass, TEXT("AABCharacterBase"), &Z_Registration_Info_UClass_AABCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABCharacterBase), 2016533831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_1066422024(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
