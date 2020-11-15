// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYSYSTEM_AbilitySystemCharacter_generated_h
#error "AbilitySystemCharacter.generated.h already included, missing '#pragma once' in AbilitySystemCharacter.h"
#endif
#define ABILITYSYSTEM_AbilitySystemCharacter_generated_h

#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_SPARSE_DATA
#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_RPC_WRAPPERS
#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAbilitySystemCharacter(); \
	friend struct Z_Construct_UClass_AAbilitySystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AAbilitySystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(AAbilitySystemCharacter)


#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAbilitySystemCharacter(); \
	friend struct Z_Construct_UClass_AAbilitySystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AAbilitySystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(AAbilitySystemCharacter)


#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAbilitySystemCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbilitySystemCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilitySystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilitySystemCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilitySystemCharacter(AAbilitySystemCharacter&&); \
	NO_API AAbilitySystemCharacter(const AAbilitySystemCharacter&); \
public:


#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilitySystemCharacter(AAbilitySystemCharacter&&); \
	NO_API AAbilitySystemCharacter(const AAbilitySystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilitySystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilitySystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAbilitySystemCharacter)


#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AAbilitySystemCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AAbilitySystemCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AAbilitySystemCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AAbilitySystemCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AAbilitySystemCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AAbilitySystemCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AAbilitySystemCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AAbilitySystemCharacter, L_MotionController); }


#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_11_PROLOG
#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_SPARSE_DATA \
	AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_RPC_WRAPPERS \
	AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_INCLASS \
	AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_SPARSE_DATA \
	AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_INCLASS_NO_PURE_DECLS \
	AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYSYSTEM_API UClass* StaticClass<class AAbilitySystemCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySystem_Source_AbilitySystem_AbilitySystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
