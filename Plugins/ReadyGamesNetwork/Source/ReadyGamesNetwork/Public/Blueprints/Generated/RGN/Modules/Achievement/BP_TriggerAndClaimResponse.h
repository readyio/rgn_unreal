#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_AchievementReward.h"
#include "BP_TriggerAndClaimResponse.generated.h"

/**
 * This object is returned for the Trigger and Claim methods
 * In case the achievement gave the rewards the 
 * will be true. Otherwise it it false
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_TriggerAndClaimResponse {
    GENERATED_BODY()

    /**
     * When the rewards have been given to the user this is true
     * Otherwise it is false
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    bool rewardsHaveBeenGivenOut;
    /**
     * In case the rewards have been given to the user this will contain the rewards
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_AchievementReward> rewards;
};
