#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../Currency/BP_Currency.h"
#include "BP_CreatorSaleItem.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreatorSaleItem {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    FString id;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    FString name;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    int32 totalUnit;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    TArray<FBP_Currency> totalCurrencies;
};
