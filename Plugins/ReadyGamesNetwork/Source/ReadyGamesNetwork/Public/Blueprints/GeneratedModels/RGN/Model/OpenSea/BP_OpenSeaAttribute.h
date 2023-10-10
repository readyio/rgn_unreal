#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_OpenSeaAttribute.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_OpenSeaAttribute {
    GENERATED_BODY()

    /**
     * Name of the trait
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | OpenSea")
    FString trait_type;
    /**
     * Value of the trait
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | OpenSea")
    FString value;
    /**
     * Indicating how you would like it to be displayed
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | OpenSea")
    FString display_type;
};
