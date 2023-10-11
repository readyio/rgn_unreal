#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_InventoryItemData.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include "BP_InventoryItemsWithVirtualItemsData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_InventoryItemsWithVirtualItemsData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_InventoryItemData> items;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_VirtualItem> virtualItems;
};
