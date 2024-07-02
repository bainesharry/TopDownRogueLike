// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownUpgradeStationRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownUpgradeStationRange() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationRange_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationRange();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationBase();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
// End Cross Module References
	void ATopDownUpgradeStationRange::StaticRegisterNativesATopDownUpgradeStationRange()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownUpgradeStationRange);
	UClass* Z_Construct_UClass_ATopDownUpgradeStationRange_NoRegister()
	{
		return ATopDownUpgradeStationRange::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownUpgradeStationRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownUpgradeStationRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATopDownUpgradeStationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationRange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TopDownUpgradeStationRange.h" },
		{ "ModuleRelativePath", "TopDownUpgradeStationRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownUpgradeStationRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownUpgradeStationRange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownUpgradeStationRange_Statics::ClassParams = {
		&ATopDownUpgradeStationRange::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownUpgradeStationRange()
	{
		if (!Z_Registration_Info_UClass_ATopDownUpgradeStationRange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownUpgradeStationRange.OuterSingleton, Z_Construct_UClass_ATopDownUpgradeStationRange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownUpgradeStationRange.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownUpgradeStationRange>()
	{
		return ATopDownUpgradeStationRange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownUpgradeStationRange);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationRange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationRange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownUpgradeStationRange, ATopDownUpgradeStationRange::StaticClass, TEXT("ATopDownUpgradeStationRange"), &Z_Registration_Info_UClass_ATopDownUpgradeStationRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownUpgradeStationRange), 3540233753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationRange_h_584395768(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationRange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
