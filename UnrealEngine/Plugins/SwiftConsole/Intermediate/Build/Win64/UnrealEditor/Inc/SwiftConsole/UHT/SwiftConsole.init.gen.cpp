// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwiftConsole_init() {}
	SWIFTCONSOLE_API UFunction* Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SwiftConsole;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SwiftConsole()
	{
		if (!Z_Registration_Info_UPackage__Script_SwiftConsole.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SwiftConsole_SwiftConsoleUpdate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SwiftConsole",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x59DB0544,
				0x46807980,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SwiftConsole.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SwiftConsole.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SwiftConsole(Z_Construct_UPackage__Script_SwiftConsole, TEXT("/Script/SwiftConsole"), Z_Registration_Info_UPackage__Script_SwiftConsole, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x59DB0544, 0x46807980));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
