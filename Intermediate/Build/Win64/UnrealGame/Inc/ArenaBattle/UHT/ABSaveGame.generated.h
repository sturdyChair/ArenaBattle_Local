// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/ABSaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABSaveGame_generated_h
#error "ABSaveGame.generated.h already included, missing '#pragma once' in ABSaveGame.h"
#endif
#define ARENABATTLE_ABSaveGame_generated_h

#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABSaveGame(); \
	friend struct Z_Construct_UClass_UABSaveGame_Statics; \
public: \
	DECLARE_CLASS(UABSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABSaveGame)


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABSaveGame(UABSaveGame&&); \
	UABSaveGame(const UABSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABSaveGame) \
	NO_API virtual ~UABSaveGame();


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h_12_PROLOG
#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class UABSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
