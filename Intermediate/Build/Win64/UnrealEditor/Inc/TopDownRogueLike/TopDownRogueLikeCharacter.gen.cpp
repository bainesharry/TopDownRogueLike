// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownRogueLikeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownRogueLikeCharacter() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownRogueLikeCharacter_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownRogueLikeCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ATopDownRogueLikeCharacter::StaticRegisterNativesATopDownRogueLikeCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownRogueLikeCharacter);
	UClass* Z_Construct_UClass_ATopDownRogueLikeCharacter_NoRegister()
	{
		return ATopDownRogueLikeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopDownRogueLikeCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TopDownRogueLikeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownRogueLikeCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownRogueLikeCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownRogueLikeCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownRogueLikeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownRogueLikeCharacter" },
		{ "ModuleRelativePath", "TopDownRogueLikeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownRogueLikeCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_Health_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownRogueLikeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::ClassParams = {
		&ATopDownRogueLikeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownRogueLikeCharacter()
	{
		if (!Z_Registration_Info_UClass_ATopDownRogueLikeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownRogueLikeCharacter.OuterSingleton, Z_Construct_UClass_ATopDownRogueLikeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownRogueLikeCharacter.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownRogueLikeCharacter>()
	{
		return ATopDownRogueLikeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownRogueLikeCharacter);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownRogueLikeCharacter, ATopDownRogueLikeCharacter::StaticClass, TEXT("ATopDownRogueLikeCharacter"), &Z_Registration_Info_UClass_ATopDownRogueLikeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownRogueLikeCharacter), 3029835997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeCharacter_h_3197539744(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
