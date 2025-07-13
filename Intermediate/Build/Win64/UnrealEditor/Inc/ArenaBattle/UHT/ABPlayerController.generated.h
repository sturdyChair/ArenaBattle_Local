// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/ABPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABPlayerController_generated_h
#error "ABPlayerController.generated.h already included, missing '#pragma once' in ABPlayerController.h"
#endif
#define ARENABATTLE_ABPlayerController_generated_h

#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_16_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABPlayerController(); \
	friend struct Z_Construct_UClass_AABPlayerController_Statics; \
public: \
	DECLARE_CLASS(AABPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABPlayerController)


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AABPlayerController(AABPlayerController&&); \
	AABPlayerController(const AABPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABPlayerController) \
	NO_API virtual ~AABPlayerController();


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_13_PROLOG
#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_16_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Player_ABPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
