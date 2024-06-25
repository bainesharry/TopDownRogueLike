// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLike/TopDownRogueLikeSpawnActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownRogueLikeSpawnActor() {}
// Cross Module References
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownRogueLikeSpawnActor_NoRegister();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownRogueLikeSpawnActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLike();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOPDOWNROGUELIKE_API UClass* Z_Construct_UClass_ATopDownEnemyCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATopDownRogueLikeSpawnActor::execEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopDownRogueLikeSpawnActor::execBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ATopDownRogueLikeSpawnActor::StaticRegisterNativesATopDownRogueLikeSpawnActor()
	{
		UClass* Class = ATopDownRogueLikeSpawnActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", &ATopDownRogueLikeSpawnActor::execBeginOverlap },
			{ "EndOverlap", &ATopDownRogueLikeSpawnActor::execEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics
	{
		struct TopDownRogueLikeSpawnActor_eventBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownRogueLikeSpawnActor_eventBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownRogueLikeSpawnActor_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownRogueLikeSpawnActor_eventBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownRogueLikeSpawnActor_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TopDownRogueLikeSpawnActor_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TopDownRogueLikeSpawnActor_eventBeginOverlap_Parms), &Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownRogueLikeSpawnActor_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TopDownRogueLikeSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownRogueLikeSpawnActor, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::TopDownRogueLikeSpawnActor_eventBeginOverlap_Parms), Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics
	{
		struct TopDownRogueLikeSpawnActor_eventEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownRogueLikeSpawnActor_eventEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownRogueLikeSpawnActor_eventEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownRogueLikeSpawnActor_eventEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownRogueLikeSpawnActor_eventEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TopDownRogueLikeSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownRogueLikeSpawnActor, nullptr, "EndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::TopDownRogueLikeSpawnActor_eventEndOverlap_Parms), Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownRogueLikeSpawnActor);
	UClass* Z_Construct_UClass_ATopDownRogueLikeSpawnActor_NoRegister()
	{
		return ATopDownRogueLikeSpawnActor::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemySpawnRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRandomTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRandomTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRandomTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRandomTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnImmediately_MetaData[];
#endif
		static void NewProp_SpawnImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnImmediately;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_BeginOverlap, "BeginOverlap" }, // 565854802
		{ &Z_Construct_UFunction_ATopDownRogueLikeSpawnActor_EndOverlap, "EndOverlap" }, // 3185246158
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TopDownRogueLikeSpawnActor.h" },
		{ "ModuleRelativePath", "TopDownRogueLikeSpawnActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_EnemySpawnRef_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownRogueLikeSpawnActor" },
		{ "ModuleRelativePath", "TopDownRogueLikeSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_EnemySpawnRef = { "EnemySpawnRef", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownRogueLikeSpawnActor, EnemySpawnRef), Z_Construct_UClass_ATopDownEnemyCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_EnemySpawnRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_EnemySpawnRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_MaxRandomTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownRogueLikeSpawnActor" },
		{ "ModuleRelativePath", "TopDownRogueLikeSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_MaxRandomTime = { "MaxRandomTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownRogueLikeSpawnActor, MaxRandomTime), METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_MaxRandomTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_MaxRandomTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_MinRandomTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownRogueLikeSpawnActor" },
		{ "ModuleRelativePath", "TopDownRogueLikeSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_MinRandomTime = { "MinRandomTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownRogueLikeSpawnActor, MinRandomTime), METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_MinRandomTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_MinRandomTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_SpawnImmediately_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TopDownRogueLikeSpawnActor" },
		{ "ModuleRelativePath", "TopDownRogueLikeSpawnActor.h" },
	};
#endif
	void Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_SpawnImmediately_SetBit(void* Obj)
	{
		((ATopDownRogueLikeSpawnActor*)Obj)->SpawnImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_SpawnImmediately = { "SpawnImmediately", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATopDownRogueLikeSpawnActor), &Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_SpawnImmediately_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_SpawnImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_SpawnImmediately_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_CollisionMesh_MetaData[] = {
		{ "Category", "CollisionMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownRogueLikeSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownRogueLikeSpawnActor, CollisionMesh), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_CollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_CollisionMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_CharMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownRogueLikeSpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_CharMesh = { "CharMesh", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownRogueLikeSpawnActor, CharMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_CharMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_CharMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_EnemySpawnRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_MaxRandomTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_MinRandomTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_SpawnImmediately,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_CollisionMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::NewProp_CharMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownRogueLikeSpawnActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::ClassParams = {
		&ATopDownRogueLikeSpawnActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownRogueLikeSpawnActor()
	{
		if (!Z_Registration_Info_UClass_ATopDownRogueLikeSpawnActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownRogueLikeSpawnActor.OuterSingleton, Z_Construct_UClass_ATopDownRogueLikeSpawnActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownRogueLikeSpawnActor.OuterSingleton;
	}
	template<> TOPDOWNROGUELIKE_API UClass* StaticClass<ATopDownRogueLikeSpawnActor>()
	{
		return ATopDownRogueLikeSpawnActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownRogueLikeSpawnActor);
	struct Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeSpawnActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeSpawnActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownRogueLikeSpawnActor, ATopDownRogueLikeSpawnActor::StaticClass, TEXT("ATopDownRogueLikeSpawnActor"), &Z_Registration_Info_UClass_ATopDownRogueLikeSpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownRogueLikeSpawnActor), 795121247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeSpawnActor_h_149254378(TEXT("/Script/TopDownRogueLike"),
		Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeSpawnActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownRogueLike_Source_TopDownRogueLike_TopDownRogueLikeSpawnActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
