#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../VirtualItems/BP_PriceInfo.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "BP_SetPricesRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_SetPricesRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    FString offerId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    TArray<FBP_PriceInfo> prices;
};
