#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_AchievementReward.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Modules/Achievement/TriggerAndClaimResponse.h"
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

	static void ConvertToUnrealModel(const RGN::Modules::Achievement::TriggerAndClaimResponse& source, FBP_TriggerAndClaimResponse& target) {
		target.rewardsHaveBeenGivenOut = source.rewardsHaveBeenGivenOut;
		for (const auto& source_rewards_item : source.rewards) {
			FBP_AchievementReward b_source_rewards_item;
			FBP_AchievementReward::ConvertToUnrealModel(source_rewards_item, b_source_rewards_item);
			target.rewards.Add(b_source_rewards_item);
		}
	}

	static void ConvertToCoreModel(const FBP_TriggerAndClaimResponse& source, RGN::Modules::Achievement::TriggerAndClaimResponse& target) {
		target.rewardsHaveBeenGivenOut = source.rewardsHaveBeenGivenOut;
		for (const auto& source_rewards_item : source.rewards) {
			RGN::Modules::Achievement::AchievementReward cpp_source_rewards_item;
			FBP_AchievementReward::ConvertToCoreModel(source_rewards_item, cpp_source_rewards_item);
			target.rewards.push_back(cpp_source_rewards_item);
		}
	}
};
