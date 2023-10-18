#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/VirtualItems/AddressableInfo.h"
#include "BP_AddressableInfo.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddressableInfo {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> appIds;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString addressableId;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::AddressableInfo& source, FBP_AddressableInfo& target) {
		for (const auto& source_appIds_item : source.appIds) {
			FString b_source_appIds_item;
			b_source_appIds_item = FString(source_appIds_item.c_str());
			target.appIds.Add(b_source_appIds_item);
		}
		target.addressableId = FString(source.addressableId.c_str());
	}

	static void ConvertToCoreModel(const FBP_AddressableInfo& source, RGN::Modules::VirtualItems::AddressableInfo& target) {
		for (const auto& source_appIds_item : source.appIds) {
			string cpp_source_appIds_item;
			cpp_source_appIds_item = string(TCHAR_TO_UTF8(*source_appIds_item));
			target.appIds.push_back(cpp_source_appIds_item);
		}
		target.addressableId = string(TCHAR_TO_UTF8(*source.addressableId));
	}
};
