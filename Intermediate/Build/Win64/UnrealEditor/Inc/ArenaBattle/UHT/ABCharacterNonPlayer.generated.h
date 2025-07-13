// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/ABCharacterNonPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABCharacterNonPlayer_generated_h
#error "ABCharacterNonPlayer.generated.h already included, missing '#pragma once' in ABCharacterNonPlayer.h"
#endif
#define ARENABATTLE_ABCharacterNonPlayer_generated_h

#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABCharacterNonPlayer(); \
	friend struct Z_Construct_UClass_AABCharacterNonPlayer_Statics; \
public: \
	DECLARE_CLASS(AABCharacterNonPlayer, AABCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABCharacterNonPlayer) \
	static const TCHAR* StaticConfigName() {return TEXT("ArenaBattle");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AABCharacterNonPlayer*>(this); }


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AABCharacterNonPlayer(AABCharacterNonPlayer&&); \
	AABCharacterNonPlayer(const AABCharacterNonPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABCharacterNonPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABCharacterNonPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABCharacterNonPlayer) \
	NO_API virtual ~AABCharacterNonPlayer();


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_14_PROLOG
#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABCharacterNonPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_ABCharacterNonPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
