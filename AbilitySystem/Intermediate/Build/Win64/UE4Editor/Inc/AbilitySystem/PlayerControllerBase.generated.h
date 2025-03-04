// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYSYSTEM_PlayerControllerBase_generated_h
#error "PlayerControllerBase.generated.h already included, missing '#pragma once' in PlayerControllerBase.h"
#endif
#define ABILITYSYSTEM_PlayerControllerBase_generated_h

#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_SPARSE_DATA
#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_RPC_WRAPPERS
#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerControllerBase(); \
	friend struct Z_Construct_UClass_APlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(APlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(APlayerControllerBase)


#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerControllerBase(); \
	friend struct Z_Construct_UClass_APlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(APlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(APlayerControllerBase)


#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerControllerBase(APlayerControllerBase&&); \
	NO_API APlayerControllerBase(const APlayerControllerBase&); \
public:


#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerControllerBase(APlayerControllerBase&&); \
	NO_API APlayerControllerBase(const APlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerBase)


#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_PRIVATE_PROPERTY_OFFSET
#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_12_PROLOG
#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_SPARSE_DATA \
	AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_RPC_WRAPPERS \
	AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_INCLASS \
	AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_SPARSE_DATA \
	AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_INCLASS_NO_PURE_DECLS \
	AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYSYSTEM_API UClass* StaticClass<class APlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySystem_Source_AbilitySystem_Public_PlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
