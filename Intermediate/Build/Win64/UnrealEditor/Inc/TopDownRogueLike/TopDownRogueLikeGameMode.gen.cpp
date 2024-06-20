// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownRogueLikeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownRogueLikeGameMode() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownRogueLikeGameMode_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownRogueLikeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
// End Cross Module References
	void ATopDownRogueLikeGameMode::StaticRegisterNativesATopDownRogueLikeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownRogueLikeGameMode);
	UClass* Z_Construct_UClass_ATopDownRogueLikeGameMode_NoRegister()
	{
		return ATopDownRogueLikeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownRogueLikeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownRogueLikeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TopDownRogueLikeGameMode.h" },
		{ "ModuleRelativePath", "TopDownRogueLikeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownRogueLikeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownRogueLikeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownRogueLikeGameMode_Statics::ClassParams = {
		&ATopDownRogueLikeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownRogueLikeGameMode()
	{
		if (!Z_Registration_Info_UClass_ATopDownRogueLikeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownRogueLikeGameMode.OuterSingleton, Z_Construct_UClass_ATopDownRogueLikeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownRogueLikeGameMode.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownRogueLikeGameMode>()
	{
		return ATopDownRogueLikeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownRogueLikeGameMode);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownRogueLikeGameMode, ATopDownRogueLikeGameMode::StaticClass, TEXT("ATopDownRogueLikeGameMode"), &Z_Registration_Info_UClass_ATopDownRogueLikeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownRogueLikeGameMode), 1618550021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeGameMode_h_1469363345(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
