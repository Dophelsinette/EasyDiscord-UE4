// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyDiscord/Public/EasyDiscordCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyDiscordCore() {}
// Cross Module References
	EASYDISCORD_API UEnum* Z_Construct_UEnum_EasyDiscord_EBindOutputs();
	UPackage* Z_Construct_UPackage__Script_EasyDiscord();
	EASYDISCORD_API UClass* Z_Construct_UClass_UEasyDiscordCore_NoRegister();
	EASYDISCORD_API UClass* Z_Construct_UClass_UEasyDiscordCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EBindOutputs_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyDiscord_EBindOutputs, Z_Construct_UPackage__Script_EasyDiscord(), TEXT("EBindOutputs"));
		}
		return Singleton;
	}
	template<> EASYDISCORD_API UEnum* StaticEnum<EBindOutputs>()
	{
		return EBindOutputs_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBindOutputs(EBindOutputs_StaticEnum, TEXT("/Script/EasyDiscord"), TEXT("EBindOutputs"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyDiscord_EBindOutputs_Hash() { return 1821676583U; }
	UEnum* Z_Construct_UEnum_EasyDiscord_EBindOutputs()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyDiscord();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBindOutputs"), 0, Get_Z_Construct_UEnum_EasyDiscord_EBindOutputs_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBindOutputs::Then", (int64)EBindOutputs::Then },
				{ "EBindOutputs::Failed", (int64)EBindOutputs::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed.Name", "EBindOutputs::Failed" },
				{ "ModuleRelativePath", "Public/EasyDiscordCore.h" },
				{ "Then.Name", "EBindOutputs::Then" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyDiscord,
				nullptr,
				"EBindOutputs",
				"EBindOutputs",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UEasyDiscordCore::execGetDiscord)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEasyDiscordCore**)Z_Param__Result=UEasyDiscordCore::GetDiscord();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyDiscordCore::execUnBindFromDiscord)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyDiscordCore::UnBindFromDiscord();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyDiscordCore::execBindToDiscord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClientID);
		P_GET_UBOOL(Z_Param_bForceBind);
		P_GET_ENUM_REF(EBindOutputs,Z_Param_Out_Branch);
		P_GET_OBJECT_REF(UEasyDiscordCore,Z_Param_Out_DiscordCore);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyDiscordCore::BindToDiscord(Z_Param_ClientID,Z_Param_bForceBind,(EBindOutputs&)(Z_Param_Out_Branch),Z_Param_Out_DiscordCore,Z_Param_Out_OutputDetails);
		P_NATIVE_END;
	}
	void UEasyDiscordCore::StaticRegisterNativesUEasyDiscordCore()
	{
		UClass* Class = UEasyDiscordCore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToDiscord", &UEasyDiscordCore::execBindToDiscord },
			{ "GetDiscord", &UEasyDiscordCore::execGetDiscord },
			{ "UnBindFromDiscord", &UEasyDiscordCore::execUnBindFromDiscord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics
	{
		struct EasyDiscordCore_eventBindToDiscord_Parms
		{
			FString ClientID;
			bool bForceBind;
			EBindOutputs Branch;
			UEasyDiscordCore* DiscordCore;
			FString OutputDetails;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientID;
		static void NewProp_bForceBind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceBind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branch_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branch;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_ClientID = { "ClientID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyDiscordCore_eventBindToDiscord_Parms, ClientID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_bForceBind_SetBit(void* Obj)
	{
		((EasyDiscordCore_eventBindToDiscord_Parms*)Obj)->bForceBind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_bForceBind = { "bForceBind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyDiscordCore_eventBindToDiscord_Parms), &Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_bForceBind_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_Branch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyDiscordCore_eventBindToDiscord_Parms, Branch), Z_Construct_UEnum_EasyDiscord_EBindOutputs, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyDiscordCore_eventBindToDiscord_Parms, DiscordCore), Z_Construct_UClass_UEasyDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_OutputDetails = { "OutputDetails", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyDiscordCore_eventBindToDiscord_Parms, OutputDetails), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_ClientID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_bForceBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_Branch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_Branch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::NewProp_OutputDetails,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyDiscord|Setup" },
		{ "ExpandEnumAsExecs", "Branch" },
		{ "ModuleRelativePath", "Public/EasyDiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyDiscordCore, nullptr, "BindToDiscord", nullptr, nullptr, sizeof(EasyDiscordCore_eventBindToDiscord_Parms), Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics
	{
		struct EasyDiscordCore_eventGetDiscord_Parms
		{
			UEasyDiscordCore* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyDiscordCore_eventGetDiscord_Parms, ReturnValue), Z_Construct_UClass_UEasyDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyDiscord" },
		{ "ModuleRelativePath", "Public/EasyDiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyDiscordCore, nullptr, "GetDiscord", nullptr, nullptr, sizeof(EasyDiscordCore_eventGetDiscord_Parms), Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyDiscordCore_GetDiscord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyDiscordCore_GetDiscord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyDiscordCore_UnBindFromDiscord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyDiscordCore_UnBindFromDiscord_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyDiscord|Setup" },
		{ "ModuleRelativePath", "Public/EasyDiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyDiscordCore_UnBindFromDiscord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyDiscordCore, nullptr, "UnBindFromDiscord", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyDiscordCore_UnBindFromDiscord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyDiscordCore_UnBindFromDiscord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyDiscordCore_UnBindFromDiscord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyDiscordCore_UnBindFromDiscord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEasyDiscordCore_NoRegister()
	{
		return UEasyDiscordCore::StaticClass();
	}
	struct Z_Construct_UClass_UEasyDiscordCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEasyDiscordCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyDiscord,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEasyDiscordCore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyDiscordCore_BindToDiscord, "BindToDiscord" }, // 2063051608
		{ &Z_Construct_UFunction_UEasyDiscordCore_GetDiscord, "GetDiscord" }, // 2160793194
		{ &Z_Construct_UFunction_UEasyDiscordCore_UnBindFromDiscord, "UnBindFromDiscord" }, // 1037662771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyDiscordCore_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EasyDiscordCore.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/EasyDiscordCore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEasyDiscordCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyDiscordCore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEasyDiscordCore_Statics::ClassParams = {
		&UEasyDiscordCore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEasyDiscordCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyDiscordCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEasyDiscordCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEasyDiscordCore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEasyDiscordCore, 61802213);
	template<> EASYDISCORD_API UClass* StaticClass<UEasyDiscordCore>()
	{
		return UEasyDiscordCore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEasyDiscordCore(Z_Construct_UClass_UEasyDiscordCore, &UEasyDiscordCore::StaticClass, TEXT("/Script/EasyDiscord"), TEXT("UEasyDiscordCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyDiscordCore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
