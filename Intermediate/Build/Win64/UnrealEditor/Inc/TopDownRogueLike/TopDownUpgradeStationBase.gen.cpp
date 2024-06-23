// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownUpgradeStationBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownUpgradeStationBase() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationBase_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownUpgradeStationBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	void ATopDownUpgradeStationBase::StaticRegisterNativesATopDownUpgradeStationBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownUpgradeStationBase);
	UClass* Z_Construct_UClass_ATopDownUpgradeStationBase_NoRegister()
	{
		return ATopDownUpgradeStationBase::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownUpgradeStationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeCost_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UpgradeCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostIncreaseValue_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CostIncreaseValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractText_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InteractText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StationMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StationMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TopDownUpgradeStationBase.h" },
		{ "ModuleRelativePath", "TopDownUpgradeStationBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_UpgradeCost_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownUpgradeStationBase" },
		{ "Comment", "//The base cost for purchasing an upgrade from the statrion.\n" },
		{ "ModuleRelativePath", "TopDownUpgradeStationBase.h" },
		{ "ToolTip", "The base cost for purchasing an upgrade from the statrion." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_UpgradeCost = { "UpgradeCost", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownUpgradeStationBase, UpgradeCost), METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_UpgradeCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_UpgradeCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_CostIncreaseValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownUpgradeStationBase" },
		{ "Comment", "//The amount the next purchases cost will increase buy when an upgrade is purchased.\n" },
		{ "ModuleRelativePath", "TopDownUpgradeStationBase.h" },
		{ "ToolTip", "The amount the next purchases cost will increase buy when an upgrade is purchased." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_CostIncreaseValue = { "CostIncreaseValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownUpgradeStationBase, CostIncreaseValue), METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_CostIncreaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_CostIncreaseValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_InteractText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownUpgradeStationBase" },
		{ "Comment", "//The Text that Appears When Near the Upgrade Station.\n" },
		{ "ModuleRelativePath", "TopDownUpgradeStationBase.h" },
		{ "ToolTip", "The Text that Appears When Near the Upgrade Station." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_InteractText = { "InteractText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownUpgradeStationBase, InteractText), METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_InteractText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_InteractText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_StationMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownUpgradeStationBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_StationMesh = { "StationMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownUpgradeStationBase, StationMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_StationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_StationMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_CollisionMesh_MetaData[] = {
		{ "Category", "CollisionMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownUpgradeStationBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownUpgradeStationBase, CollisionMesh), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_CollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_CollisionMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_UpgradeCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_CostIncreaseValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_InteractText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_StationMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::NewProp_CollisionMesh,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ATopDownUpgradeStationBase, IInteractInterface), false },  // 2720440735
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownUpgradeStationBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::ClassParams = {
		&ATopDownUpgradeStationBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownUpgradeStationBase()
	{
		if (!Z_Registration_Info_UClass_ATopDownUpgradeStationBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownUpgradeStationBase.OuterSingleton, Z_Construct_UClass_ATopDownUpgradeStationBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownUpgradeStationBase.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownUpgradeStationBase>()
	{
		return ATopDownUpgradeStationBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownUpgradeStationBase);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownUpgradeStationBase, ATopDownUpgradeStationBase::StaticClass, TEXT("ATopDownUpgradeStationBase"), &Z_Registration_Info_UClass_ATopDownUpgradeStationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownUpgradeStationBase), 3202843134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationBase_h_3853659941(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownUpgradeStationBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
