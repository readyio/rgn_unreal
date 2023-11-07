#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/GetLeaderboardsResponse.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardData.h"
#include "BP_LeaderboardData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetLeaderboardsResponse.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetLeaderboardsResponse {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FBP_LeaderboardData> leaderboards;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::GetLeaderboardsResponse& source, FBP_GetLeaderboardsResponse& target) {
        for (const auto& source_leaderboards_item : source.leaderboards) {
            FBP_LeaderboardData b_source_leaderboards_item;
            FBP_LeaderboardData::ConvertToUnrealModel(source_leaderboards_item, b_source_leaderboards_item);
            target.leaderboards.Add(b_source_leaderboards_item);
        }
	}

	static void ConvertToCoreModel(const FBP_GetLeaderboardsResponse& source, RGN::Modules::Leaderboard::GetLeaderboardsResponse& target) {
        for (const auto& source_leaderboards_item : source.leaderboards) {
            RGN::Modules::Leaderboard::LeaderboardData cpp_source_leaderboards_item;
            FBP_LeaderboardData::ConvertToCoreModel(source_leaderboards_item, cpp_source_leaderboards_item);
            target.leaderboards.push_back(cpp_source_leaderboards_item);
        }
	}
};
