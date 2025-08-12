// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwiftConsole.h"

#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "ISettingsModule.h"
#include "SwiftConsoleProjectSettings.h"

#define LOCTEXT_NAMESPACE "FSwiftConsoleModule"

void FSwiftConsoleModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (SettingsModule != nullptr)
	{
		SettingsModule->RegisterSettings(
		TEXT("Project"), TEXT("Plugins"), TEXT("Swift Console"),
		NSLOCTEXT("SwiftConsoleProjectSettings", "SwiftConsoleProjectName", "Common UI Input Settings"),
		NSLOCTEXT("SwiftConsoleProjectSettings", "SwiftConsoleProjectName", "Establish project-wide UI input settings and action mappings."),
		GetMutableDefault<USwiftConsoleProjectSettings>());

		UE_LOG(LogTemp, Warning, TEXT("Registered Swift Console Project Settings"));
	}
}

void FSwiftConsoleModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSwiftConsoleModule, SwiftConsole)