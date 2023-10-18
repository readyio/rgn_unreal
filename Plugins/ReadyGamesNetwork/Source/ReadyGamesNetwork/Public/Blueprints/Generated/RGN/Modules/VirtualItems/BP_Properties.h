#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/Properties.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_Properties.generated.h"

/**
 * Represents properties associated with a virtual item within the Ready Games Network (RGN).
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_Properties {
    GENERATED_BODY()

    /**
     * List of application identifiers where the properties are used.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> appIds;
    /**
     * Game-specific properties in JSON format.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString json;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::Properties& source, FBP_Properties& target) {
		for (const auto& source_appIds_item : source.appIds) {
			FString b_source_appIds_item;
			b_source_appIds_item = FString(source_appIds_item.c_str());
			target.appIds.Add(b_source_appIds_item);
		}
		target.json = FString(source.json.c_str());
	}

	static void ConvertToCoreModel(const FBP_Properties& source, RGN::Modules::VirtualItems::Properties& target) {
		for (const auto& source_appIds_item : source.appIds) {
			string cpp_source_appIds_item;
			cpp_source_appIds_item = string(TCHAR_TO_UTF8(*source_appIds_item));
			target.appIds.push_back(cpp_source_appIds_item);
		}
		target.json = string(TCHAR_TO_UTF8(*source.json));
	}
};
