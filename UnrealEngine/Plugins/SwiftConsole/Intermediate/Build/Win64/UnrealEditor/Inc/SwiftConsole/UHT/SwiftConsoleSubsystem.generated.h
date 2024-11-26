// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SwiftConsoleSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USwiftConsoleDataAsset;
struct FInputActionValue;
#ifdef SWIFTCONSOLE_SwiftConsoleSubsystem_generated_h
#error "SwiftConsoleSubsystem.generated.h already included, missing '#pragma once' in SwiftConsoleSubsystem.h"
#endif
#define SWIFTCONSOLE_SwiftConsoleSubsystem_generated_h

#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_16_DELEGATE \
SWIFTCONSOLE_API void FSwiftConsoleUpdate_DelegateWrapper(const FMulticastScriptDelegate& SwiftConsoleUpdate, TArray<FString> const& OutCommands);


#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActionRowPrevious); \
	DECLARE_FUNCTION(execActionRowNext); \
	DECLARE_FUNCTION(execActionClear); \
	DECLARE_FUNCTION(execActionCommand); \
	DECLARE_FUNCTION(execActionSetDataAsset); \
	DECLARE_FUNCTION(execClearCurrent); \
	DECLARE_FUNCTION(execClearAll); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execFindDataAssets);


#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSwiftConsoleSubsystem(); \
	friend struct Z_Construct_UClass_USwiftConsoleSubsystem_Statics; \
public: \
	DECLARE_CLASS(USwiftConsoleSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SwiftConsole"), NO_API) \
	DECLARE_SERIALIZER(USwiftConsoleSubsystem)


#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USwiftConsoleSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USwiftConsoleSubsystem(USwiftConsoleSubsystem&&); \
	USwiftConsoleSubsystem(const USwiftConsoleSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USwiftConsoleSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USwiftConsoleSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USwiftConsoleSubsystem) \
	NO_API virtual ~USwiftConsoleSubsystem();


#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_18_PROLOG
#define FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWIFTCONSOLE_API UClass* StaticClass<class USwiftConsoleSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rober_OneDrive_Documents_Game_Dev_Portfolio_UnrealEngine_Plugins_SwiftConsole_Source_SwiftConsole_Public_SwiftConsoleSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
