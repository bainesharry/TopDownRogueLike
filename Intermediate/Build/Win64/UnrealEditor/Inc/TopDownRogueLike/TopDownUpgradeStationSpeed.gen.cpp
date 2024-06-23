// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownUpgradeStationSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownUpgradeStationSpeed() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationSpeed_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationSpeed();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationBase();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
// End Cross Module References
	void ATopDownUpgradeStationSpeed::StaticRegisterNativesATopDownUpgradeStationSpeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownUpgradeStationSpeed);
	UClass* Z_Construct_UClass_ATopDownUpgradeStationSpeed_NoRegister()
	{
		return ATopDownUpgradeStationSpeed::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownUpgradeStationSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownUpgradeStationSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATopDownUpgradeStationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationSpeed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TopDownUpgradeStationSpeed.h" },
		{ "ModuleRelativePath", "TopDownUpgradeStationSpeed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownUpgradeStationSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownUpgradeStationSpeed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownUpgradeStationSpeed_Statics::ClassParams = {
		&ATopDownUpgradeStationSpeed::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationSpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationSpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownUpgradeStationSpeed()
	{
		if (!Z_Registration_Info_UClass_ATopDownUpgradeStationSpeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownUpgradeStationSpeed.OuterSingleton, Z_Construct_UClass_ATopDownUpgradeStationSpeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownUpgradeStationSpeed.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownUpgradeStationSpeed>()
	{
		return ATopDownUpgradeStationSpeed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownUpgradeStationSpeed);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationSpeed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationSpeed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownUpgradeStationSpeed, ATopDownUpgradeStationSpeed::StaticClass, TEXT("ATopDownUpgradeStationSpeed"), &Z_Registration_Info_UClass_ATopDownUpgradeStationSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownUpgradeStationSpeed), 1333977801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationSpeed_h_1928052223(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationSpeed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
