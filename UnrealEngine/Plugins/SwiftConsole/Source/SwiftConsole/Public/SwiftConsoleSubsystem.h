// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SwiftConsoleSubsystem.generated.h"


class USwiftConsoleDataAsset;
class IConsoleVariable;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwiftConsoleUpdate, const TArray<FString>&, OutCommands);

UCLASS()
class SWIFTCONSOLE_API USwiftConsoleSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	// overrides
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	
	// console command calls
	void StatNone() const { GEngine->Exec(GetWorld(), TEXT("Stat None")); }
	void ExecuteConsoleCommand(const FString& PersistentCommand) const
	{
		const bool bSuccess = GEngine->Exec(GetWorld(), *PersistentCommand);
	}

	TArray<IConsoleCommand*> DataAssetConsoleCommands;
	void RegisterConsoleCommands();

	// input mapping context
	UPROPERTY()
	UInputMappingContext* SwiftConsoleInputMappingContext = nullptr;
	
	void CreateInputMappingContext();
	void RemoveInputMappingContext();

	// data assets
	UFUNCTION()
	void FindDataAssets();
	
	UPROPERTY()
	TArray<USwiftConsoleDataAsset*> DataAssets;

	UPROPERTY()
	USwiftConsoleDataAsset* DataAssetCurrent = nullptr;

	// temp values
	UPROPERTY()
	int32 CurrentRow = 0;

	UPROPERTY()
	int32 CurrentRowLength = 0;

	UPROPERTY()
	int32 CurrentCommandIndex = 0;

	// util functions
	int32 CalculateRows() const;

	UFUNCTION()
	void Disable();

	UFUNCTION()
	void ClearAll();
	
	UFUNCTION()
	void ClearCurrent();

	// input action functions	
	UFUNCTION()
	void ActionSetDataAsset(USwiftConsoleDataAsset* DataAsset);
	
	UFUNCTION()
	void ActionCommand(int32 Index);

	UFUNCTION()
	void ActionClear(const FInputActionValue& Value);
	
	UFUNCTION()
	void ActionRowNext();

	UFUNCTION()
	void ActionRowPrevious();

	// widget - could create through slate...
	UPROPERTY()
	FSoftObjectPath WidgetPath = FSoftObjectPath("/SwiftConsole/Widgets/SwiftConsole_Main.SwiftConsole_Main");
	
	UPROPERTY()
	UUserWidget* WidgetMain = nullptr;

	void LoadWidget();

	// delegate
	void BroadCastUpdate();
	
public:
	UPROPERTY(BlueprintAssignable)
	FSwiftConsoleUpdate OnSwiftConsoleUpdate;
};
