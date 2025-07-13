// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Player/ABPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPlayerController() {}

// Begin Cross Module References
ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerController();
ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerController_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
ARENABATTLE_API UClass* Z_Construct_UClass_UABSaveGame_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References

// Begin Class AABPlayerController Function K2_OnGameClear
static const FName NAME_AABPlayerController_K2_OnGameClear = FName(TEXT("K2_OnGameClear"));
void AABPlayerController::K2_OnGameClear()
{
	UFunction* Func = FindFunctionChecked(NAME_AABPlayerController_K2_OnGameClear);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnGameClearCpp" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABPlayerController, nullptr, "K2_OnGameClear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AABPlayerController_K2_OnGameClear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AABPlayerController Function K2_OnGameClear

// Begin Class AABPlayerController Function K2_OnGameOver
static const FName NAME_AABPlayerController_K2_OnGameOver = FName(TEXT("K2_OnGameOver"));
void AABPlayerController::K2_OnGameOver()
{
	UFunction* Func = FindFunctionChecked(NAME_AABPlayerController_K2_OnGameOver);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnGameOverCpp" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABPlayerController, nullptr, "K2_OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AABPlayerController_K2_OnGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AABPlayerController Function K2_OnGameOver

// Begin Class AABPlayerController Function K2_OnGameRetry
struct ABPlayerController_eventK2_OnGameRetry_Parms
{
	int32 NewRetryCount;
};
static const FName NAME_AABPlayerController_K2_OnGameRetry = FName(TEXT("K2_OnGameRetry"));
void AABPlayerController::K2_OnGameRetry(int32 NewRetryCount)
{
	ABPlayerController_eventK2_OnGameRetry_Parms Parms;
	Parms.NewRetryCount=NewRetryCount;
	UFunction* Func = FindFunctionChecked(NAME_AABPlayerController_K2_OnGameRetry);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnGameRetryCpp" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewRetryCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics::NewProp_NewRetryCount = { "NewRetryCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPlayerController_eventK2_OnGameRetry_Parms, NewRetryCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics::NewProp_NewRetryCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABPlayerController, nullptr, "K2_OnGameRetry", nullptr, nullptr, Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics::PropPointers), sizeof(ABPlayerController_eventK2_OnGameRetry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics::Function_MetaDataParams) };
static_assert(sizeof(ABPlayerController_eventK2_OnGameRetry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AABPlayerController Function K2_OnGameRetry

// Begin Class AABPlayerController Function K2_OnScoreChanged
struct ABPlayerController_eventK2_OnScoreChanged_Parms
{
	int32 NewScore;
};
static const FName NAME_AABPlayerController_K2_OnScoreChanged = FName(TEXT("K2_OnScoreChanged"));
void AABPlayerController::K2_OnScoreChanged(int32 NewScore)
{
	ABPlayerController_eventK2_OnScoreChanged_Parms Parms;
	Parms.NewScore=NewScore;
	UFunction* Func = FindFunctionChecked(NAME_AABPlayerController_K2_OnScoreChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnScoreChangedCpp" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPlayerController_eventK2_OnScoreChanged_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABPlayerController, nullptr, "K2_OnScoreChanged", nullptr, nullptr, Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics::PropPointers), sizeof(ABPlayerController_eventK2_OnScoreChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(ABPlayerController_eventK2_OnScoreChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AABPlayerController Function K2_OnScoreChanged

// Begin Class AABPlayerController
void AABPlayerController::StaticRegisterNativesAABPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABPlayerController);
UClass* Z_Construct_UClass_AABPlayerController_NoRegister()
{
	return AABPlayerController::StaticClass();
}
struct Z_Construct_UClass_AABPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/ABPlayerController.h" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ABHUDWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ABHUDWidget_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameInstance_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ABHUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ABHUDWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AABPlayerController_K2_OnGameClear, "K2_OnGameClear" }, // 2328907846
		{ &Z_Construct_UFunction_AABPlayerController_K2_OnGameOver, "K2_OnGameOver" }, // 241085994
		{ &Z_Construct_UFunction_AABPlayerController_K2_OnGameRetry, "K2_OnGameRetry" }, // 153424732
		{ &Z_Construct_UFunction_AABPlayerController_K2_OnScoreChanged, "K2_OnScoreChanged" }, // 1523451026
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidgetClass = { "ABHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, ABHUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UABHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ABHUDWidgetClass_MetaData), NewProp_ABHUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidget = { "ABHUDWidget", nullptr, (EPropertyFlags)0x01240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, ABHUDWidget), Z_Construct_UClass_UABHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ABHUDWidget_MetaData), NewProp_ABHUDWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_SaveGameInstance = { "SaveGameInstance", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, SaveGameInstance), Z_Construct_UClass_UABSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameInstance_MetaData), NewProp_SaveGameInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_SaveGameInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABPlayerController_Statics::ClassParams = {
	&AABPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AABPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABPlayerController()
{
	if (!Z_Registration_Info_UClass_AABPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABPlayerController.OuterSingleton, Z_Construct_UClass_AABPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABPlayerController.OuterSingleton;
}
template<> ARENABATTLE_API UClass* StaticClass<AABPlayerController>()
{
	return AABPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABPlayerController);
AABPlayerController::~AABPlayerController() {}
// End Class AABPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABPlayerController, AABPlayerController::StaticClass, TEXT("AABPlayerController"), &Z_Registration_Info_UClass_AABPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABPlayerController), 2117032316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_3897973257(TEXT("/Script/ArenaBattle"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
