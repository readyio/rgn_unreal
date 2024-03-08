#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/GetLeaderboardResetsResponseData.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardReset.h"
#include "BP_LeaderboardReset.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetLeaderboardResetsResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetLeaderboardResetsResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FBP_LeaderboardReset> resets;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::GetLeaderboardResetsResponseData& source, FBP_GetLeaderboardResetsResponseData& target) {
        for (const auto& source_resets_item : source.resets) {
            FBP_LeaderboardReset b_source_resets_item;
            FBP_LeaderboardReset::ConvertToUnrealModel(source_resets_item, b_source_resets_item);
            target.resets.Add(b_source_resets_item);
        }
	}

	static void ConvertToCoreModel(const FBP_GetLeaderboardResetsResponseData& source, RGN::Modules::Leaderboard::GetLeaderboardResetsResponseData& target) {
        for (const auto& source_resets_item : source.resets) {
            RGN::Modules::Leaderboard::LeaderboardReset cpp_source_resets_item;
            FBP_LeaderboardReset::ConvertToCoreModel(source_resets_item, cpp_source_resets_item);
            target.resets.push_back(cpp_source_resets_item);
        }
	}
};
