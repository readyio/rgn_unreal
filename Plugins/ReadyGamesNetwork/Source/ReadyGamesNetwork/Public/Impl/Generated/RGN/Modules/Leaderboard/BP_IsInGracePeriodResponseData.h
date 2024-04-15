#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/IsInGracePeriodResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_IsInGracePeriodResponseData.generated.h"

/**
 * Information about the leaderboard's grace period.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_IsInGracePeriodResponseData {
    GENERATED_BODY()

    /**
     * Indicates whether the leaderboard is in grace period or not.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    bool isInGracePeriod;
    /**
     * The end time of the leaderboard in milliseconds since midnight, January 1, 1970 UTC.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int64 leaderboardEndTime;
    /**
     * The end time of the grace period in milliseconds since midnight, January 1, 1970 UTC.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int64 gracePeriodEndTime;
    /**
     * The current server time in milliseconds since midnight, January 1, 1970 UTC.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int64 currentTime;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::IsInGracePeriodResponseData& source, FBP_IsInGracePeriodResponseData& target) {
        target.isInGracePeriod = source.isInGracePeriod;
        target.leaderboardEndTime = source.leaderboardEndTime;
        target.gracePeriodEndTime = source.gracePeriodEndTime;
        target.currentTime = source.currentTime;
	}

	static void ConvertToCoreModel(const FBP_IsInGracePeriodResponseData& source, RGN::Modules::Leaderboard::IsInGracePeriodResponseData& target) {
        target.isInGracePeriod = source.isInGracePeriod;
        target.leaderboardEndTime = source.leaderboardEndTime;
        target.gracePeriodEndTime = source.gracePeriodEndTime;
        target.currentTime = source.currentTime;
	}
};
