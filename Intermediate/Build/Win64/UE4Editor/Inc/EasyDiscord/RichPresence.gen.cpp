// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyDiscord/Public/RichPresence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichPresence() {}
// Cross Module References
	EASYDISCORD_API UEnum* Z_Construct_UEnum_EasyDiscord_ERichPresenceType();
	UPackage* Z_Construct_UPackage__Script_EasyDiscord();
	EASYDISCORD_API UClass* Z_Construct_UClass_URichPresence_NoRegister();
	EASYDISCORD_API UClass* Z_Construct_UClass_URichPresence();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	EASYDISCORD_API UClass* Z_Construct_UClass_UEasyDiscordCore_NoRegister();
// End Cross Module References
	static UEnum* ERichPresenceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyDiscord_ERichPresenceType, Z_Construct_UPackage__Script_EasyDiscord(), TEXT("ERichPresenceType"));
		}
		return Singleton;
	}
	template<> EASYDISCORD_API UEnum* StaticEnum<ERichPresenceType>()
	{
		return ERichPresenceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichPresenceType(ERichPresenceType_StaticEnum, TEXT("/Script/EasyDiscord"), TEXT("ERichPresenceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyDiscord_ERichPresenceType_Hash() { return 2852905076U; }
	UEnum* Z_Construct_UEnum_EasyDiscord_ERichPresenceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyDiscord();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichPresenceType"), 0, Get_Z_Construct_UEnum_EasyDiscord_ERichPresenceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERichPresenceType::STATE", (int64)ERichPresenceType::STATE },
				{ "ERichPresenceType::DETAILS", (int64)ERichPresenceType::DETAILS },
				{ "ERichPresenceType::START_TIMESTAMP", (int64)ERichPresenceType::START_TIMESTAMP },
				{ "ERichPresenceType::END_TIMESTAMP", (int64)ERichPresenceType::END_TIMESTAMP },
				{ "ERichPresenceType::LARGE_IMAGE_KEY", (int64)ERichPresenceType::LARGE_IMAGE_KEY },
				{ "ERichPresenceType::LARGE_IMAGE_TEXT", (int64)ERichPresenceType::LARGE_IMAGE_TEXT },
				{ "ERichPresenceType::SMALL_IMAGE_KEY", (int64)ERichPresenceType::SMALL_IMAGE_KEY },
				{ "ERichPresenceType::SMALL_IMAGE_TEXT", (int64)ERichPresenceType::SMALL_IMAGE_TEXT },
				{ "ERichPresenceType::PARTY_ID", (int64)ERichPresenceType::PARTY_ID },
				{ "ERichPresenceType::PARTY_SIZE", (int64)ERichPresenceType::PARTY_SIZE },
				{ "ERichPresenceType::PARTY_MAX", (int64)ERichPresenceType::PARTY_MAX },
				{ "ERichPresenceType::JOIN_SECRET", (int64)ERichPresenceType::JOIN_SECRET },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DETAILS.DisplayName", "Details" },
				{ "DETAILS.Name", "ERichPresenceType::DETAILS" },
				{ "END_TIMESTAMP.DisplayName", "End Timestamp" },
				{ "END_TIMESTAMP.Name", "ERichPresenceType::END_TIMESTAMP" },
				{ "JOIN_SECRET.DisplayName", "Join Secret" },
				{ "JOIN_SECRET.Name", "ERichPresenceType::JOIN_SECRET" },
				{ "LARGE_IMAGE_KEY.DisplayName", "Large Image Key" },
				{ "LARGE_IMAGE_KEY.Name", "ERichPresenceType::LARGE_IMAGE_KEY" },
				{ "LARGE_IMAGE_TEXT.DisplayName", "Large Image Text" },
				{ "LARGE_IMAGE_TEXT.Name", "ERichPresenceType::LARGE_IMAGE_TEXT" },
				{ "ModuleRelativePath", "Public/RichPresence.h" },
				{ "PARTY_ID.DisplayName", "Party ID" },
				{ "PARTY_ID.Name", "ERichPresenceType::PARTY_ID" },
				{ "PARTY_MAX.DisplayName", "Party Max" },
				{ "PARTY_MAX.Name", "ERichPresenceType::PARTY_MAX" },
				{ "PARTY_SIZE.DisplayName", "Party Size" },
				{ "PARTY_SIZE.Name", "ERichPresenceType::PARTY_SIZE" },
				{ "SMALL_IMAGE_KEY.DisplayName", "Small Image Key" },
				{ "SMALL_IMAGE_KEY.Name", "ERichPresenceType::SMALL_IMAGE_KEY" },
				{ "SMALL_IMAGE_TEXT.DisplayName", "Small Image Text" },
				{ "SMALL_IMAGE_TEXT.Name", "ERichPresenceType::SMALL_IMAGE_TEXT" },
				{ "START_TIMESTAMP.DisplayName", "Start Timestamp" },
				{ "START_TIMESTAMP.Name", "ERichPresenceType::START_TIMESTAMP" },
				{ "STATE.DisplayName", "State" },
				{ "STATE.Name", "ERichPresenceType::STATE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyDiscord,
				nullptr,
				"ERichPresenceType",
				"ERichPresenceType",
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
	DEFINE_FUNCTION(URichPresence::execSetSmallImageKey)
	{
		P_GET_OBJECT(UEasyDiscordCore,Z_Param_DiscordCore);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewSmallImageKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		URichPresence::SetSmallImageKey(Z_Param_DiscordCore,Z_Param_NewSmallImageKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichPresence::execSetLargeImageKey)
	{
		P_GET_OBJECT(UEasyDiscordCore,Z_Param_DiscordCore);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewLargeImageKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		URichPresence::SetLargeImageKey(Z_Param_DiscordCore,Z_Param_NewLargeImageKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichPresence::execSetDetails)
	{
		P_GET_OBJECT(UEasyDiscordCore,Z_Param_DiscordCore);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		URichPresence::SetDetails(Z_Param_DiscordCore,Z_Param_NewDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichPresence::execSetState)
	{
		P_GET_OBJECT(UEasyDiscordCore,Z_Param_DiscordCore);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		URichPresence::SetState(Z_Param_DiscordCore,Z_Param_NewState);
		P_NATIVE_END;
	}
	void URichPresence::StaticRegisterNativesURichPresence()
	{
		UClass* Class = URichPresence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDetails", &URichPresence::execSetDetails },
			{ "SetLargeImageKey", &URichPresence::execSetLargeImageKey },
			{ "SetSmallImageKey", &URichPresence::execSetSmallImageKey },
			{ "SetState", &URichPresence::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URichPresence_SetDetails_Statics
	{
		struct RichPresence_eventSetDetails_Parms
		{
			UEasyDiscordCore* DiscordCore;
			FString NewDetails;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URichPresence_SetDetails_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichPresence_eventSetDetails_Parms, DiscordCore), Z_Construct_UClass_UEasyDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URichPresence_SetDetails_Statics::NewProp_NewDetails = { "NewDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichPresence_eventSetDetails_Parms, NewDetails), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichPresence_SetDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichPresence_SetDetails_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichPresence_SetDetails_Statics::NewProp_NewDetails,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichPresence_SetDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyDiscord|RichPresence" },
		{ "ModuleRelativePath", "Public/RichPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichPresence_SetDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichPresence, nullptr, "SetDetails", nullptr, nullptr, sizeof(RichPresence_eventSetDetails_Parms), Z_Construct_UFunction_URichPresence_SetDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichPresence_SetDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichPresence_SetDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichPresence_SetDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichPresence_SetDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichPresence_SetDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics
	{
		struct RichPresence_eventSetLargeImageKey_Parms
		{
			UEasyDiscordCore* DiscordCore;
			FString NewLargeImageKey;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewLargeImageKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichPresence_eventSetLargeImageKey_Parms, DiscordCore), Z_Construct_UClass_UEasyDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::NewProp_NewLargeImageKey = { "NewLargeImageKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichPresence_eventSetLargeImageKey_Parms, NewLargeImageKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::NewProp_NewLargeImageKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyDiscord|RichPresence" },
		{ "ModuleRelativePath", "Public/RichPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichPresence, nullptr, "SetLargeImageKey", nullptr, nullptr, sizeof(RichPresence_eventSetLargeImageKey_Parms), Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichPresence_SetLargeImageKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichPresence_SetLargeImageKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics
	{
		struct RichPresence_eventSetSmallImageKey_Parms
		{
			UEasyDiscordCore* DiscordCore;
			FString NewSmallImageKey;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewSmallImageKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichPresence_eventSetSmallImageKey_Parms, DiscordCore), Z_Construct_UClass_UEasyDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::NewProp_NewSmallImageKey = { "NewSmallImageKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichPresence_eventSetSmallImageKey_Parms, NewSmallImageKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::NewProp_NewSmallImageKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyDiscord|RichPresence" },
		{ "ModuleRelativePath", "Public/RichPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichPresence, nullptr, "SetSmallImageKey", nullptr, nullptr, sizeof(RichPresence_eventSetSmallImageKey_Parms), Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichPresence_SetSmallImageKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichPresence_SetSmallImageKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichPresence_SetState_Statics
	{
		struct RichPresence_eventSetState_Parms
		{
			UEasyDiscordCore* DiscordCore;
			FString NewState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URichPresence_SetState_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichPresence_eventSetState_Parms, DiscordCore), Z_Construct_UClass_UEasyDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URichPresence_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichPresence_eventSetState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichPresence_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichPresence_SetState_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichPresence_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichPresence_SetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyDiscord|RichPresence" },
		{ "ModuleRelativePath", "Public/RichPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichPresence_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichPresence, nullptr, "SetState", nullptr, nullptr, sizeof(RichPresence_eventSetState_Parms), Z_Construct_UFunction_URichPresence_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichPresence_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichPresence_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichPresence_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichPresence_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichPresence_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URichPresence_NoRegister()
	{
		return URichPresence::StaticClass();
	}
	struct Z_Construct_UClass_URichPresence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichPresence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyDiscord,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URichPresence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URichPresence_SetDetails, "SetDetails" }, // 4171918303
		{ &Z_Construct_UFunction_URichPresence_SetLargeImageKey, "SetLargeImageKey" }, // 3057579850
		{ &Z_Construct_UFunction_URichPresence_SetSmallImageKey, "SetSmallImageKey" }, // 2555604570
		{ &Z_Construct_UFunction_URichPresence_SetState, "SetState" }, // 452646212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichPresence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RichPresence.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/RichPresence.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichPresence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichPresence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URichPresence_Statics::ClassParams = {
		&URichPresence::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URichPresence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichPresence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichPresence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URichPresence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URichPresence, 3025052867);
	template<> EASYDISCORD_API UClass* StaticClass<URichPresence>()
	{
		return URichPresence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichPresence(Z_Construct_UClass_URichPresence, &URichPresence::StaticClass, TEXT("/Script/EasyDiscord"), TEXT("URichPresence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichPresence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
