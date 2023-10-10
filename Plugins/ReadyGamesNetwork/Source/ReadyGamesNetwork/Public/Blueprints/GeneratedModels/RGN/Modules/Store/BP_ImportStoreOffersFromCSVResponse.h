#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_StoreOffer.h"
#include "BP_ImportStoreOffersFromCSVResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_ImportStoreOffersFromCSVResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_StoreOffer> offers;
};
