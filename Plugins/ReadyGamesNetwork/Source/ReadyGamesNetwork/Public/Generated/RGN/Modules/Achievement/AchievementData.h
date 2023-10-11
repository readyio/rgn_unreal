#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "AchievementReward.h"
#include "../../Model/Request/BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * Represents achievement data from the backend
     */
    struct AchievementData : public RGN::Model::Request::BaseRequestData {
        /**
         * Achievement document id. To trigger an achievement the id is needed
         */
        string id;
        /**
         * List of application ids where this achievement is used
         */
        vector<string> appIds;
        /**
         * Achievement request name. This value can be used to query or trigger achievements
         */
        string requestName;
        /**
         * Achievement name. This value can be null or empty
         */
        string name;
        /**
         * Achievement description. This value can be null or empty
         */
        string description;
        /**
         * Define who can trigger/claim the achievement
         */
        string setBy;
        /**
         * Should the achievement be claim manually
         */
        bool isClaimable = false;
        /**
         * Value which should be reached to complete the achievement
         * Default is 1
         */
        int32_t valueToReach = 0;
        /**
         * Achievement ids which should be completed before this achievement can be triggered
         */
        vector<string> completedAchievementsToUnlock;
        /**
         * Can this achievement be applied multiple times to the same user account
         */
        bool repeatable = false;
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
        string repeatNoMoreOftenThanCron;
        /**
         * Start time of the achievement, when it can be available for users
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         */
        int64_t startTime = 0;
        /**
         * End time of the achievement, when it becomes unavailable for users
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         */
        int64_t endTime = 0;
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
        string resetTimeLimitEvery;
        /**
         * Achievement rewards ids and quantity rewards to add to users when
         * the achievement is triggered
         */
        vector<RGN::Modules::Achievement::AchievementReward> rewards;
        /**
         * Time when the achievement was created
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t createdAt = 0;
        /**
         * Time when the achievement was updated
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t updatedAt = 0;
        /**
         * Creator user id
         * This field is automatically populated by the backend
         */
        string createdBy;
        /**
         * Updater user id
         * This field is automatically populated by the backend
         */
        string updatedBy;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(AchievementData, id, appIds, requestName, name, description, setBy, isClaimable, valueToReach, completedAchievementsToUnlock, repeatable, repeatNoMoreOftenThanCron, startTime, endTime, resetTimeLimitEvery, rewards, createdAt, updatedAt, createdBy, updatedBy)
    };
}}}