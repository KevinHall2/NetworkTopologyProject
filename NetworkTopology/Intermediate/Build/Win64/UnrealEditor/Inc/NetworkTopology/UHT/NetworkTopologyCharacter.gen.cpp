// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkTopology/NetworkTopologyCharacter.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkTopologyCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NETWORKTOPOLOGY_API UClass* Z_Construct_UClass_ANetworkTopologyCharacter();
NETWORKTOPOLOGY_API UClass* Z_Construct_UClass_ANetworkTopologyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkTopology();
// End Cross Module References

// Begin Class ANetworkTopologyCharacter Function ClientPrintMessage
struct NetworkTopologyCharacter_eventClientPrintMessage_Parms
{
	FString Message;
};
static FName NAME_ANetworkTopologyCharacter_ClientPrintMessage = FName(TEXT("ClientPrintMessage"));
void ANetworkTopologyCharacter::ClientPrintMessage(const FString& Message)
{
	NetworkTopologyCharacter_eventClientPrintMessage_Parms Parms;
	Parms.Message=Message;
	ProcessEvent(FindFunctionChecked(NAME_ANetworkTopologyCharacter_ClientPrintMessage),&Parms);
}
struct Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Prints a message on the owning client for this character\n//Split into 2 functions\n//ClientPrintMessage (needs no definition, is filled by Unreal Engine)\\\n//ClientPrintMessage_Implementation (logic that runs on the server)\n" },
#endif
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a message on the owning client for this character\nSplit into 2 functions\nClientPrintMessage (needs no definition, is filled by Unreal Engine)\\\nClientPrintMessage_Implementation (logic that runs on the server)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkTopologyCharacter_eventClientPrintMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkTopologyCharacter, nullptr, "ClientPrintMessage", nullptr, nullptr, Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics::PropPointers), sizeof(NetworkTopologyCharacter_eventClientPrintMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetworkTopologyCharacter_eventClientPrintMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetworkTopologyCharacter::execClientPrintMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientPrintMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ANetworkTopologyCharacter Function ClientPrintMessage

// Begin Class ANetworkTopologyCharacter Function MulticastPlaySoundHere
struct NetworkTopologyCharacter_eventMulticastPlaySoundHere_Parms
{
	USoundBase* SoundToPlay;
};
static FName NAME_ANetworkTopologyCharacter_MulticastPlaySoundHere = FName(TEXT("MulticastPlaySoundHere"));
void ANetworkTopologyCharacter::MulticastPlaySoundHere(USoundBase* SoundToPlay)
{
	NetworkTopologyCharacter_eventMulticastPlaySoundHere_Parms Parms;
	Parms.SoundToPlay=SoundToPlay;
	ProcessEvent(FindFunctionChecked(NAME_ANetworkTopologyCharacter_MulticastPlaySoundHere),&Parms);
}
struct Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Plays a sound at the location of the character\n//Split into 2 functions\n//MulticastPlaySoundHere (n\n//MulticastPlaySoundHere_Implementation\n" },
#endif
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plays a sound at the location of the character\nSplit into 2 functions\nMulticastPlaySoundHere (n\nMulticastPlaySoundHere_Implementation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkTopologyCharacter_eventMulticastPlaySoundHere_Parms, SoundToPlay), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics::NewProp_SoundToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkTopologyCharacter, nullptr, "MulticastPlaySoundHere", nullptr, nullptr, Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics::PropPointers), sizeof(NetworkTopologyCharacter_eventMulticastPlaySoundHere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetworkTopologyCharacter_eventMulticastPlaySoundHere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetworkTopologyCharacter::execMulticastPlaySoundHere)
{
	P_GET_OBJECT(USoundBase,Z_Param_SoundToPlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastPlaySoundHere_Implementation(Z_Param_SoundToPlay);
	P_NATIVE_END;
}
// End Class ANetworkTopologyCharacter Function MulticastPlaySoundHere

// Begin Class ANetworkTopologyCharacter Function OnRep_Health
struct Z_Construct_UFunction_ANetworkTopologyCharacter_OnRep_Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Network Topology Game Character members\n" },
#endif
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Network Topology Game Character members" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkTopologyCharacter_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkTopologyCharacter, nullptr, "OnRep_Health", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkTopologyCharacter_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkTopologyCharacter_OnRep_Health_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetworkTopologyCharacter_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkTopologyCharacter_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetworkTopologyCharacter::execOnRep_Health)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health();
	P_NATIVE_END;
}
// End Class ANetworkTopologyCharacter Function OnRep_Health

// Begin Class ANetworkTopologyCharacter Function ServerLaunchCharacter
static FName NAME_ANetworkTopologyCharacter_ServerLaunchCharacter = FName(TEXT("ServerLaunchCharacter"));
void ANetworkTopologyCharacter::ServerLaunchCharacter()
{
	ProcessEvent(FindFunctionChecked(NAME_ANetworkTopologyCharacter_ServerLaunchCharacter),NULL);
}
struct Z_Construct_UFunction_ANetworkTopologyCharacter_ServerLaunchCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Launches this character on the server\n//Split into 3 functions\n//ServerLaunchCharacter (needs no definition, is filled by Unreal Engine)\n//ServerLaunchCharacter_Validate (needs to return true or else the client disconnects; purpose is for anti-desync/anti-cheat\n//ServerLaunchCharacter_Implementation (this is the logic that runs on the server)\n" },
#endif
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Launches this character on the server\nSplit into 3 functions\nServerLaunchCharacter (needs no definition, is filled by Unreal Engine)\nServerLaunchCharacter_Validate (needs to return true or else the client disconnects; purpose is for anti-desync/anti-cheat\nServerLaunchCharacter_Implementation (this is the logic that runs on the server)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkTopologyCharacter_ServerLaunchCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkTopologyCharacter, nullptr, "ServerLaunchCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkTopologyCharacter_ServerLaunchCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkTopologyCharacter_ServerLaunchCharacter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetworkTopologyCharacter_ServerLaunchCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkTopologyCharacter_ServerLaunchCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetworkTopologyCharacter::execServerLaunchCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerLaunchCharacter_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerLaunchCharacter_Validate"));
		return;
	}
	P_THIS->ServerLaunchCharacter_Implementation();
	P_NATIVE_END;
}
// End Class ANetworkTopologyCharacter Function ServerLaunchCharacter

// Begin Class ANetworkTopologyCharacter
void ANetworkTopologyCharacter::StaticRegisterNativesANetworkTopologyCharacter()
{
	UClass* Class = ANetworkTopologyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientPrintMessage", &ANetworkTopologyCharacter::execClientPrintMessage },
		{ "MulticastPlaySoundHere", &ANetworkTopologyCharacter::execMulticastPlaySoundHere },
		{ "OnRep_Health", &ANetworkTopologyCharacter::execOnRep_Health },
		{ "ServerLaunchCharacter", &ANetworkTopologyCharacter::execServerLaunchCharacter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkTopologyCharacter);
UClass* Z_Construct_UClass_ANetworkTopologyCharacter_NoRegister()
{
	return ANetworkTopologyCharacter::StaticClass();
}
struct Z_Construct_UClass_ANetworkTopologyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NetworkTopologyCharacter.h" },
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NetworkTopologyCharacter" },
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HurtSound_MetaData[] = {
		{ "Category", "NetworkTopologyCharacter" },
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "NetworkTopologyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HurtSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetworkTopologyCharacter_ClientPrintMessage, "ClientPrintMessage" }, // 4188114432
		{ &Z_Construct_UFunction_ANetworkTopologyCharacter_MulticastPlaySoundHere, "MulticastPlaySoundHere" }, // 2436679806
		{ &Z_Construct_UFunction_ANetworkTopologyCharacter_OnRep_Health, "OnRep_Health" }, // 4176255770
		{ &Z_Construct_UFunction_ANetworkTopologyCharacter_ServerLaunchCharacter, "ServerLaunchCharacter" }, // 2463138973
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkTopologyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0040000100000024, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkTopologyCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_HurtSound = { "HurtSound", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkTopologyCharacter, HurtSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HurtSound_MetaData), NewProp_HurtSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkTopologyCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkTopologyCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkTopologyCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkTopologyCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkTopologyCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkTopologyCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetworkTopologyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_HurtSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkTopologyCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkTopologyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetworkTopologyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkTopology,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkTopologyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkTopologyCharacter_Statics::ClassParams = {
	&ANetworkTopologyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetworkTopologyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkTopologyCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkTopologyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetworkTopologyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetworkTopologyCharacter()
{
	if (!Z_Registration_Info_UClass_ANetworkTopologyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkTopologyCharacter.OuterSingleton, Z_Construct_UClass_ANetworkTopologyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetworkTopologyCharacter.OuterSingleton;
}
template<> NETWORKTOPOLOGY_API UClass* StaticClass<ANetworkTopologyCharacter>()
{
	return ANetworkTopologyCharacter::StaticClass();
}
void ANetworkTopologyCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANetworkTopologyCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkTopologyCharacter);
ANetworkTopologyCharacter::~ANetworkTopologyCharacter() {}
// End Class ANetworkTopologyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkTopologyCharacter, ANetworkTopologyCharacter::StaticClass, TEXT("ANetworkTopologyCharacter"), &Z_Registration_Info_UClass_ANetworkTopologyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkTopologyCharacter), 2598055602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_3629715877(TEXT("/Script/NetworkTopology"),
	Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
