// Copyright Epic Games, Inc. All Rights Reserved.

#include "GelatinousWidget.h"

#include "EditorUtilitySubsystem.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "GelatinousWidgetStyle.h"
#include "GelatinousWidgetCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"


static const FName GelatinousWidgetTabName("GelatinousWidget");

#define LOCTEXT_NAMESPACE "FGelatinousWidgetModule"

void FGelatinousWidgetModule::StartupModule()
{	
	FGelatinousWidgetStyle::Initialize();
	FGelatinousWidgetStyle::ReloadTextures();

	FGelatinousWidgetCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FGelatinousWidgetCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FGelatinousWidgetModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FGelatinousWidgetModule::RegisterMenus));
}

void FGelatinousWidgetModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FGelatinousWidgetStyle::Shutdown();

	FGelatinousWidgetCommands::Unregister();
}

void FGelatinousWidgetModule::PluginButtonClicked()
{
	UE_LOG(LogTemp, Error, TEXT("Create %s"), *GelatinousWidgetTabName.ToString())
	
	const FString WidgetPath = "/GelatinousWidget/EUW_GelatinousWidget.EUW_GelatinousWidget";
	
	const FSoftObjectPath WidgetAssetPath(WidgetPath);	
	UObject* WidgetObject = WidgetAssetPath.TryLoad();
	if (WidgetObject == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Missing Expected widget class at : %s"), *WidgetPath);
		return;
	}
	
	UEditorUtilityWidgetBlueprint* Widget = Cast<UEditorUtilityWidgetBlueprint>(WidgetObject);
	if (Widget == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Couldnt cast %s to UEditorUtilityWidgetBlueprint"), *WidgetPath);
		return;
	}
	
	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	EditorUtilitySubsystem->SpawnAndRegisterTab(Widget);	
}

void FGelatinousWidgetModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FGelatinousWidgetCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FGelatinousWidgetCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FGelatinousWidgetModule, GelatinousWidget)