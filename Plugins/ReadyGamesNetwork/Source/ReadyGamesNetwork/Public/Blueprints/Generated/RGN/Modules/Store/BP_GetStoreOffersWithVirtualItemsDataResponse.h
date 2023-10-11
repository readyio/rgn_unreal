#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_StoreOffer.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include "BP_GetStoreOffersWithVirtualItemsDataResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetStoreOffersWithVirtualItemsDataResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_StoreOffer> offers;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_VirtualItem> virtualItems;
};
