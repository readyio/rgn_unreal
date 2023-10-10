#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_VirtualItemUpgrade.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_VirtualItemUpgrade {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    FString upgradeId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    int32 upgradeLevel;
};
