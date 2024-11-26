// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEngine_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealEngine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealEngine()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealEngine.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealEngine",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0BDAA855,
				0xA6B26F8D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealEngine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealEngine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealEngine(Z_Construct_UPackage__Script_UnrealEngine, TEXT("/Script/UnrealEngine"), Z_Registration_Info_UPackage__Script_UnrealEngine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0BDAA855, 0xA6B26F8D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
