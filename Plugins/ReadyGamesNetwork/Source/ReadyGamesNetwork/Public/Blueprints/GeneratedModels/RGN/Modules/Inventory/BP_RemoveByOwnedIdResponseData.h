#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_RemoveByOwnedIdResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RemoveByOwnedIdResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    FString ownedItemId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Inventory")
    int32 newQuantity;
};
