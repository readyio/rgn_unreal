#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_Currency.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_Currency {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    TArray<FString> appIds;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    FString name;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Currency")
    int32 quantity;
};
