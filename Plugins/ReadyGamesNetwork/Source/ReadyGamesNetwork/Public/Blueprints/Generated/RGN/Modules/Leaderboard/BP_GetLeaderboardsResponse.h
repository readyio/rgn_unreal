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
    TArray<FBP_LeaderboardData> Leaderboards;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::GetLeaderboardsResponse& source, FBP_GetLeaderboardsResponse& target) {
        for (const auto& source_Leaderboards_item : source.Leaderboards) {
            FBP_LeaderboardData b_source_Leaderboards_item;
            FBP_LeaderboardData::ConvertToUnrealModel(source_Leaderboards_item, b_source_Leaderboards_item);
            target.Leaderboards.Add(b_source_Leaderboards_item);
        }
	}

	static void ConvertToCoreModel(const FBP_GetLeaderboardsResponse& source, RGN::Modules::Leaderboard::GetLeaderboardsResponse& target) {
        for (const auto& source_Leaderboards_item : source.Leaderboards) {
            RGN::Modules::Leaderboard::LeaderboardData cpp_source_Leaderboards_item;
            FBP_LeaderboardData::ConvertToCoreModel(source_Leaderboards_item, cpp_source_Leaderboards_item);
            target.Leaderboards.push_back(cpp_source_Leaderboards_item);
        }
	}
};
