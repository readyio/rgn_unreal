#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_LootboxIsAvailableResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LootboxIsAvailableResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    bool isAvailable;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Store")
    int64 count;
};
