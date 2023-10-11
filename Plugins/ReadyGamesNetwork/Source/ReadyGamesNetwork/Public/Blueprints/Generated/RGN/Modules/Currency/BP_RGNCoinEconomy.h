#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_RGNCoinEconomyProduct.h"
#include "BP_RGNCoinEconomy.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RGNCoinEconomy {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    TArray<FBP_RGNCoinEconomyProduct> products;
};
