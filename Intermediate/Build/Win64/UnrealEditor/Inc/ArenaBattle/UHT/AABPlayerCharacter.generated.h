// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AABPlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_AABPlayerCharacter_generated_h
#error "AABPlayerCharacter.generated.h already included, missing '#pragma once' in AABPlayerCharacter.h"
#endif
#define ARENABATTLE_AABPlayerCharacter_generated_h

#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AABPlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAABPlayerCharacter(); \
	friend struct Z_Construct_UClass_AAABPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AAABPlayerCharacter, AABCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AAABPlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AAABPlayerCharacter*>(this); }


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AABPlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAABPlayerCharacter(AAABPlayerCharacter&&); \
	AAABPlayerCharacter(const AAABPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAABPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAABPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAABPlayerCharacter) \
	NO_API virtual ~AAABPlayerCharacter();


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AABPlayerCharacter_h_14_PROLOG
#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AABPlayerCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AABPlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AABPlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AAABPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Character_AABPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
