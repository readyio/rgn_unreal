#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_PurchaseItem.h"
#include "../Currency/BP_Currency.h"
#include "BP_BuyStoreOfferResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BuyStoreOfferResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString offerId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_PurchaseItem> purchasedItems;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_Currency> updatedCurrencies;
};
