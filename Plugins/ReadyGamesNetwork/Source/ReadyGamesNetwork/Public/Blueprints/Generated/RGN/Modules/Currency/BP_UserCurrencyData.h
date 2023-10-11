#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_Currency.h"
#include "BP_UserCurrencyData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UserCurrencyData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_Currency> currencies;
};
