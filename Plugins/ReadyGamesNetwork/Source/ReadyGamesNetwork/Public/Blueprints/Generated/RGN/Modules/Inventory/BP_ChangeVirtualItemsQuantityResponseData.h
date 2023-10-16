#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Inventory/ChangeVirtualItemsQuantityResponseData.h"
#include "BP_ChangeVirtualItemsQuantityResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_ChangeVirtualItemsQuantityResponseData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_VirtualItem> updatedItems;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::ChangeVirtualItemsQuantityResponseData& source, FBP_ChangeVirtualItemsQuantityResponseData& target) {
		for (const auto& source_updatedItems_item : source.updatedItems) {
			FBP_VirtualItem b_source_updatedItems_item;
			FBP_VirtualItem::ConvertToUnrealModel(source_updatedItems_item, b_source_updatedItems_item);
			target.updatedItems.Add(b_source_updatedItems_item);
		}
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_ChangeVirtualItemsQuantityResponseData& source, RGN::Modules::Inventory::ChangeVirtualItemsQuantityResponseData& target) {
		for (const auto& source_updatedItems_item : source.updatedItems) {
			RGN::Modules::VirtualItems::VirtualItem cpp_source_updatedItems_item;
			FBP_VirtualItem::ConvertToCoreModel(source_updatedItems_item, cpp_source_updatedItems_item);
			target.updatedItems.push_back(cpp_source_updatedItems_item);
		}
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
