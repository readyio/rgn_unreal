#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/GetLeaderboardResetResponseData.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardReset.h"
#include "BP_LeaderboardReset.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_GetLeaderboardResetResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetLeaderboardResetResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FBP_LeaderboardReset reset;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::GetLeaderboardResetResponseData& source, FBP_GetLeaderboardResetResponseData& target) {
        FBP_LeaderboardReset::ConvertToUnrealModel(source.reset, target.reset);
	}

	static void ConvertToCoreModel(const FBP_GetLeaderboardResetResponseData& source, RGN::Modules::Leaderboard::GetLeaderboardResetResponseData& target) {
        FBP_LeaderboardReset::ConvertToCoreModel(source.reset, target.reset);
	}
};
