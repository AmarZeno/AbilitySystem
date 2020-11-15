// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacterBase;
class UGameplayAbility;
#ifdef ABILITYSYSTEM_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define ABILITYSYSTEM_CharacterBase_generated_h

#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_SPARSE_DATA
#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOtherHostile); \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execAquireAbility);


#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOtherHostile); \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execAquireAbility);


#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_EVENT_PARMS \
	struct CharacterBase_eventBP_OnHealthChanged_Parms \
	{ \
		float Health; \
		float MaxHealth; \
	};


#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_CALLBACK_WRAPPERS
#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterBase*>(this); }


#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterBase*>(this); }


#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public:


#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase)


#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_PRIVATE_PROPERTY_OFFSET
#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_14_PROLOG \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_EVENT_PARMS


#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_SPARSE_DATA \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_RPC_WRAPPERS \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_CALLBACK_WRAPPERS \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_INCLASS \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_SPARSE_DATA \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_CALLBACK_WRAPPERS \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_INCLASS_NO_PURE_DECLS \
	AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYSYSTEM_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AbilitySystem_Source_AbilitySystem_Public_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
