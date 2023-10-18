#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemsWithVirtualItemsData.h"
#include "../../../../../Generated/RGN/Modules/Inventory/InventoryItemData.h"
#include "BP_InventoryItemData.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_InventoryItemsWithVirtualItemsData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_InventoryItemsWithVirtualItemsData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_InventoryItemData> items;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_VirtualItem> virtualItems;

	static void ConvertToUnrealModel(const RGN::Modules::Inventory::InventoryItemsWithVirtualItemsData& source, FBP_InventoryItemsWithVirtualItemsData& target) {
		for (const auto& source_items_item : source.items) {
			FBP_InventoryItemData b_source_items_item;
			FBP_InventoryItemData::ConvertToUnrealModel(source_items_item, b_source_items_item);
			target.items.Add(b_source_items_item);
		}
		for (const auto& source_virtualItems_item : source.virtualItems) {
			FBP_VirtualItem b_source_virtualItems_item;
			FBP_VirtualItem::ConvertToUnrealModel(source_virtualItems_item, b_source_virtualItems_item);
			target.virtualItems.Add(b_source_virtualItems_item);
		}
	}

	static void ConvertToCoreModel(const FBP_InventoryItemsWithVirtualItemsData& source, RGN::Modules::Inventory::InventoryItemsWithVirtualItemsData& target) {
		for (const auto& source_items_item : source.items) {
			RGN::Modules::Inventory::InventoryItemData cpp_source_items_item;
			FBP_InventoryItemData::ConvertToCoreModel(source_items_item, cpp_source_items_item);
			target.items.push_back(cpp_source_items_item);
		}
		for (const auto& source_virtualItems_item : source.virtualItems) {
			RGN::Modules::VirtualItems::VirtualItem cpp_source_virtualItems_item;
			FBP_VirtualItem::ConvertToCoreModel(source_virtualItems_item, cpp_source_virtualItems_item);
			target.virtualItems.push_back(cpp_source_virtualItems_item);
		}
	}
};
