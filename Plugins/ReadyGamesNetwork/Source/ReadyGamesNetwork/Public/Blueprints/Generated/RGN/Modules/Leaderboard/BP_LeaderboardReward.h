#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
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
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    int32 placeFrom;
    /**
     * The place to users will be earned
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    int32 placeTo;
    /**
     * Specifies reward, achievement contains virtual items reward, currency reward, etc
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString achievementId;
};
