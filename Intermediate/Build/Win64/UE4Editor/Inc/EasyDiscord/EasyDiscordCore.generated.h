// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEasyDiscordCore;
enum class EBindOutputs : uint8;
#ifdef EASYDISCORD_EasyDiscordCore_generated_h
#error "EasyDiscordCore.generated.h already included, missing '#pragma once' in EasyDiscordCore.h"
#endif
#define EASYDISCORD_EasyDiscordCore_generated_h

#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_SPARSE_DATA
#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDiscord); \
	DECLARE_FUNCTION(execUnBindFromDiscord); \
	DECLARE_FUNCTION(execBindToDiscord);


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDiscord); \
	DECLARE_FUNCTION(execUnBindFromDiscord); \
	DECLARE_FUNCTION(execBindToDiscord);


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyDiscordCore(); \
	friend struct Z_Construct_UClass_UEasyDiscordCore_Statics; \
public: \
	DECLARE_CLASS(UEasyDiscordCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyDiscord"), NO_API) \
	DECLARE_SERIALIZER(UEasyDiscordCore)


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUEasyDiscordCore(); \
	friend struct Z_Construct_UClass_UEasyDiscordCore_Statics; \
public: \
	DECLARE_CLASS(UEasyDiscordCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyDiscord"), NO_API) \
	DECLARE_SERIALIZER(UEasyDiscordCore)


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyDiscordCore(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyDiscordCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyDiscordCore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyDiscordCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEasyDiscordCore(UEasyDiscordCore&&); \
	NO_API UEasyDiscordCore(const UEasyDiscordCore&); \
public:


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEasyDiscordCore(UEasyDiscordCore&&); \
	NO_API UEasyDiscordCore(const UEasyDiscordCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyDiscordCore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyDiscordCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEasyDiscordCore)


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_PRIVATE_PROPERTY_OFFSET
#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_18_PROLOG
#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_PRIVATE_PROPERTY_OFFSET \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_SPARSE_DATA \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_RPC_WRAPPERS \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_INCLASS \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_PRIVATE_PROPERTY_OFFSET \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_SPARSE_DATA \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_INCLASS_NO_PURE_DECLS \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYDISCORD_API UClass* StaticClass<class UEasyDiscordCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_EasyDiscordCore_h


#define FOREACH_ENUM_EBINDOUTPUTS(op) \
	op(EBindOutputs::Then) \
	op(EBindOutputs::Failed) 

enum class EBindOutputs : uint8;
template<> EASYDISCORD_API UEnum* StaticEnum<EBindOutputs>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
