// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/ABCharacterAIInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABCharacterAIInterface_generated_h
#error "ABCharacterAIInterface.generated.h already included, missing '#pragma once' in ABCharacterAIInterface.h"
#endif
#define ARENABATTLE_ABCharacterAIInterface_generated_h

#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARENABATTLE_API UABCharacterAIInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABCharacterAIInterface(UABCharacterAIInterface&&); \
	UABCharacterAIInterface(const UABCharacterAIInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARENABATTLE_API, UABCharacterAIInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCharacterAIInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABCharacterAIInterface) \
	ARENABATTLE_API virtual ~UABCharacterAIInterface();


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUABCharacterAIInterface(); \
	friend struct Z_Construct_UClass_UABCharacterAIInterface_Statics; \
public: \
	DECLARE_CLASS(UABCharacterAIInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArenaBattle"), ARENABATTLE_API) \
	DECLARE_SERIALIZER(UABCharacterAIInterface)


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IABCharacterAIInterface() {} \
public: \
	typedef UABCharacterAIInterface UClassType; \
	typedef IABCharacterAIInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_10_PROLOG
#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class UABCharacterAIInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterAIInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
