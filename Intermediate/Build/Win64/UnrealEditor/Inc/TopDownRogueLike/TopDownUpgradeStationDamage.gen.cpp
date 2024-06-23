// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownUpgradeStationDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownUpgradeStationDamage() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationDamage_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationDamage();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationBase();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
// End Cross Module References
	void ATopDownUpgradeStationDamage::StaticRegisterNativesATopDownUpgradeStationDamage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownUpgradeStationDamage);
	UClass* Z_Construct_UClass_ATopDownUpgradeStationDamage_NoRegister()
	{
		return ATopDownUpgradeStationDamage::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownUpgradeStationDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownUpgradeStationDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATopDownUpgradeStationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationDamage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TopDownUpgradeStationDamage.h" },
		{ "ModuleRelativePath", "TopDownUpgradeStationDamage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownUpgradeStationDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownUpgradeStationDamage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownUpgradeStationDamage_Statics::ClassParams = {
		&ATopDownUpgradeStationDamage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationDamage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationDamage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownUpgradeStationDamage()
	{
		if (!Z_Registration_Info_UClass_ATopDownUpgradeStationDamage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownUpgradeStationDamage.OuterSingleton, Z_Construct_UClass_ATopDownUpgradeStationDamage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownUpgradeStationDamage.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownUpgradeStationDamage>()
	{
		return ATopDownUpgradeStationDamage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownUpgradeStationDamage);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationDamage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationDamage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownUpgradeStationDamage, ATopDownUpgradeStationDamage::StaticClass, TEXT("ATopDownUpgradeStationDamage"), &Z_Registration_Info_UClass_ATopDownUpgradeStationDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownUpgradeStationDamage), 321747027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationDamage_h_1385428738(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationDamage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
