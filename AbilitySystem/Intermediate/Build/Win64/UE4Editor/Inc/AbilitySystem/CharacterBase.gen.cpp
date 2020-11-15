// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Public/CharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterBase() {}
// Cross Module References
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_ACharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AbilitySystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAttributeSetBase_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACharacterBase::execAquireAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToAquire);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AquireAbility(Z_Param_AbilityToAquire);
		P_NATIVE_END;
	}
	void ACharacterBase::StaticRegisterNativesACharacterBase()
	{
		UClass* Class = ACharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AquireAbility", &ACharacterBase::execAquireAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics
	{
		struct CharacterBase_eventAquireAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  AbilityToAquire;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityToAquire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics::NewProp_AbilityToAquire = { "AbilityToAquire", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventAquireAbility_Parms, AbilityToAquire), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics::NewProp_AbilityToAquire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterBase" },
		{ "ModuleRelativePath", "Public/CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "AquireAbility", nullptr, nullptr, sizeof(CharacterBase_eventAquireAbility_Parms), Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_AquireAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_AquireAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacterBase_NoRegister()
	{
		return ACharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBaseComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBaseComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterBase_AquireAbility, "AquireAbility" }, // 1699721847
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterBase.h" },
		{ "ModuleRelativePath", "Public/CharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSetBaseComp_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSetBaseComp = { "AttributeSetBaseComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, AttributeSetBaseComp), Z_Construct_UClass_UAttributeSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSetBaseComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSetBaseComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComp_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComp = { "AbilitySystemComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, AbilitySystemComp), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AttributeSetBaseComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AbilitySystemComp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacterBase, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterBase_Statics::ClassParams = {
		&ACharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterBase, 3921360736);
	template<> ABILITYSYSTEM_API UClass* StaticClass<ACharacterBase>()
	{
		return ACharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterBase(Z_Construct_UClass_ACharacterBase, &ACharacterBase::StaticClass, TEXT("/Script/AbilitySystem"), TEXT("ACharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
