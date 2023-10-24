#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Achievement/CompletedAchievementHistoryEntry.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementReward.h"
#include "BP_AchievementReward.h"
#include <string>
#include <vector>
#include <unordered_map>
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
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    FString id;
    /**
     * Value which should be reached to complete the achievement when
     * the achievement was triggered
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    int32 valueToReach;
    /**
     * Achievement rewards ids and quantity rewards to add to users when
     * the achievement is triggered
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_AchievementReward> rewards;
    /**
     * Time when the achievement triggered
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Achievement")
    int64 completeTime;

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::CompletedAchievementHistoryEntry& source, FBP_CompletedAchievementHistoryEntry& target) {
		target.id = FString(source.id.c_str());
		target.valueToReach = source.valueToReach;
		for (const auto& source_rewards_item : source.rewards) {
			FBP_AchievementReward b_source_rewards_item;
			FBP_AchievementReward::ConvertToUnrealModel(source_rewards_item, b_source_rewards_item);
			target.rewards.Add(b_source_rewards_item);
		}
		target.completeTime = source.completeTime;
	}

	static void ConvertToCoreModel(const FBP_CompletedAchievementHistoryEntry& source, RGN::Modules::Achievement::CompletedAchievementHistoryEntry& target) {
		target.id = string(TCHAR_TO_UTF8(*source.id));
		target.valueToReach = source.valueToReach;
		for (const auto& source_rewards_item : source.rewards) {
			RGN::Modules::Achievement::AchievementReward cpp_source_rewards_item;
			FBP_AchievementReward::ConvertToCoreModel(source_rewards_item, cpp_source_rewards_item);
			target.rewards.push_back(cpp_source_rewards_item);
		}
		target.completeTime = source.completeTime;
	}
};
