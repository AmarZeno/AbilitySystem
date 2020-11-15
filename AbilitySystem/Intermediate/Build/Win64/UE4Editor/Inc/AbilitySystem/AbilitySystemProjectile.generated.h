// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ABILITYSYSTEM_AbilitySystemProjectile_generated_h
#error "AbilitySystemProjectile.generated.h already included, missing '#pragma once' in AbilitySystemProjectile.h"
#endif
#define ABILITYSYSTEM_AbilitySystemProjectile_generated_h

#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_SPARSE_DATA
#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAbilitySystemProjectile(); \
	friend struct Z_Construct_UClass_AAbilitySystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AAbilitySystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(AAbilitySystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAbilitySystemProjectile(); \
	friend struct Z_Construct_UClass_AAbilitySystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AAbilitySystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(AAbilitySystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAbilitySystemProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAbilitySystemProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilitySystemProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilitySystemProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilitySystemProjectile(AAbilitySystemProjectile&&); \
	NO_API AAbilitySystemProjectile(const AAbilitySystemProjectile&); \
public:


#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAbilitySystemProjectile(AAbilitySystemProjectile&&); \
	NO_API AAbilitySystemProjectile(const AAbilitySystemProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilitySystemProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilitySystemProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAbilitySystemProjectile)


#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AAbilitySystemProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAbilitySystemProjectile, ProjectileMovement); }


#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_9_PROLOG
#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_SPARSE_DATA \
	AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_RPC_WRAPPERS \
	AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_INCLASS \
	AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_SPARSE_DATA \
	AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_INCLASS_NO_PURE_DECLS \
	AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYSYSTEM_API UClass* StaticClass<class AAbilitySystemProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySystem_Source_AbilitySystem_AbilitySystemProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
