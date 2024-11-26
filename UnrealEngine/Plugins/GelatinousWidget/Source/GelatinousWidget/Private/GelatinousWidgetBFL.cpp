// Copyright 2023 Beamdog

#include "GelatinousWidgetBFL.h"

#include "Misc/FileHelper.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"

void UGelatinousWidgetBFL::WriteStringMapToJson(const FString& FilePath, const TMap<FString, FString>& MapData)
{
	TSharedPtr<FJsonObject> JsonObject = MakeShared<FJsonObject>();

	for (const auto& Entry : MapData)
	{
		JsonObject->SetStringField(Entry.Key, Entry.Value);
	}

	FString JsonString;
	TSharedRef<TJsonWriter<>> JsonWriter = TJsonWriterFactory<>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);
	JsonWriter->Close();

	FFileHelper::SaveStringToFile(JsonString, *FilePath);
}

bool UGelatinousWidgetBFL::ReadStringMapFromJson(const FString& FilePath, TMap<FString, FString>& OutJsonMap)
{
	// Read the file into a string
	FString JsonString;
	if (!FFileHelper::LoadFileToString(JsonString, *FilePath))
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to load the JSON from file: %s"), *FilePath);
		return false;
	}

	// Parse the JSON string
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);
	if (!FJsonSerializer::Deserialize(JsonReader, JsonObject) || !JsonObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to deserialize the JSON from file: %s"), *FilePath);
		return false;
	}

	// Convert JSON object to map
	for (const auto& Entry : JsonObject->Values)
	{
		OutJsonMap.Add(Entry.Key, Entry.Value->AsString());
	}

	return true;
}