#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/GetLeaderboardEntriesResponseData.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardEntry.h"
#include "BP_LeaderboardEntry.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetLeaderboardEntriesResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetLeaderboardEntriesResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FBP_LeaderboardEntry> entries;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::GetLeaderboardEntriesResponseData& source, FBP_GetLeaderboardEntriesResponseData& target) {
        for (const auto& source_entries_item : source.entries) {
            FBP_LeaderboardEntry b_source_entries_item;
            FBP_LeaderboardEntry::ConvertToUnrealModel(source_entries_item, b_source_entries_item);
            target.entries.Add(b_source_entries_item);
        }
	}

	static void ConvertToCoreModel(const FBP_GetLeaderboardEntriesResponseData& source, RGN::Modules::Leaderboard::GetLeaderboardEntriesResponseData& target) {
        for (const auto& source_entries_item : source.entries) {
            RGN::Modules::Leaderboard::LeaderboardEntry cpp_source_entries_item;
            FBP_LeaderboardEntry::ConvertToCoreModel(source_entries_item, cpp_source_entries_item);
            target.entries.push_back(cpp_source_entries_item);
        }
	}
};
