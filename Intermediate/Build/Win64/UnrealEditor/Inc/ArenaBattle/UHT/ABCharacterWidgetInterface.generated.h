// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/ABCharacterWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABCharacterWidgetInterface_generated_h
#error "ABCharacterWidgetInterface.generated.h already included, missing '#pragma once' in ABCharacterWidgetInterface.h"
#endif
#define ARENABATTLE_ABCharacterWidgetInterface_generated_h

#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARENABATTLE_API UABCharacterWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABCharacterWidgetInterface(UABCharacterWidgetInterface&&); \
	UABCharacterWidgetInterface(const UABCharacterWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARENABATTLE_API, UABCharacterWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCharacterWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABCharacterWidgetInterface) \
	ARENABATTLE_API virtual ~UABCharacterWidgetInterface();


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUABCharacterWidgetInterface(); \
	friend struct Z_Construct_UClass_UABCharacterWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UABCharacterWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArenaBattle"), ARENABATTLE_API) \
	DECLARE_SERIALIZER(UABCharacterWidgetInterface)


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IABCharacterWidgetInterface() {} \
public: \
	typedef UABCharacterWidgetInterface UClassType; \
	typedef IABCharacterWidgetInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_10_PROLOG
#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class UABCharacterWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
