#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_AchievementReward.generated.h"

/**
 * This class represents the AchievementReward in the Ready Games Network (RGN) Unity SDK's AchievementsModule.
 * An AchievementReward is a generic type of reward that can be earned by the user upon completing an achievement.
 * This could be a Virtual Item, Currency Coins, Progression, or Leaderboard Score rewards depending on the `type`.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AchievementReward {
    GENERATED_BODY()

    /**
     * The type of reward this achievement offers. 
     * This could be "virtualItem", "currency", "progression", "setLeaderboardScore" or "addLeaderboardScore"
     * to match the different types of reward systems available.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString type;
    /**
     * The list of application IDs for which this achievement reward is applicable. 
     * This allows rewards to be scoped to specific applications within a developer's portfolio.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FString> appIds;
    /**
     * The name of the reward.
     * This could be the id of the virtual item, currency name, progression id, or leaderboard id.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString name;
    /**
     * The quantity of the reward that will be given to the user upon completing the achievement.
     * For "virtualItem" and "currency", it represents the number of items or coins rewarded.
     * For "progression", it represents the increment value for the user's progression.
     * For "setLeaderboardScore", it represents the score that will be set for the current user to the leaderboard
     * For "addLeaderboardScore", it represents the score that will be added for the current user to the leaderboard
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int32 quantity;
};
