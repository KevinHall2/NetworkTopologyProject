// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NT_HUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef NETWORKTOPOLOGY_NT_HUD_generated_h
#error "NT_HUD.generated.h already included, missing '#pragma once' in NT_HUD.h"
#endif
#define NETWORKTOPOLOGY_NT_HUD_generated_h

#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWidgetInstance);


#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANT_HUD(); \
	friend struct Z_Construct_UClass_ANT_HUD_Statics; \
public: \
	DECLARE_CLASS(ANT_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkTopology"), NO_API) \
	DECLARE_SERIALIZER(ANT_HUD)


#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANT_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANT_HUD(ANT_HUD&&); \
	ANT_HUD(const ANT_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANT_HUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANT_HUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANT_HUD) \
	NO_API virtual ~ANT_HUD();


#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_12_PROLOG
#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKTOPOLOGY_API UClass* StaticClass<class ANT_HUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NT_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
