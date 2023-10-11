#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_AchievementReward.h"
#include "BP_CompletedAchievementHistoryEntry.generated.h"

/**
 * Represents completed achievement history entry for a given achievement
 * This data is comming from the users data
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CompletedAchievementHistoryEntry {
    GENERATED_BODY()

    /**
     * Achievement document id
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString id;
    /**
     * Value which should be reached to complete the achievement when
     * the achievement was triggered
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int32 valueToReach;
    /**
     * Achievement rewards ids and quantity rewards to add to users when
     * the achievement is triggered
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_AchievementReward> rewards;
    /**
     * Time when the achievement triggered
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int64 completeTime;
};
