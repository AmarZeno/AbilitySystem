// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Public/AttributeSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeSetBase() {}
// Cross Module References
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAttributeSetBase_NoRegister();
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAttributeSetBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_AbilitySystem();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	void UAttributeSetBase::StaticRegisterNativesUAttributeSetBase()
	{
	}
	UClass* Z_Construct_UClass_UAttributeSetBase_NoRegister()
	{
		return UAttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/AttributeSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/AttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeSetBase, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeSetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSetBase_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeSetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttributeSetBase_Statics::ClassParams = {
		&UAttributeSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributeSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttributeSetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttributeSetBase, 1511533167);
	template<> ABILITYSYSTEM_API UClass* StaticClass<UAttributeSetBase>()
	{
		return UAttributeSetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttributeSetBase(Z_Construct_UClass_UAttributeSetBase, &UAttributeSetBase::StaticClass, TEXT("/Script/AbilitySystem"), TEXT("UAttributeSetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
