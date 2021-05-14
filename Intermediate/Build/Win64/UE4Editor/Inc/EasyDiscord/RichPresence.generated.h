// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEasyDiscordCore;
#ifdef EASYDISCORD_RichPresence_generated_h
#error "RichPresence.generated.h already included, missing '#pragma once' in RichPresence.h"
#endif
#define EASYDISCORD_RichPresence_generated_h

#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_SPARSE_DATA
#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSmallImageKey); \
	DECLARE_FUNCTION(execSetLargeImageKey); \
	DECLARE_FUNCTION(execSetDetails); \
	DECLARE_FUNCTION(execSetState);


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSmallImageKey); \
	DECLARE_FUNCTION(execSetLargeImageKey); \
	DECLARE_FUNCTION(execSetDetails); \
	DECLARE_FUNCTION(execSetState);


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURichPresence(); \
	friend struct Z_Construct_UClass_URichPresence_Statics; \
public: \
	DECLARE_CLASS(URichPresence, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyDiscord"), NO_API) \
	DECLARE_SERIALIZER(URichPresence)


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_INCLASS \
private: \
	static void StaticRegisterNativesURichPresence(); \
	friend struct Z_Construct_UClass_URichPresence_Statics; \
public: \
	DECLARE_CLASS(URichPresence, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyDiscord"), NO_API) \
	DECLARE_SERIALIZER(URichPresence)


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URichPresence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichPresence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichPresence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichPresence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichPresence(URichPresence&&); \
	NO_API URichPresence(const URichPresence&); \
public:


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URichPresence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichPresence(URichPresence&&); \
	NO_API URichPresence(const URichPresence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichPresence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichPresence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichPresence)


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_PRIVATE_PROPERTY_OFFSET
#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_26_PROLOG
#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_PRIVATE_PROPERTY_OFFSET \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_SPARSE_DATA \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_RPC_WRAPPERS \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_INCLASS \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_PRIVATE_PROPERTY_OFFSET \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_SPARSE_DATA \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_INCLASS_NO_PURE_DECLS \
	ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYDISCORD_API UClass* StaticClass<class URichPresence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToolsAndPlugins_Plugins_EasyDiscord_Source_EasyDiscord_Public_RichPresence_h


#define FOREACH_ENUM_ERICHPRESENCETYPE(op) \
	op(ERichPresenceType::STATE) \
	op(ERichPresenceType::DETAILS) \
	op(ERichPresenceType::START_TIMESTAMP) \
	op(ERichPresenceType::END_TIMESTAMP) \
	op(ERichPresenceType::LARGE_IMAGE_KEY) \
	op(ERichPresenceType::LARGE_IMAGE_TEXT) \
	op(ERichPresenceType::SMALL_IMAGE_KEY) \
	op(ERichPresenceType::SMALL_IMAGE_TEXT) \
	op(ERichPresenceType::PARTY_ID) \
	op(ERichPresenceType::PARTY_SIZE) \
	op(ERichPresenceType::PARTY_MAX) \
	op(ERichPresenceType::JOIN_SECRET) 

enum class ERichPresenceType : uint8;
template<> EASYDISCORD_API UEnum* StaticEnum<ERichPresenceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
