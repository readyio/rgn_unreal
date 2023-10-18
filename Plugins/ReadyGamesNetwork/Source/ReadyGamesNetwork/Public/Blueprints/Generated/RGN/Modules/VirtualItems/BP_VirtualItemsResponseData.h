#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItemsResponseData.h"
#include "BP_VirtualItemsResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_VirtualItemsResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FBP_VirtualItem> virtualItems;

	static void ConvertToUnrealModel(const RGN::Modules::VirtualItems::VirtualItemsResponseData& source, FBP_VirtualItemsResponseData& target) {
		for (const auto& source_virtualItems_item : source.virtualItems) {
			FBP_VirtualItem b_source_virtualItems_item;
			FBP_VirtualItem::ConvertToUnrealModel(source_virtualItems_item, b_source_virtualItems_item);
			target.virtualItems.Add(b_source_virtualItems_item);
		}
	}

	static void ConvertToCoreModel(const FBP_VirtualItemsResponseData& source, RGN::Modules::VirtualItems::VirtualItemsResponseData& target) {
		for (const auto& source_virtualItems_item : source.virtualItems) {
			RGN::Modules::VirtualItems::VirtualItem cpp_source_virtualItems_item;
			FBP_VirtualItem::ConvertToCoreModel(source_virtualItems_item, cpp_source_virtualItems_item);
			target.virtualItems.push_back(cpp_source_virtualItems_item);
		}
	}
};
