// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkTopologyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
#ifdef NETWORKTOPOLOGY_NetworkTopologyCharacter_generated_h
#error "NetworkTopologyCharacter.generated.h already included, missing '#pragma once' in NetworkTopologyCharacter.h"
#endif
#define NETWORKTOPOLOGY_NetworkTopologyCharacter_generated_h

#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPlaySoundHere_Implementation(USoundBase* SoundToPlay); \
	virtual void ClientPrintMessage_Implementation(const FString& Message); \
	virtual bool ServerLaunchCharacter_Validate(); \
	virtual void ServerLaunchCharacter_Implementation(); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execMulticastPlaySoundHere); \
	DECLARE_FUNCTION(execClientPrintMessage); \
	DECLARE_FUNCTION(execServerLaunchCharacter);


#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_21_CALLBACK_WRAPPERS
#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkTopologyCharacter(); \
	friend struct Z_Construct_UClass_ANetworkTopologyCharacter_Statics; \
public: \
	DECLARE_CLASS(ANetworkTopologyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkTopology"), NO_API) \
	DECLARE_SERIALIZER(ANetworkTopologyCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetworkTopologyCharacter(ANetworkTopologyCharacter&&); \
	ANetworkTopologyCharacter(const ANetworkTopologyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkTopologyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkTopologyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkTopologyCharacter) \
	NO_API virtual ~ANetworkTopologyCharacter();


#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_18_PROLOG
#define FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_21_CALLBACK_WRAPPERS \
	FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKTOPOLOGY_API UClass* StaticClass<class ANetworkTopologyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
