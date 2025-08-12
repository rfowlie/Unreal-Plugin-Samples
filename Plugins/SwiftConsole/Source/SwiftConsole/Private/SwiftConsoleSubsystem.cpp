// Fill out your copyright notice in the Description page of Project Settings.

#include "SwiftConsoleSubsystem.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "SwiftConsoleDataAsset.h"
#include "SwiftConsoleDeveloperSettings.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Blueprint/UserWidget.h"


class UEnhancedInputLocalPlayerSubsystem;

void USwiftConsoleSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	CurrentCommandIndex = 0;
	
	// FindInputAssets();
	// const TSoftObjectPtr<USwiftConsoleConfig> SwiftConsoleConfigPtr(SwiftConsoleConfigPath);
	// SwiftConsoleConfig = SwiftConsoleConfigPtr.LoadSynchronous();
	// if (!IsValid(SwiftConsoleConfig))
	// {
	// 	UE_LOG(LogTemp, Error, TEXT("Swift Console Config Not Found"));
	// 	return;
	// }
	
	FindDataAssets();
	RegisterConsoleCommands();
}

void USwiftConsoleSubsystem::Deinitialize()
{	
	Super::Deinitialize();

	ClearAll();
	// for (const auto ConsoleObject : DataAssetConsoleCommands)
	// {
	// 	IConsoleManager::Get().UnregisterConsoleObject(ConsoleObject);
	// }
}

bool USwiftConsoleSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
#if UE_BUILD_SHIPPING
	return false;
#else
	return Super::ShouldCreateSubsystem(Outer);
#endif
}

void USwiftConsoleSubsystem::RegisterConsoleCommands()
{
	// TODO: register a help command??? maybe to list all current available commands???
	IConsoleCommand* ConsoleCommand = IConsoleManager::Get().RegisterConsoleCommand(
	TEXT("SwiftConsole.Disable"),
	TEXT("list the current swift console group and mapped commands"),
	FConsoleCommandDelegate::CreateLambda([this]
	{
		Disable();
	}));

	// TODO: register a console variable for every DataAsset currently in the project
	// create a unique console command to set this data asset as the current active
	for (USwiftConsoleDataAsset* DataAsset : DataAssets)
	{
		FString Name = DataAsset->Group.ToString();
		Name.RemoveSpacesInline();
		FString TempConsoleName = "SwiftConsole." + Name;
		IConsoleCommand* TempConsoleVariable = IConsoleManager::Get().RegisterConsoleCommand(
			*TempConsoleName,
			*DataAsset->Tooltip,
			FConsoleCommandDelegate::CreateLambda([this, DataAsset]()
			{
				// this->ActionSetDataAsset(DataAsset);
				ActionSetDataAsset(DataAsset);
			}),
			ECVF_Default
		);

		DataAssetConsoleCommands.Add(ConsoleCommand);
	}
}

void USwiftConsoleSubsystem::CreateInputMappingContext()
{
	const APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	check(PlayerController)
	
	if (!SwiftConsoleInputMappingContext)
	{
		const USwiftConsoleDeveloperSettings* DeveloperSettings = GetDefault<USwiftConsoleDeveloperSettings>();
		UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(
			PlayerController->InputComponent);
		check(EIC)
	
		// create default mapping
		SwiftConsoleInputMappingContext = NewObject<UInputMappingContext>(this);
	
		UInputAction* IA_Clear = NewObject<UInputAction>(this);
		IA_Clear->ValueType = EInputActionValueType::Boolean;
		FEnhancedActionKeyMapping& AP_Clear = SwiftConsoleInputMappingContext->MapKey(
			IA_Clear, DeveloperSettings->Clear);
		EIC->BindAction(IA_Clear, ETriggerEvent::Started, this, &USwiftConsoleSubsystem::ActionClear);

		UInputAction* IA_RowNext = NewObject<UInputAction>(this);
		IA_RowNext->ValueType = EInputActionValueType::Boolean;
		FEnhancedActionKeyMapping& AP_NextRow = SwiftConsoleInputMappingContext->MapKey(
			IA_RowNext, DeveloperSettings->RowNext);
		EIC->BindAction(IA_RowNext, ETriggerEvent::Started, this, &USwiftConsoleSubsystem::ActionRowNext);

		UInputAction* IA_RowPrevious = NewObject<UInputAction>(this);
		IA_RowPrevious->ValueType = EInputActionValueType::Boolean;
		FEnhancedActionKeyMapping& AP_PreviousRow = SwiftConsoleInputMappingContext->MapKey(
			IA_RowPrevious, DeveloperSettings->RowPrevious);
		EIC->BindAction(IA_RowPrevious, ETriggerEvent::Started, this, &USwiftConsoleSubsystem::ActionRowPrevious);

		// add an input action for each key in the key array
		int32 Index = 0;
		for (auto Key : DeveloperSettings->SwiftConsoleKeys)
		{
			if (Key.IsValid() && DeveloperSettings->IsValidKey(Key))
			{
				UInputAction* IA_Temp = NewObject<UInputAction>(this);
				IA_Temp->ValueType = EInputActionValueType::Boolean;
				SwiftConsoleInputMappingContext->MapKey(IA_Temp, Key);
				EIC->BindAction(IA_Temp, ETriggerEvent::Started, this, &USwiftConsoleSubsystem::ActionCommand, Index);
				Index += 1;
			}		
		}
	}	
	
	UEnhancedInputLocalPlayerSubsystem* EILP = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
		PlayerController->GetLocalPlayer());
	check(EILP)

	if (!EILP->HasMappingContext(SwiftConsoleInputMappingContext))
	{
		EILP->AddMappingContext(SwiftConsoleInputMappingContext, 1);
	}
}

void USwiftConsoleSubsystem::RemoveInputMappingContext()
{
	if (!SwiftConsoleInputMappingContext) { return; }
	
	const APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	check(PlayerController);
	UEnhancedInputLocalPlayerSubsystem* EILP = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
		PlayerController->GetLocalPlayer());
	check(EILP);
	
	EILP->RemoveMappingContext(SwiftConsoleInputMappingContext);
}

void USwiftConsoleSubsystem::FindDataAssets()
{
	DataAssets.Empty();
	
	const FAssetRegistryModule& AssetRegistryModule =
		FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	FARFilter Filter;
	Filter.ClassPaths.Add(USwiftConsoleDataAsset::StaticClass()->GetClassPathName());

	TArray<FAssetData> AssetDataList;
	AssetRegistryModule.Get().GetAssets(Filter, AssetDataList);

	// TODO: ensure that there are no duplicate groups, see custom place actors for this logic
	
	for (const FAssetData& AssetData : AssetDataList)
	{
		if (USwiftConsoleDataAsset* DataAsset = Cast<USwiftConsoleDataAsset>(AssetData.GetAsset()))
		{
			DataAssets.Add(DataAsset);
		}
	}
}

int32 USwiftConsoleSubsystem::CalculateRows() const
{
	const USwiftConsoleDeveloperSettings* DeveloperSettings = GetDefault<USwiftConsoleDeveloperSettings>();
	float Keys = DeveloperSettings->SwiftConsoleKeys.Num();
	float Commands = DataAssetCurrent->ConsoleCommandSets.Num();
	return FMath::CeilToInt32(Commands/Keys);
}

void USwiftConsoleSubsystem::Disable()
{
	ClearAll();
	RemoveInputMappingContext();
	CurrentRow = 0;
	if (IsValid(SwiftConsoleWidget))
	{
		SwiftConsoleWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void USwiftConsoleSubsystem::ClearAll()
{
	StatNone();
	
	// const auto CurrentDataAsset = GetDataAsset(DataAssetCurrentIndex);
	const auto CurrentDataAsset = DataAssetCurrent;
	if (!IsValid(CurrentDataAsset))
	{
		UE_LOG(LogTemp, Error, TEXT("CurrentDataAsset is invalid"));
		return;
	}

	// run undo on all command groupings
	for (const FConsoleCommandSet Set : CurrentDataAsset->ConsoleCommandSets)
	{
		for (const FString Command : Set.UndoCommandsToEnable)
		{
			ExecuteConsoleCommand(Command);
		}
	}
}

void USwiftConsoleSubsystem::ClearCurrent()
{	
	StatNone();

	// const auto CurrentDataAsset = GetDataAsset(DataAssetCurrentIndex);
	const auto CurrentDataAsset = DataAssetCurrent;
	if (!IsValid(CurrentDataAsset))
	{
		UE_LOG(LogTemp, Error, TEXT("CurrentDataAsset is invalid"));
		return;
	}

	// undo current commands
	if (CurrentDataAsset->ConsoleCommandSets.IsValidIndex(CurrentCommandIndex))
	{
		for (auto Command : CurrentDataAsset->ConsoleCommandSets[CurrentCommandIndex].UndoCommandsToEnable)
		{
			ExecuteConsoleCommand(Command);
		}
	}	
}

void USwiftConsoleSubsystem::ActionSetDataAsset(USwiftConsoleDataAsset* DataAsset)
{
	if (!DataAsset)
	{
		UE_LOG(LogTemp, Error, TEXT("Action Set Data Asset: Data Asset is null"));
		return;
	}
	
	ClearAll();

	CurrentRow = 0;
	CurrentCommandIndex = 0;
	DataAssetCurrent = DataAsset;
	for (auto Command : DataAssetCurrent->PersistentCommands)
	{
		ExecuteConsoleCommand(Command);
	}

	// fire each time a console command is set to ensure mapping is there...
	CreateInputMappingContext();

	// activate widget
	LoadWidget();
	
	// broadcast current list of active commands
	BroadCastUpdate();
}

void USwiftConsoleSubsystem::ActionCommand(int32 Index)
{
	// TODO: check if works
	ClearCurrent();

	const USwiftConsoleDeveloperSettings* DeveloperSettings = GetDefault<USwiftConsoleDeveloperSettings>();
	CurrentCommandIndex = DeveloperSettings->SwiftConsoleKeys.Num() * CurrentRow + Index;

	UE_LOG(LogTemp, Log, TEXT("Action Command: Index: %d, CurrentCommandIndex: %d"), Index, CurrentCommandIndex);
	
	if (DataAssetCurrent->ConsoleCommandSets.IsValidIndex(CurrentCommandIndex))
	{
		// reinstate all persistent commands if true
		if (DataAssetCurrent->ConsoleCommandSets[CurrentCommandIndex].EnablePersistentCommands)
		{
			for (auto Command : DataAssetCurrent->PersistentCommands)
			{
				ExecuteConsoleCommand(Command);
			}
		}
		// enable set commands
		for (auto Command : DataAssetCurrent->ConsoleCommandSets[CurrentCommandIndex].CommandsToEnable)
		{
			ExecuteConsoleCommand(Command);
		}
	}
	// ???
	else
	{
		for (auto Command : DataAssetCurrent->PersistentCommands)
		{
			ExecuteConsoleCommand(Command);
		}
	}
}

void USwiftConsoleSubsystem::ActionClear(const FInputActionValue& Value)
{
	ClearCurrent();
	
	// reinstate all persistent commands
	for (auto Command : DataAssetCurrent->PersistentCommands)
	{
		ExecuteConsoleCommand(Command);
	}
}

void USwiftConsoleSubsystem::ActionRowNext()
{
	const int32 Rows = CalculateRows();
	CurrentRow = (CurrentRow + 1 +  Rows) % Rows;
	UE_LOG(LogTemp, Warning, TEXT("Total Rows: %d, Current Row: %d"), Rows, CurrentRow);
	
	// broadcast current list of active commands
	BroadCastUpdate();
}

void USwiftConsoleSubsystem::ActionRowPrevious()
{
	const int32 Rows = CalculateRows();
	CurrentRow = (CurrentRow - 1 + Rows) % Rows;
	UE_LOG(LogTemp, Warning, TEXT("Total Rows: %d, Current Row: %d"), Rows, CurrentRow);
	
	// broadcast current list of active commands
	BroadCastUpdate();
}

void USwiftConsoleSubsystem::LoadWidget()
{
	const USwiftConsoleDeveloperSettings* DeveloperSettings = GetDefault<USwiftConsoleDeveloperSettings>();
	if (!IsValid(DeveloperSettings->DisplayWidget))
	{
		UE_LOG(LogTemp, Error, TEXT("Swift Console Widget not set in config"));
		return;
	}
	if (IsValid(SwiftConsoleWidget))
	{
		SwiftConsoleWidget->SetVisibility(ESlateVisibility::Visible);
	}
	else if (DeveloperSettings->bEnableWidget)
	{
		SwiftConsoleWidget = CreateWidget<USwiftConsoleWidget>(GetWorld(), DeveloperSettings->DisplayWidget);
		SwiftConsoleWidget->SetVisibility(ESlateVisibility::Visible);
		SwiftConsoleWidget->AddToViewport();
	}
}

void USwiftConsoleSubsystem::BroadCastUpdate()
{
	if (!IsValid(SwiftConsoleWidget)) { return; }
	
	const USwiftConsoleDeveloperSettings* DeveloperSettings = GetDefault<USwiftConsoleDeveloperSettings>();
	
	FString Temp;
	// TArray<FString> OutCommands;
	TMap<FKey, FString> OutMap;
	CurrentCommandIndex = DeveloperSettings->SwiftConsoleKeys.Num() * CurrentRow;
	for (int32 Index = 0; Index < DeveloperSettings->SwiftConsoleKeys.Num(); Index++)
	{
		if (!DataAssetCurrent->GetCommandAt(Index + CurrentCommandIndex, Temp)) { break; }
		OutMap.Add(DeveloperSettings->SwiftConsoleKeys[Index], Temp);
		// OutCommands.Add(Temp);
		Temp.Empty();
	}

	SwiftConsoleWidget->UpdateCommandList(OutMap);
	// if (OnSwiftConsoleUpdate.IsBound()) { OnSwiftConsoleUpdate.Broadcast(DataAssetCurrent); }
}
