#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_CurrencyProduct.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CurrencyProduct {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString id;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString currencyName;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    float price;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    int32 quantity;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString type;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString promotionalSticker;
};
