// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Gimmick/ABStageGimmick.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABStageGimmick() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterNonPlayer_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_AABItemBox_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_AABStageGimmick();
ARENABATTLE_API UClass* Z_Construct_UClass_AABStageGimmick_NoRegister();
ARENABATTLE_API UEnum* Z_Construct_UEnum_ArenaBattle_EStageState();
ARENABATTLE_API UScriptStruct* Z_Construct_UScriptStruct_FStageStateChangedDelegateWrapper();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Enum EStageState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStageState;
static UEnum* EStageState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStageState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStageState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArenaBattle_EStageState, (UObject*)Z_Construct_UPackage__Script_ArenaBattle(), TEXT("EStageState"));
	}
	return Z_Registration_Info_UEnum_EStageState.OuterSingleton;
}
template<> ARENABATTLE_API UEnum* StaticEnum<EStageState>()
{
	return EStageState_StaticEnum();
}
struct Z_Construct_UEnum_ArenaBattle_EStageState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FIGHT.Name", "EStageState::FIGHT" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
		{ "NEXT.Name", "EStageState::NEXT" },
		{ "READY.Name", "EStageState::READY" },
		{ "REWARD.Name", "EStageState::REWARD" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStageState::READY", (int64)EStageState::READY },
		{ "EStageState::FIGHT", (int64)EStageState::FIGHT },
		{ "EStageState::REWARD", (int64)EStageState::REWARD },
		{ "EStageState::NEXT", (int64)EStageState::NEXT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArenaBattle_EStageState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ArenaBattle,
	nullptr,
	"EStageState",
	"EStageState",
	Z_Construct_UEnum_ArenaBattle_EStageState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ArenaBattle_EStageState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ArenaBattle_EStageState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ArenaBattle_EStageState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ArenaBattle_EStageState()
{
	if (!Z_Registration_Info_UEnum_EStageState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStageState.InnerSingleton, Z_Construct_UEnum_ArenaBattle_EStageState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStageState.InnerSingleton;
}
// End Enum EStageState

// Begin ScriptStruct FStageStateChangedDelegateWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageStateChangedDelegateWrapper;
class UScriptStruct* FStageStateChangedDelegateWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageStateChangedDelegateWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageStateChangedDelegateWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageStateChangedDelegateWrapper, (UObject*)Z_Construct_UPackage__Script_ArenaBattle(), TEXT("StageStateChangedDelegateWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StageStateChangedDelegateWrapper.OuterSingleton;
}
template<> ARENABATTLE_API UScriptStruct* StaticStruct<FStageStateChangedDelegateWrapper>()
{
	return FStageStateChangedDelegateWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStageStateChangedDelegateWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageStateChangedDelegateWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageStateChangedDelegateWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	nullptr,
	&NewStructOps,
	"StageStateChangedDelegateWrapper",
	nullptr,
	0,
	sizeof(FStageStateChangedDelegateWrapper),
	alignof(FStageStateChangedDelegateWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageStateChangedDelegateWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStageStateChangedDelegateWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStageStateChangedDelegateWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_StageStateChangedDelegateWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageStateChangedDelegateWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStageStateChangedDelegateWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StageStateChangedDelegateWrapper.InnerSingleton;
}
// End ScriptStruct FStageStateChangedDelegateWrapper

// Begin Class AABStageGimmick Function OnGateTriggerBeginOverlap
struct Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics
{
	struct ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool FromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_FromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_FromSweep_SetBit(void* Obj)
{
	((ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms*)Obj)->FromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_FromSweep = { "FromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms), &Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_FromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_FromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABStageGimmick, nullptr, "OnGateTriggerBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABStageGimmick::execOnGateTriggerBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_FromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGateTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_FromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AABStageGimmick Function OnGateTriggerBeginOverlap

// Begin Class AABStageGimmick Function OnOpponentDestroy
struct Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics
{
	struct ABStageGimmick_eventOnOpponentDestroy_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnOpponentDestroy_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABStageGimmick, nullptr, "OnOpponentDestroy", nullptr, nullptr, Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::ABStageGimmick_eventOnOpponentDestroy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::ABStageGimmick_eventOnOpponentDestroy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABStageGimmick::execOnOpponentDestroy)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOpponentDestroy(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class AABStageGimmick Function OnOpponentDestroy

// Begin Class AABStageGimmick Function OnRewardTriggerBeginOverlap
struct Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics
{
	struct ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool FromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_FromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_FromSweep_SetBit(void* Obj)
{
	((ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms*)Obj)->FromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_FromSweep = { "FromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms), &Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_FromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_FromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABStageGimmick, nullptr, "OnRewardTriggerBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABStageGimmick::execOnRewardTriggerBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_FromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRewardTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_FromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AABStageGimmick Function OnRewardTriggerBeginOverlap

// Begin Class AABStageGimmick Function OnStageTriggerBeginOverlap
struct Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics
{
	struct ABStageGimmick_eventOnStageTriggerBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool FromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_FromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnStageTriggerBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnStageTriggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnStageTriggerBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnStageTriggerBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_FromSweep_SetBit(void* Obj)
{
	((ABStageGimmick_eventOnStageTriggerBeginOverlap_Parms*)Obj)->FromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_FromSweep = { "FromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABStageGimmick_eventOnStageTriggerBeginOverlap_Parms), &Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_FromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnStageTriggerBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_FromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABStageGimmick, nullptr, "OnStageTriggerBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::ABStageGimmick_eventOnStageTriggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::ABStageGimmick_eventOnStageTriggerBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABStageGimmick::execOnStageTriggerBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_FromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStageTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_FromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AABStageGimmick Function OnStageTriggerBeginOverlap

// Begin Class AABStageGimmick
void AABStageGimmick::StaticRegisterNativesAABStageGimmick()
{
	UClass* Class = AABStageGimmick::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnGateTriggerBeginOverlap", &AABStageGimmick::execOnGateTriggerBeginOverlap },
		{ "OnOpponentDestroy", &AABStageGimmick::execOnOpponentDestroy },
		{ "OnRewardTriggerBeginOverlap", &AABStageGimmick::execOnRewardTriggerBeginOverlap },
		{ "OnStageTriggerBeginOverlap", &AABStageGimmick::execOnStageTriggerBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABStageGimmick);
UClass* Z_Construct_UClass_AABStageGimmick_NoRegister()
{
	return AABStageGimmick::StaticClass();
}
struct Z_Construct_UClass_AABStageGimmick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gimmick/ABStageGimmick.h" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StageTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gates_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GateTriggers_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateChangeAction_MetaData[] = {
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpponentClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fight" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpponentSpawnTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fight" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStageNum_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardBoxClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reward" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardBoxes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reward" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StageTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Gates_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Gates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Gates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GateTriggers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GateTriggers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GateTriggers;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateChangeAction_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StateChangeAction_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StateChangeAction_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StateChangeAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OpponentClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpponentSpawnTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStageNum;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RewardBoxClass;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RewardBoxes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RewardBoxes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap, "OnGateTriggerBeginOverlap" }, // 1427926597
		{ &Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroy, "OnOpponentDestroy" }, // 3646571713
		{ &Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap, "OnRewardTriggerBeginOverlap" }, // 1543207330
		{ &Z_Construct_UFunction_AABStageGimmick_OnStageTriggerBeginOverlap, "OnStageTriggerBeginOverlap" }, // 958612813
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABStageGimmick>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Stage = { "Stage", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, Stage), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stage_MetaData), NewProp_Stage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StageTrigger = { "StageTrigger", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, StageTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StageTrigger_MetaData), NewProp_StageTrigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_ValueProp = { "Gates", nullptr, (EPropertyFlags)0x01040000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_Key_KeyProp = { "Gates_Key", nullptr, (EPropertyFlags)0x01000000000a0009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates = { "Gates", nullptr, (EPropertyFlags)0x0124088000020009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, Gates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gates_MetaData), NewProp_Gates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers_ValueProp = { "GateTriggers", nullptr, (EPropertyFlags)0x01040000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers_Key_KeyProp = { "GateTriggers_Key", nullptr, (EPropertyFlags)0x01000000000a0009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers = { "GateTriggers", nullptr, (EPropertyFlags)0x0124088000020009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, GateTriggers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GateTriggers_MetaData), NewProp_GateTriggers_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, CurrentState), Z_Construct_UEnum_ArenaBattle_EStageState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 248561135
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeAction_ValueProp = { "StateChangeAction", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStageStateChangedDelegateWrapper, METADATA_PARAMS(0, nullptr) }; // 2032081065
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeAction_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeAction_Key_KeyProp = { "StateChangeAction_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ArenaBattle_EStageState, METADATA_PARAMS(0, nullptr) }; // 248561135
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeAction = { "StateChangeAction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, StateChangeAction), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateChangeAction_MetaData), NewProp_StateChangeAction_MetaData) }; // 248561135 2032081065
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentClass = { "OpponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, OpponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AABCharacterNonPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpponentClass_MetaData), NewProp_OpponentClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentSpawnTime = { "OpponentSpawnTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, OpponentSpawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpponentSpawnTime_MetaData), NewProp_OpponentSpawnTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentStageNum = { "CurrentStageNum", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, CurrentStageNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStageNum_MetaData), NewProp_CurrentStageNum_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxClass = { "RewardBoxClass", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, RewardBoxClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AABItemBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardBoxClass_MetaData), NewProp_RewardBoxClass_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes_Inner = { "RewardBoxes", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AABItemBox_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes = { "RewardBoxes", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, RewardBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardBoxes_MetaData), NewProp_RewardBoxes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABStageGimmick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Stage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StageTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeAction_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeAction_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeAction_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentSpawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentStageNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABStageGimmick_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABStageGimmick_Statics::ClassParams = {
	&AABStageGimmick::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AABStageGimmick_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::Class_MetaDataParams), Z_Construct_UClass_AABStageGimmick_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABStageGimmick()
{
	if (!Z_Registration_Info_UClass_AABStageGimmick.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABStageGimmick.OuterSingleton, Z_Construct_UClass_AABStageGimmick_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABStageGimmick.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<AABStageGimmick>()
{
	return AABStageGimmick::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABStageGimmick);
AABStageGimmick::~AABStageGimmick() {}
// End Class AABStageGimmick

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStageState_StaticEnum, TEXT("EStageState"), &Z_Registration_Info_UEnum_EStageState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 248561135U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStageStateChangedDelegateWrapper::StaticStruct, Z_Construct_UScriptStruct_FStageStateChangedDelegateWrapper_Statics::NewStructOps, TEXT("StageStateChangedDelegateWrapper"), &Z_Registration_Info_UScriptStruct_StageStateChangedDelegateWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageStateChangedDelegateWrapper), 2032081065U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABStageGimmick, AABStageGimmick::StaticClass, TEXT("AABStageGimmick"), &Z_Registration_Info_UClass_AABStageGimmick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABStageGimmick), 130068168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_1082691879(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Gimmick_ABStageGimmick_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
