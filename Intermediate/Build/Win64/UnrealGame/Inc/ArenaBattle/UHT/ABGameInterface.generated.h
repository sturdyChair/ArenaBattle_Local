// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/ABGameInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGameInterface_generated_h
#error "ABGameInterface.generated.h already included, missing '#pragma once' in ABGameInterface.h"
#endif
#define ARENABATTLE_ABGameInterface_generated_h

#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARENABATTLE_API UABGameInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABGameInterface(UABGameInterface&&); \
	UABGameInterface(const UABGameInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARENABATTLE_API, UABGameInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameInterface) \
	ARENABATTLE_API virtual ~UABGameInterface();


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUABGameInterface(); \
	friend struct Z_Construct_UClass_UABGameInterface_Statics; \
public: \
	DECLARE_CLASS(UABGameInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ArenaBattle"), ARENABATTLE_API) \
	DECLARE_SERIALIZER(UABGameInterface)


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IABGameInterface() {} \
public: \
	typedef UABGameInterface UClassType; \
	typedef IABGameInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_10_PROLOG
#define FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class UABGameInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ArenaBattle_Source_ArenaBattle_Interface_ABGameInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
