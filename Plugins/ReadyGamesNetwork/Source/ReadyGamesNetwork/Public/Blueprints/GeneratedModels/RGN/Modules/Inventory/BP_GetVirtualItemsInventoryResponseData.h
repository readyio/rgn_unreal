#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_InventoryItemData.h"
#include "BP_GetVirtualItemsInventoryResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetVirtualItemsInventoryResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_InventoryItemData> virtualItemInventoryDatas;
};
