#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_CurrencyOffer.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CurrencyOffer {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString productId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString offeredProductId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    double remainingTime;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    float offeringPrice;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString promotionalMessage;
};
