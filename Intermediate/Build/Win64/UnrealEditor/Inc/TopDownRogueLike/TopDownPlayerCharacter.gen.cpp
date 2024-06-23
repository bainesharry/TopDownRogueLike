// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownPlayerCharacter() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownPlayerCharacter_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownPlayerCharacter();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownRogueLikeCharacter();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
// End Cross Module References
	void ATopDownPlayerCharacter::StaticRegisterNativesATopDownPlayerCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownPlayerCharacter);
	UClass* Z_Construct_UClass_ATopDownPlayerCharacter_NoRegister()
	{
		return ATopDownPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthUpgradeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthUpgradeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageUpgradeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageUpgradeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRateUpgradeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRateUpgradeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeUpgradeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeUpgradeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedUpgradeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedUpgradeFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATopDownRogueLikeCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopDownPlayerCharacter.h" },
		{ "ModuleRelativePath", "TopDownPlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_MaxHealthUpgradeFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownPlayerCharacter" },
		{ "Comment", "//These dictate the increase in stats when an upgrade is purchased. In the future, these will be adjusted in child classes to allow for scaling of various \"classes.\"\n//The amount the characters max health is increased by.\n" },
		{ "ModuleRelativePath", "TopDownPlayerCharacter.h" },
		{ "ToolTip", "These dictate the increase in stats when an upgrade is purchased. In the future, these will be adjusted in child classes to allow for scaling of various \"classes.\"\nThe amount the characters max health is increased by." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_MaxHealthUpgradeFactor = { "MaxHealthUpgradeFactor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownPlayerCharacter, MaxHealthUpgradeFactor), METADATA_PARAMS(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_MaxHealthUpgradeFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_MaxHealthUpgradeFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_DamageUpgradeFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownPlayerCharacter" },
		{ "Comment", "//The amount the characters damage is increased by.\n" },
		{ "ModuleRelativePath", "TopDownPlayerCharacter.h" },
		{ "ToolTip", "The amount the characters damage is increased by." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_DamageUpgradeFactor = { "DamageUpgradeFactor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownPlayerCharacter, DamageUpgradeFactor), METADATA_PARAMS(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_DamageUpgradeFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_DamageUpgradeFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_FireRateUpgradeFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownPlayerCharacter" },
		{ "Comment", "//The amount the characters firerrate is increase by.\n" },
		{ "ModuleRelativePath", "TopDownPlayerCharacter.h" },
		{ "ToolTip", "The amount the characters firerrate is increase by." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_FireRateUpgradeFactor = { "FireRateUpgradeFactor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownPlayerCharacter, FireRateUpgradeFactor), METADATA_PARAMS(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_FireRateUpgradeFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_FireRateUpgradeFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_RangeUpgradeFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownPlayerCharacter" },
		{ "Comment", "//The amount the characters range is increased by.\n" },
		{ "ModuleRelativePath", "TopDownPlayerCharacter.h" },
		{ "ToolTip", "The amount the characters range is increased by." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_RangeUpgradeFactor = { "RangeUpgradeFactor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownPlayerCharacter, RangeUpgradeFactor), METADATA_PARAMS(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_RangeUpgradeFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_RangeUpgradeFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_SpeedUpgradeFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownPlayerCharacter" },
		{ "Comment", "//The amount the characters range is increased by.\n" },
		{ "ModuleRelativePath", "TopDownPlayerCharacter.h" },
		{ "ToolTip", "The amount the characters range is increased by." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_SpeedUpgradeFactor = { "SpeedUpgradeFactor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownPlayerCharacter, SpeedUpgradeFactor), METADATA_PARAMS(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_SpeedUpgradeFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_SpeedUpgradeFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownPlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_MaxHealthUpgradeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_DamageUpgradeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_FireRateUpgradeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_RangeUpgradeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerCharacter_Statics::NewProp_SpeedUpgradeFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownPlayerCharacter_Statics::ClassParams = {
		&ATopDownPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATopDownPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownPlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_ATopDownPlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownPlayerCharacter.OuterSingleton, Z_Construct_UClass_ATopDownPlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownPlayerCharacter.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownPlayerCharacter>()
	{
		return ATopDownPlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownPlayerCharacter);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownPlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownPlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownPlayerCharacter, ATopDownPlayerCharacter::StaticClass, TEXT("ATopDownPlayerCharacter"), &Z_Registration_Info_UClass_ATopDownPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownPlayerCharacter), 1744036452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownPlayerCharacter_h_1287513820(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownPlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
