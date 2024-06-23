// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownUpgradeStationMaxHealth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownUpgradeStationMaxHealth() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationMaxHealth_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationMaxHealth();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationBase();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
// End Cross Module References
	void ATopDownUpgradeStationMaxHealth::StaticRegisterNativesATopDownUpgradeStationMaxHealth()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownUpgradeStationMaxHealth);
	UClass* Z_Construct_UClass_ATopDownUpgradeStationMaxHealth_NoRegister()
	{
		return ATopDownUpgradeStationMaxHealth::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownUpgradeStationMaxHealth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownUpgradeStationMaxHealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATopDownUpgradeStationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationMaxHealth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TopDownUpgradeStationMaxHealth.h" },
		{ "ModuleRelativePath", "TopDownUpgradeStationMaxHealth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownUpgradeStationMaxHealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownUpgradeStationMaxHealth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownUpgradeStationMaxHealth_Statics::ClassParams = {
		&ATopDownUpgradeStationMaxHealth::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationMaxHealth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationMaxHealth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownUpgradeStationMaxHealth()
	{
		if (!Z_Registration_Info_UClass_ATopDownUpgradeStationMaxHealth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownUpgradeStationMaxHealth.OuterSingleton, Z_Construct_UClass_ATopDownUpgradeStationMaxHealth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownUpgradeStationMaxHealth.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownUpgradeStationMaxHealth>()
	{
		return ATopDownUpgradeStationMaxHealth::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownUpgradeStationMaxHealth);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationMaxHealth_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationMaxHealth_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownUpgradeStationMaxHealth, ATopDownUpgradeStationMaxHealth::StaticClass, TEXT("ATopDownUpgradeStationMaxHealth"), &Z_Registration_Info_UClass_ATopDownUpgradeStationMaxHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownUpgradeStationMaxHealth), 210869827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationMaxHealth_h_3163561029(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationMaxHealth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationMaxHealth_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
