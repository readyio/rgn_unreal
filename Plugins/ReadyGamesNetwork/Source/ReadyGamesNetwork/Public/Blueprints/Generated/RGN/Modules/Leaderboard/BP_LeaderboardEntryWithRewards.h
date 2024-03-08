#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardEntryWithRewards.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardReward.h"
#include "BP_LeaderboardReward.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardEntry.h"
#include "BP_LeaderboardEntry.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_LeaderboardEntryWithRewards.generated.h"

/**
 * A class that represents an entry in the leaderboard.
 * This class serves as a Data Transfer Object (DTO) that contains details about a user's entry in the leaderboard.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LeaderboardEntryWithRewards : public FBP_LeaderboardEntry {
    GENERATED_BODY()

    /**
     * List of rewards that the user failed to earn. This field is only present if the user failed to earn rewards.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FBP_LeaderboardReward> givenRewards;
    /**
     * List of rewards that the user earned. This field is only present if the user earned rewards.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FBP_LeaderboardReward> failedRewards;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::LeaderboardEntryWithRewards& source, FBP_LeaderboardEntryWithRewards& target) {
        for (const auto& source_givenRewards_item : source.givenRewards) {
            FBP_LeaderboardReward b_source_givenRewards_item;
            FBP_LeaderboardReward::ConvertToUnrealModel(source_givenRewards_item, b_source_givenRewards_item);
            target.givenRewards.Add(b_source_givenRewards_item);
        }
        for (const auto& source_failedRewards_item : source.failedRewards) {
            FBP_LeaderboardReward b_source_failedRewards_item;
            FBP_LeaderboardReward::ConvertToUnrealModel(source_failedRewards_item, b_source_failedRewards_item);
            target.failedRewards.Add(b_source_failedRewards_item);
        }
		FBP_LeaderboardEntry::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_LeaderboardEntryWithRewards& source, RGN::Modules::Leaderboard::LeaderboardEntryWithRewards& target) {
        for (const auto& source_givenRewards_item : source.givenRewards) {
            RGN::Modules::Leaderboard::LeaderboardReward cpp_source_givenRewards_item;
            FBP_LeaderboardReward::ConvertToCoreModel(source_givenRewards_item, cpp_source_givenRewards_item);
            target.givenRewards.push_back(cpp_source_givenRewards_item);
        }
        for (const auto& source_failedRewards_item : source.failedRewards) {
            RGN::Modules::Leaderboard::LeaderboardReward cpp_source_failedRewards_item;
            FBP_LeaderboardReward::ConvertToCoreModel(source_failedRewards_item, cpp_source_failedRewards_item);
            target.failedRewards.push_back(cpp_source_failedRewards_item);
        }
		FBP_LeaderboardEntry::ConvertToCoreModel(source, target);
	}
};
