#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include "../Inventory/BP_InventoryItemData.h"
#include "BP_PurchaseItem.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PurchaseItem {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FBP_VirtualItem virtualItem;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FBP_InventoryItemData inventoryItem;
};
