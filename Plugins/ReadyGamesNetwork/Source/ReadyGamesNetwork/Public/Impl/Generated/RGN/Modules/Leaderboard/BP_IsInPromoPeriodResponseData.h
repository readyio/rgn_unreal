#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/IsInPromoPeriodResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_IsInPromoPeriodResponseData.generated.h"

/**
 * Information about the leaderboard's promo period.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_IsInPromoPeriodResponseData {
    GENERATED_BODY()

    /**
     * Indicates whether the leaderboard is in promo period or not.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    bool isInPromoPeriod;
    /**
     * The start time of the leaderboard in milliseconds since midnight, January 1, 1970 UTC.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int64 leaderboardStartTime;
    /**
     * The start time of the promo period in milliseconds since midnight, January 1, 1970 UTC.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int64 promoPeriodStartTime;
    /**
     * The current server time in milliseconds since midnight, January 1, 1970 UTC.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int64 currentTime;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::IsInPromoPeriodResponseData& source, FBP_IsInPromoPeriodResponseData& target) {
        target.isInPromoPeriod = source.isInPromoPeriod;
        target.leaderboardStartTime = source.leaderboardStartTime;
        target.promoPeriodStartTime = source.promoPeriodStartTime;
        target.currentTime = source.currentTime;
	}

	static void ConvertToCoreModel(const FBP_IsInPromoPeriodResponseData& source, RGN::Modules::Leaderboard::IsInPromoPeriodResponseData& target) {
        target.isInPromoPeriod = source.isInPromoPeriod;
        target.leaderboardStartTime = source.leaderboardStartTime;
        target.promoPeriodStartTime = source.promoPeriodStartTime;
        target.currentTime = source.currentTime;
	}
};
