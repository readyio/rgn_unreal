#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../Inventory/BP_InventoryItemData.h"
#include "../Currency/BP_Currency.h"
#include "BP_PurchaseResult.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_PurchaseResult {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString offerId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_InventoryItemData> items;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_Currency> updatedCurrencies;
};
