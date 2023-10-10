#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_RGNCoinEconomyProduct.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RGNCoinEconomyProduct {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString uid;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    float priceInUSD;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    int32 quantity;
};
