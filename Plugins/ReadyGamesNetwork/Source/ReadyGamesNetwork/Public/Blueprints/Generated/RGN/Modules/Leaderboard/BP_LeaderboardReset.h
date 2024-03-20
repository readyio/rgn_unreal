#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardReset.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardEntryWithRewards.h"
#include "BP_LeaderboardEntryWithRewards.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_LeaderboardReset.generated.h"

/**
 * A class that represents an reset history entry in the leaderboard.
 * This class serves as a Data Transfer Object (DTO) that contains details about a leaderboard reset data
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LeaderboardReset {
    GENERATED_BODY()

    /**
     * Gets the unique identifier of the leaderboard reset id.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString id;
    /**
     * Date and time when the leaderboard will be reset in milliseconds since Jan 1, 1970 UTC.Automatically
     * populated by the backend.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int64 resetAt;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int64 rewardsGivenAt;
    /**
     * The total count of given rewards.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int32 totalGivenRewardsCount;
    /**
     * List of leaderboard entries with the rewards information.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FBP_LeaderboardEntryWithRewards> entries;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::LeaderboardReset& source, FBP_LeaderboardReset& target) {
        target.id = FString(UTF8_TO_TCHAR(source.id.c_str()));
        target.resetAt = source.resetAt;
        target.rewardsGivenAt = source.rewardsGivenAt;
        target.totalGivenRewardsCount = source.totalGivenRewardsCount;
        for (const auto& source_entries_item : source.entries) {
            FBP_LeaderboardEntryWithRewards b_source_entries_item;
            FBP_LeaderboardEntryWithRewards::ConvertToUnrealModel(source_entries_item, b_source_entries_item);
            target.entries.Add(b_source_entries_item);
        }
	}

	static void ConvertToCoreModel(const FBP_LeaderboardReset& source, RGN::Modules::Leaderboard::LeaderboardReset& target) {
        target.id = string(TCHAR_TO_UTF8(*source.id));
        target.resetAt = source.resetAt;
        target.rewardsGivenAt = source.rewardsGivenAt;
        target.totalGivenRewardsCount = source.totalGivenRewardsCount;
        for (const auto& source_entries_item : source.entries) {
            RGN::Modules::Leaderboard::LeaderboardEntryWithRewards cpp_source_entries_item;
            FBP_LeaderboardEntryWithRewards::ConvertToCoreModel(source_entries_item, cpp_source_entries_item);
            target.entries.push_back(cpp_source_entries_item);
        }
	}
};
