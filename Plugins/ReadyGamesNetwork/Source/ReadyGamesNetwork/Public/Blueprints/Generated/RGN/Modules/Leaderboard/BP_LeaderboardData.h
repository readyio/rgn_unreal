#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardData.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardReward.h"
#include "BP_LeaderboardReward.h"
#include "../../../../../Generated/RGN/Model/TimeInfo.h"
#include "../../Model/BP_TimeInfo.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/JoinRequirement.h"
#include "BP_JoinRequirement.h"
#include <string>
#include <vector>
#include <unordered_map>
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
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString id;
    /**
     * List of application ids where this leaderboard is used
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FString> appIds;
    /**
     * Leaderboard request name. This value can be used to query leaderboards
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString requestName;
    /**
     * Leaderboard name
     * Is used also to store localization key for the name
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString name;
    /**
     * Leaderboard description
     * Is used also to store localization key for the description
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString description;
    /**
     * Define who can set/add score to the leaderboard
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString setBy;
    /**
     * Sorting direction:
     * false - places are sorted in descending order;
     * true - places are sorted in ascending order.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    bool invertSortOrder;
    /**
     * This parameter determines how many digits of the score integer are displayed
     * after the decimal point.
     * The size of the decimal part
     * e.g., with decimalOffset: 2, the number 1234 will be displayed as 12.34.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int32 decimalOffset;
    /**
     * The leaderboard type that determines the results unit.Possible values:
     * numeric — Number.
     * time — Time in milliseconds.
     * Default value is numeric
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
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
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString resetEveryTimeAtCron;
    /**
     * Rewards which will be earned at reset period
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FBP_LeaderboardReward> rewardsAtReset;
    /**
     * Date and time when the leaderboard was created
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int64 createdAt;
    /**
     * Date and time when the leaderboard was last time updated
     * in milliseconds since midnight, January 1, 1970 UTC.
     * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    int64 updatedAt;
    /**
     * User Id who created the leaderboard
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString createdBy;
    /**
     * User Id who last time updated the leaderboard
     * This field is automatically populated by the backend
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FString updatedBy;
    /**
     * The time when the leaderboard is available
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    FBP_TimeInfo time;
    /**
     * Specifies if the user need to have a gamepass or virtual item to join the leaderboard
     * Join the leaderboard means to submit scores to the leaderboard
     * In case the user does not have the required item, the score change is ignored
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Leaderboard")
    TArray<FBP_JoinRequirement> requiredToJoin;

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::LeaderboardData& source, FBP_LeaderboardData& target) {
        target.id = FString(source.id.c_str());
        for (const auto& source_appIds_item : source.appIds) {
            FString b_source_appIds_item;
            b_source_appIds_item = FString(source_appIds_item.c_str());
            target.appIds.Add(b_source_appIds_item);
        }
        target.requestName = FString(source.requestName.c_str());
        target.name = FString(source.name.c_str());
        target.description = FString(source.description.c_str());
        target.setBy = FString(source.setBy.c_str());
        target.invertSortOrder = source.invertSortOrder;
        target.decimalOffset = source.decimalOffset;
        target.type = FString(source.type.c_str());
        target.resetEveryTimeAtCron = FString(source.resetEveryTimeAtCron.c_str());
        for (const auto& source_rewardsAtReset_item : source.rewardsAtReset) {
            FBP_LeaderboardReward b_source_rewardsAtReset_item;
            FBP_LeaderboardReward::ConvertToUnrealModel(source_rewardsAtReset_item, b_source_rewardsAtReset_item);
            target.rewardsAtReset.Add(b_source_rewardsAtReset_item);
        }
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        target.createdBy = FString(source.createdBy.c_str());
        target.updatedBy = FString(source.updatedBy.c_str());
        FBP_TimeInfo::ConvertToUnrealModel(source.time, target.time);
        for (const auto& source_requiredToJoin_item : source.requiredToJoin) {
            FBP_JoinRequirement b_source_requiredToJoin_item;
            FBP_JoinRequirement::ConvertToUnrealModel(source_requiredToJoin_item, b_source_requiredToJoin_item);
            target.requiredToJoin.Add(b_source_requiredToJoin_item);
        }
	}

	static void ConvertToCoreModel(const FBP_LeaderboardData& source, RGN::Modules::Leaderboard::LeaderboardData& target) {
        target.id = string(TCHAR_TO_UTF8(*source.id));
        for (const auto& source_appIds_item : source.appIds) {
            string cpp_source_appIds_item;
            cpp_source_appIds_item = string(TCHAR_TO_UTF8(*source_appIds_item));
            target.appIds.push_back(cpp_source_appIds_item);
        }
        target.requestName = string(TCHAR_TO_UTF8(*source.requestName));
        target.name = string(TCHAR_TO_UTF8(*source.name));
        target.description = string(TCHAR_TO_UTF8(*source.description));
        target.setBy = string(TCHAR_TO_UTF8(*source.setBy));
        target.invertSortOrder = source.invertSortOrder;
        target.decimalOffset = source.decimalOffset;
        target.type = string(TCHAR_TO_UTF8(*source.type));
        target.resetEveryTimeAtCron = string(TCHAR_TO_UTF8(*source.resetEveryTimeAtCron));
        for (const auto& source_rewardsAtReset_item : source.rewardsAtReset) {
            RGN::Modules::Leaderboard::LeaderboardReward cpp_source_rewardsAtReset_item;
            FBP_LeaderboardReward::ConvertToCoreModel(source_rewardsAtReset_item, cpp_source_rewardsAtReset_item);
            target.rewardsAtReset.push_back(cpp_source_rewardsAtReset_item);
        }
        target.createdAt = source.createdAt;
        target.updatedAt = source.updatedAt;
        target.createdBy = string(TCHAR_TO_UTF8(*source.createdBy));
        target.updatedBy = string(TCHAR_TO_UTF8(*source.updatedBy));
        FBP_TimeInfo::ConvertToCoreModel(source.time, target.time);
        for (const auto& source_requiredToJoin_item : source.requiredToJoin) {
            RGN::Modules::Leaderboard::JoinRequirement cpp_source_requiredToJoin_item;
            FBP_JoinRequirement::ConvertToCoreModel(source_requiredToJoin_item, cpp_source_requiredToJoin_item);
            target.requiredToJoin.push_back(cpp_source_requiredToJoin_item);
        }
	}
};
