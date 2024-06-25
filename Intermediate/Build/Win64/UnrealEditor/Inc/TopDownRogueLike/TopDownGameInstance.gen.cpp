// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownGameInstance() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_UTopDownGameInstance_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_UTopDownGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
// End Cross Module References
	void UTopDownGameInstance::StaticRegisterNativesUTopDownGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTopDownGameInstance);
	UClass* Z_Construct_UClass_UTopDownGameInstance_NoRegister()
	{
		return UTopDownGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTopDownGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalScore_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FinalScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTopDownGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopDownGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TopDownGameInstance.h" },
		{ "ModuleRelativePath", "TopDownGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopDownGameInstance_Statics::NewProp_FinalScore_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownGameInstance" },
		{ "ModuleRelativePath", "TopDownGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTopDownGameInstance_Statics::NewProp_FinalScore = { "FinalScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTopDownGameInstance, FinalScore), METADATA_PARAMS(Z_Construct_UClass_UTopDownGameInstance_Statics::NewProp_FinalScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownGameInstance_Statics::NewProp_FinalScore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTopDownGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownGameInstance_Statics::NewProp_FinalScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTopDownGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTopDownGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTopDownGameInstance_Statics::ClassParams = {
		&UTopDownGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTopDownGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTopDownGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTopDownGameInstance()
	{
		if (!Z_Registration_Info_UClass_UTopDownGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTopDownGameInstance.OuterSingleton, Z_Construct_UClass_UTopDownGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTopDownGameInstance.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<UTopDownGameInstance>()
	{
		return UTopDownGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTopDownGameInstance);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTopDownGameInstance, UTopDownGameInstance::StaticClass, TEXT("UTopDownGameInstance"), &Z_Registration_Info_UClass_UTopDownGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTopDownGameInstance), 1814039683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownGameInstance_h_1932404230(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
