// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/GameData/ABCharacterStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterStat() {}

// Begin Cross Module References
ARENABATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FABCharacterStat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin ScriptStruct FABCharacterStat
static_assert(std::is_polymorphic<FABCharacterStat>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FABCharacterStat cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ABCharacterStat;
class UScriptStruct* FABCharacterStat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ABCharacterStat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ABCharacterStat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FABCharacterStat, (UObject*)Z_Construct_UPackage__Script_ArenaBattle(), TEXT("ABCharacterStat"));
	}
	return Z_Registration_Info_UScriptStruct_ABCharacterStat.OuterSingleton;
}
template<> ARENABATTLE_API UScriptStruct* StaticStruct<FABCharacterStat>()
{
	return FABCharacterStat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FABCharacterStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "GameData/ABCharacterStat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Attack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FABCharacterStat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MaxHp = { "MaxHp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FABCharacterStat, MaxHp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHp_MetaData), NewProp_MaxHp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FABCharacterStat, Attack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attack_MetaData), NewProp_Attack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FABCharacterStat, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FABCharacterStat, AttackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeed_MetaData), NewProp_AttackSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FABCharacterStat, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FABCharacterStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MaxHp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_Attack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_AttackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewProp_MovementSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FABCharacterStat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ABCharacterStat",
	Z_Construct_UScriptStruct_FABCharacterStat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterStat_Statics::PropPointers),
	sizeof(FABCharacterStat),
	alignof(FABCharacterStat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterStat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FABCharacterStat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FABCharacterStat()
{
	if (!Z_Registration_Info_UScriptStruct_ABCharacterStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ABCharacterStat.InnerSingleton, Z_Construct_UScriptStruct_FABCharacterStat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ABCharacterStat.InnerSingleton;
}
// End ScriptStruct FABCharacterStat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABCharacterStat_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FABCharacterStat::StaticStruct, Z_Construct_UScriptStruct_FABCharacterStat_Statics::NewStructOps, TEXT("ABCharacterStat"), &Z_Registration_Info_UScriptStruct_ABCharacterStat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FABCharacterStat), 1436401665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABCharacterStat_h_3293102605(TEXT("/Script/ArenaBattle"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABCharacterStat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABCharacterStat_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
