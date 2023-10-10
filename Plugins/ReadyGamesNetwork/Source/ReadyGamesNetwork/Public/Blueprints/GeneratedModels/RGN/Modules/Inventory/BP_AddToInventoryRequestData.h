#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_InventoryData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "BP_AddToInventoryRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddToInventoryRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    TArray<FBP_InventoryData> inventoryDatas;
};
