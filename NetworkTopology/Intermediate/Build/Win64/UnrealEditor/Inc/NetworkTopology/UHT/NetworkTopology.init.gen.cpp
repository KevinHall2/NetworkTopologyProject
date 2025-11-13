// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkTopology_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NetworkTopology;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NetworkTopology()
	{
		if (!Z_Registration_Info_UPackage__Script_NetworkTopology.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NetworkTopology",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8DCF8EEF,
				0xCF9BE48D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NetworkTopology.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NetworkTopology.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NetworkTopology(Z_Construct_UPackage__Script_NetworkTopology, TEXT("/Script/NetworkTopology"), Z_Registration_Info_UPackage__Script_NetworkTopology, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8DCF8EEF, 0xCF9BE48D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
