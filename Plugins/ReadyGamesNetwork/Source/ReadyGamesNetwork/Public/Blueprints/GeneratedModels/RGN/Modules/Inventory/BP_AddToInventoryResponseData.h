#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_AddToInventoryResponseData.generated.h"

/**
 * Response that return the new quantity of the item recently added
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AddToInventoryResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    FString id;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    int32 quantity;
};
