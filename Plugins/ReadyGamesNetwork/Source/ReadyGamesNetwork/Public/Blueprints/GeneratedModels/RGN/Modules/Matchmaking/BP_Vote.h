#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_Vote.generated.h"

/**
 * Represents a vote in the matchmaking process.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_Vote {
    GENERATED_BODY()

    /**
     * Gets or sets the identifier of the voter.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FString voterId;
    /**
     * Gets or sets the identifier of the participant that the vote is for.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Matchmaking")
    FString participantId;
};
