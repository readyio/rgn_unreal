#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementReward.h"
#include <string>
#include <vector>
#include <unordered_map>
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
     * Supported reward types are:
     * - `currency` - the reward is a quantity of currency coins.The `name` field is the name of the currency.
     * - `item_by_id` - the reward is a quantity of a virtual items.The `name` field is the id of the virtual item.
     * - `progression` - the reward is a quantity of progression.The `name` field is the id/name of the progression.
     * - `setLeaderboardScore` - the reward is a quantity of leaderboard score to set.The `name` field is the id of the
     * leaderboard.
     * - `addLeaderboardScore` - the reward is a quantity of leaderboard score to add.The `name` field is the id of the
     * leaderboard.
     * - `gamepass_by_id` - the reward is a quantity of game passes to add.The `name` field is the id of the game pass.
     * - `gamepass_by_request_name` - the reward is a quantity of game passes to add.The `name` field is the request name
     * of the game pass.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString type;
    /**
     * The list of application IDs for which this achievement reward is applicable. 
     * This allows rewards to be scoped to specific applications within a developer's portfolio.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    TArray<FString> appIds;
    /**
     * The name of the reward.
     * This could be the id of the virtual item, currency name, progression id, or leaderboard id.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString name;
    /**
     * The quantity of the reward that will be given to the user upon completing the achievement.
     * For "item_by_id" and "currency", it represents the number of items or coins rewarded.
     * For "progression", it represents the increment value for the user's progression.
     * For "setLeaderboardScore", it represents the score that will be set for the current user to the leaderboard
     * For "addLeaderboardScore", it represents the score that will be added for the current user to the leaderboard
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    int32 quantity;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::AchievementReward& source, FBP_AchievementReward& target) {
        target.type = FString(UTF8_TO_TCHAR(source.type.c_str()));
        for (const auto& source_appIds_item : source.appIds) {
            FString b_source_appIds_item;
            b_source_appIds_item = FString(UTF8_TO_TCHAR(source_appIds_item.c_str()));
            target.appIds.Add(b_source_appIds_item);
        }
        target.name = FString(UTF8_TO_TCHAR(source.name.c_str()));
        target.quantity = source.quantity;
	}

	static void ConvertToCoreModel(const FBP_AchievementReward& source, RGN::Modules::Achievement::AchievementReward& target) {
        target.type = string(TCHAR_TO_UTF8(*source.type));
        for (const auto& source_appIds_item : source.appIds) {
            string cpp_source_appIds_item;
            cpp_source_appIds_item = string(TCHAR_TO_UTF8(*source_appIds_item));
            target.appIds.push_back(cpp_source_appIds_item);
        }
        target.name = string(TCHAR_TO_UTF8(*source.name));
        target.quantity = source.quantity;
	}
};
