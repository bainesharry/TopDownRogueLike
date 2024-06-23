// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownUpgradeStationFireRate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownUpgradeStationFireRate() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationFireRate_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationFireRate();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationBase();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
// End Cross Module References
	void ATopDownUpgradeStationFireRate::StaticRegisterNativesATopDownUpgradeStationFireRate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownUpgradeStationFireRate);
	UClass* Z_Construct_UClass_ATopDownUpgradeStationFireRate_NoRegister()
	{
		return ATopDownUpgradeStationFireRate::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownUpgradeStationFireRate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownUpgradeStationFireRate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATopDownUpgradeStationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationFireRate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TopDownUpgradeStationFireRate.h" },
		{ "ModuleRelativePath", "TopDownUpgradeStationFireRate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownUpgradeStationFireRate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownUpgradeStationFireRate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownUpgradeStationFireRate_Statics::ClassParams = {
		&ATopDownUpgradeStationFireRate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationFireRate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationFireRate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownUpgradeStationFireRate()
	{
		if (!Z_Registration_Info_UClass_ATopDownUpgradeStationFireRate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownUpgradeStationFireRate.OuterSingleton, Z_Construct_UClass_ATopDownUpgradeStationFireRate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownUpgradeStationFireRate.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownUpgradeStationFireRate>()
	{
		return ATopDownUpgradeStationFireRate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownUpgradeStationFireRate);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationFireRate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationFireRate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownUpgradeStationFireRate, ATopDownUpgradeStationFireRate::StaticClass, TEXT("ATopDownUpgradeStationFireRate"), &Z_Registration_Info_UClass_ATopDownUpgradeStationFireRate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownUpgradeStationFireRate), 1741160941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationFireRate_h_1768977415(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationFireRate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationFireRate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
