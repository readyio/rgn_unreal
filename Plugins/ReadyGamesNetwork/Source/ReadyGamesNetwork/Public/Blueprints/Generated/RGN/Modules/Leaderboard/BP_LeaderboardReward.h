#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardReward.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_LeaderboardReward.generated.h"

/**
 * A class that represents a leaderboard reward on Ready Games Network.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LeaderboardReward {
    GENERATED_BODY()

    /**
     * The place from users will be earned
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int32 placeFrom;
    /**
     * The place to users will be earned
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int32 placeTo;
    /**
     * Specifies reward, achievement contains virtual items reward, currency reward, etc
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString achievementId;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::LeaderboardReward& source, FBP_LeaderboardReward& target) {
        target.placeFrom = source.placeFrom;
        target.placeTo = source.placeTo;
        target.achievementId = FString(source.achievementId.c_str());
	}

	static void ConvertToCoreModel(const FBP_LeaderboardReward& source, RGN::Modules::Leaderboard::LeaderboardReward& target) {
        target.placeFrom = source.placeFrom;
        target.placeTo = source.placeTo;
        target.achievementId = string(TCHAR_TO_UTF8(*source.achievementId));
	}
};
