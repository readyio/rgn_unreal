#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_Properties.generated.h"

/**
 * Represents properties associated with a virtual item within the Ready Games Network (RGN).
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_Properties {
    GENERATED_BODY()

    /**
     * List of application identifiers where the properties are used.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    TArray<FString> appIds;
    /**
     * Game-specific properties in JSON format.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | VirtualItems")
    FString json;
};
