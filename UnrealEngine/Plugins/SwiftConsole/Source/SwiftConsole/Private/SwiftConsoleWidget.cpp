// Fill out your copyright notice in the Description page of Project Settings.


#include "SwiftConsoleWidget.h"

#include "SwiftConsoleSubsystem.h"


void USwiftConsoleWidget::NativeConstruct()
{
	Super::NativeConstruct();

	USwiftConsoleSubsystem* Subsystem = GetGameInstance()->GetSubsystem<USwiftConsoleSubsystem>();
	Subsystem->OnSwiftConsoleUpdate.AddDynamic(this, &ThisClass::ReceiveSwiftConsoleUpdate);
}
