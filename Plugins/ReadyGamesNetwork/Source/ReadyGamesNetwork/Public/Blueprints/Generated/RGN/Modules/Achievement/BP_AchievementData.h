#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_AchievementReward.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "BP_AchievementData.generated.h"

/**
 * Represents achievement data from the backend
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_AchievementData : public FBP_BaseRequestData {
    GENERATED_BODY()

    /**
     * Achievement document id. To trigger an achievement the id is needed
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString id;
    /**
     * List of application ids where this achievement is used
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FString> appIds;
    /**
     * Achievement request name. This value can be used to query or trigger achievements
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString requestName;
    /**
     * Achievement name. This value can be null or empty
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString name;
    /**
     * Achievement description. This value can be null or empty
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString description;
    /**
     * Define who can trigger/claim the achievement
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString setBy;
    /**
     * Should the achievement be claim manually
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    bool isClaimable;
    /**
     * Value which should be reached to complete the achievement
     * Default is 1
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int32 valueToReach;
    /**
     * Achievement ids which should be completed before this achievement can be triggered
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FString> completedAchievementsToUnlock;
    /**
     * Can this achievement be applied multiple times to the same user account
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    bool repeatable;
    /**
     * If this is provided, the the trigger for this achievement will work no more
     * often that the specified cron string.
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
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString repeatNoMoreOftenThanCron;
    /**
     * Start time of the achievement, when it can be available for users
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int64 startTime;
    /**
     * End time of the achievement, when it becomes unavailable for users
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int64 endTime;
    /**
     * Define cron value when the achievement should reset. This parameter is used
     * to update the F:RGN.Modules.Achievement.AchievementData.startTime and F:RGN.Modules.Achievement.AchievementData.endTime values.
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
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString resetTimeLimitEvery;
    /**
     * Achievement rewards ids and quantity rewards to add to users when
     * the achievement is triggered
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    TArray<FBP_AchievementReward> rewards;
    /**
     * Time when the achievement was created
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int64 createdAt;
    /**
     * Time when the achievement was updated
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int64 updatedAt;
    /**
     * Creator user id
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString createdBy;
    /**
     * Updater user id
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString updatedBy;
};
