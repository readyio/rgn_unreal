#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../Currency/BP_Currency.h"
#include "BP_CreatorSaleItem.h"
#include "BP_CreatorData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreatorData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    TArray<FBP_Currency> unclaimedCurrencies;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    TArray<FBP_CreatorSaleItem> creatorSaleItems;
};
