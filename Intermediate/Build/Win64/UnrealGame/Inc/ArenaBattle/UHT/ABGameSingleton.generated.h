// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameData/ABGameSingleton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGameSingleton_generated_h
#error "ABGameSingleton.generated.h already included, missing '#pragma once' in ABGameSingleton.h"
#endif
#define ARENABATTLE_ABGameSingleton_generated_h

#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABGameSingleton(); \
	friend struct Z_Construct_UClass_UABGameSingleton_Statics; \
public: \
	DECLARE_CLASS(UABGameSingleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGameSingleton)


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABGameSingleton(UABGameSingleton&&); \
	UABGameSingleton(const UABGameSingleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameSingleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameSingleton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABGameSingleton) \
	NO_API virtual ~UABGameSingleton();


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_16_PROLOG
#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class UABGameSingleton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
