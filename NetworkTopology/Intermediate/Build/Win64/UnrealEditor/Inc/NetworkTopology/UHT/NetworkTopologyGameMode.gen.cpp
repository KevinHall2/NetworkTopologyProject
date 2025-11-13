// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkTopology/NetworkTopologyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkTopologyGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NETWORKTOPOLOGY_API UClass* Z_Construct_UClass_ANetworkTopologyGameMode();
NETWORKTOPOLOGY_API UClass* Z_Construct_UClass_ANetworkTopologyGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkTopology();
// End Cross Module References

// Begin Class ANetworkTopologyGameMode
void ANetworkTopologyGameMode::StaticRegisterNativesANetworkTopologyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkTopologyGameMode);
UClass* Z_Construct_UClass_ANetworkTopologyGameMode_NoRegister()
{
	return ANetworkTopologyGameMode::StaticClass();
}
struct Z_Construct_UClass_ANetworkTopologyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetworkTopologyGameMode.h" },
		{ "ModuleRelativePath", "NetworkTopologyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkTopologyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANetworkTopologyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkTopology,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkTopologyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkTopologyGameMode_Statics::ClassParams = {
	&ANetworkTopologyGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkTopologyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetworkTopologyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetworkTopologyGameMode()
{
	if (!Z_Registration_Info_UClass_ANetworkTopologyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkTopologyGameMode.OuterSingleton, Z_Construct_UClass_ANetworkTopologyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetworkTopologyGameMode.OuterSingleton;
}
template<> NETWORKTOPOLOGY_API UClass* StaticClass<ANetworkTopologyGameMode>()
{
	return ANetworkTopologyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkTopologyGameMode);
ANetworkTopologyGameMode::~ANetworkTopologyGameMode() {}
// End Class ANetworkTopologyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkTopologyGameMode, ANetworkTopologyGameMode::StaticClass, TEXT("ANetworkTopologyGameMode"), &Z_Registration_Info_UClass_ANetworkTopologyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkTopologyGameMode), 2728658148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyGameMode_h_2219636660(TEXT("/Script/NetworkTopology"),
	Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s248029_Documents_Unreal_Projects_NetworkTopology_Source_NetworkTopology_NetworkTopologyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
