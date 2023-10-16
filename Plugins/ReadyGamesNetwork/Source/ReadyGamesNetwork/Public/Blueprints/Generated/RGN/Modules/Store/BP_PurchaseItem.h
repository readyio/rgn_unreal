#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include "../Inventory/BP_InventoryItemData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Store/PurchaseItem.h"
#include "BP_PurchaseItem.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PurchaseItem {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FBP_VirtualItem virtualItem;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FBP_InventoryItemData inventoryItem;

	static void ConvertToUnrealModel(const RGN::Modules::Store::PurchaseItem& source, FBP_PurchaseItem& target) {
		FBP_VirtualItem::ConvertToUnrealModel(source.virtualItem, target.virtualItem);
		FBP_InventoryItemData::ConvertToUnrealModel(source.inventoryItem, target.inventoryItem);
	}

	static void ConvertToCoreModel(const FBP_PurchaseItem& source, RGN::Modules::Store::PurchaseItem& target) {
		FBP_VirtualItem::ConvertToCoreModel(source.virtualItem, target.virtualItem);
		FBP_InventoryItemData::ConvertToCoreModel(source.inventoryItem, target.inventoryItem);
	}
};
