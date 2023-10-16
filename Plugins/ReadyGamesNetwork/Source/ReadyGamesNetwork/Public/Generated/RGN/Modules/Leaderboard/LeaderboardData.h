#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LeaderboardReward.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * A class that represents a leaderboard on Ready Games Network.
     */
    struct LeaderboardData {
        /**
         * Unique id of the leaderboard
         */
        string id;
        /**
         * Leaderboard request name. This value can be used to query leaderboards
         */
        string requestName;
        /**
         * Leaderboard name
         * Is used also to store localization key for the name
         */
        string name;
        /**
         * Leaderboard description
         * Is used also to store localization key for the description
         */
        string description;
        /**
         * Define who can set/add score to the leaderboard
         */
        string setBy;
        /**
         * Sorting direction:
         * false - places are sorted in descending order;
         * true - places are sorted in ascending order.
         */
        bool invertSortOrder = false;
        /**
         * This parameter determines how many digits of the score integer are displayed
         * after the decimal point.
         * The size of the decimal part
         * e.g., with decimalOffset: 2, the number 1234 will be displayed as 12.34.
         */
        int32_t decimalOffset = 0;
        /**
         * The leaderboard type that determines the results unit.Possible values:
         * numeric — Number.
         * time — Time in milliseconds.
         * Default value is numeric
         */
        string type;
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
        string resetEveryTimeAtCron;
        /**
         * Rewards which will be earned at reset period
         */
        vector<RGN::Modules::Leaderboard::LeaderboardReward> rewardsAtReset;
        /**
         * Date and time when the leaderboard was created
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t createdAt = 0;
        /**
         * Date and time when the leaderboard was last time updated
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t updatedAt = 0;
        /**
         * User Id who created the leaderboard
         * This field is automatically populated by the backend
         */
        string createdBy;
        /**
         * User Id who last time updated the leaderboard
         * This field is automatically populated by the backend
         */
        string updatedBy;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(LeaderboardData, id, requestName, name, description, setBy, invertSortOrder, decimalOffset, type, resetEveryTimeAtCron, rewardsAtReset, createdAt, updatedAt, createdBy, updatedBy)
    };
}}}