// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownEnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownEnemyCharacter() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownEnemyCharacter_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownEnemyCharacter();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownRogueLikeCharacter();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
// End Cross Module References
	void ATopDownEnemyCharacter::StaticRegisterNativesATopDownEnemyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownEnemyCharacter);
	UClass* Z_Construct_UClass_ATopDownEnemyCharacter_NoRegister()
	{
		return ATopDownEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootingMargainOfError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootingMargainOfError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreYield_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreYield;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATopDownRogueLikeCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopDownEnemyCharacter.h" },
		{ "ModuleRelativePath", "TopDownEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownEnemyCharacter_Statics::NewProp_ShootingMargainOfError_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownEnemyCharacter" },
		{ "Comment", "//The penalty to accuracy that an enemy recieves, enemies will shoot in a random position of this variables radius around the player.\n//Therefore, lower makes for more accurate ai.\n" },
		{ "ModuleRelativePath", "TopDownEnemyCharacter.h" },
		{ "ToolTip", "The penalty to accuracy that an enemy recieves, enemies will shoot in a random position of this variables radius around the player.\nTherefore, lower makes for more accurate ai." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownEnemyCharacter_Statics::NewProp_ShootingMargainOfError = { "ShootingMargainOfError", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownEnemyCharacter, ShootingMargainOfError), METADATA_PARAMS(Z_Construct_UClass_ATopDownEnemyCharacter_Statics::NewProp_ShootingMargainOfError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownEnemyCharacter_Statics::NewProp_ShootingMargainOfError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownEnemyCharacter_Statics::NewProp_ScoreYield_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownEnemyCharacter" },
		{ "Comment", "//The amount a money and score that the enemy will provide when killed.\n" },
		{ "ModuleRelativePath", "TopDownEnemyCharacter.h" },
		{ "ToolTip", "The amount a money and score that the enemy will provide when killed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownEnemyCharacter_Statics::NewProp_ScoreYield = { "ScoreYield", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownEnemyCharacter, ScoreYield), METADATA_PARAMS(Z_Construct_UClass_ATopDownEnemyCharacter_Statics::NewProp_ScoreYield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownEnemyCharacter_Statics::NewProp_ScoreYield_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownEnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownEnemyCharacter_Statics::NewProp_ShootingMargainOfError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownEnemyCharacter_Statics::NewProp_ScoreYield,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownEnemyCharacter_Statics::ClassParams = {
		&ATopDownEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATopDownEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownEnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownEnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_ATopDownEnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownEnemyCharacter.OuterSingleton, Z_Construct_UClass_ATopDownEnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownEnemyCharacter.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownEnemyCharacter>()
	{
		return ATopDownEnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownEnemyCharacter);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownEnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownEnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownEnemyCharacter, ATopDownEnemyCharacter::StaticClass, TEXT("ATopDownEnemyCharacter"), &Z_Registration_Info_UClass_ATopDownEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownEnemyCharacter), 2610685291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownEnemyCharacter_h_260657498(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownEnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
