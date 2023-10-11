#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_LeaderboardReward.h"
#include "BP_LeaderboardData.generated.h"

/**
 * A class that represents a leaderboard on Ready Games Network.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LeaderboardData {
    GENERATED_BODY()

    /**
     * Unique id of the leaderboard
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString id;
    /**
     * Leaderboard request name. This value can be used to query leaderboards
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString requestName;
    /**
     * Leaderboard name
     * Is used also to store localization key for the name
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString name;
    /**
     * Leaderboard description
     * Is used also to store localization key for the description
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString description;
    /**
     * Define who can set/add score to the leaderboard
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString setBy;
    /**
     * Sorting direction:
     * false - places are sorted in descending order;
     * true - places are sorted in ascending order.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    bool invertSortOrder;
    /**
     * This parameter determines how many digits of the score integer are displayed
     * after the decimal point.
     * The size of the decimal part
     * e.g., with decimalOffset: 2, the number 1234 will be displayed as 12.34.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    int32 decimalOffset;
    /**
     * The leaderboard type that determines the results unit.Possible values:
     * numeric — Number.
     * time — Time in milliseconds.
     * Default value is numeric
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString type;
    /**
     * If it is provided, then it specifies reset period for the leaderboard
     * How often the leaderboard will reset specified by the cron string.
     * *    *    *    *    *    *
     * ┬    ┬    ┬    ┬    ┬    ┬
     * │    │    │    │    │    |
     * │    │    │    │    │    └ day of week(0 - 7, 1L - 7L) (0 or 7 is Sun)
     * │    │    │    │    └───── month(1 - 12)
     * │    │    │    └────────── day of month(1 - 31, L)
     * │    │    └─────────────── hour(0 - 23)
     * │    └──────────────────── minute(0 - 59)
     * └───────────────────────── second(0 - 59, optional)
     * You can use the https://crontab.guru/ to create cron settings
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString resetEveryTimeAtCron;
    /**
     * Rewards which will be earned at reset period
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FBP_LeaderboardReward> rewardsAtReset;
    /**
     * Date and time when the leaderboard was created
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    int64 createdAt;
    /**
     * Date and time when the leaderboard was last time updated
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    int64 updatedAt;
    /**
     * User Id who created the leaderboard
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString createdBy;
    /**
     * User Id who last time updated the leaderboard
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString updatedBy;
};
