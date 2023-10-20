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

        friend void to_json(nlohmann::json& nlohmann_json_j, const LeaderboardData& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["requestName"] = nlohmann_json_t.requestName;
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["description"] = nlohmann_json_t.description;
            nlohmann_json_j["setBy"] = nlohmann_json_t.setBy;
            nlohmann_json_j["invertSortOrder"] = nlohmann_json_t.invertSortOrder;
            nlohmann_json_j["decimalOffset"] = nlohmann_json_t.decimalOffset;
            nlohmann_json_j["type"] = nlohmann_json_t.type;
            nlohmann_json_j["resetEveryTimeAtCron"] = nlohmann_json_t.resetEveryTimeAtCron;
            nlohmann_json_j["rewardsAtReset"] = nlohmann_json_t.rewardsAtReset;
            nlohmann_json_j["createdAt"] = nlohmann_json_t.createdAt;
            nlohmann_json_j["updatedAt"] = nlohmann_json_t.updatedAt;
            nlohmann_json_j["createdBy"] = nlohmann_json_t.createdBy;
            nlohmann_json_j["updatedBy"] = nlohmann_json_t.updatedBy;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LeaderboardData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                nlohmann_json_j.at("id").get_to(nlohmann_json_t.id);
            }
            if (nlohmann_json_j.contains("requestName")) {
                nlohmann_json_j.at("requestName").get_to(nlohmann_json_t.requestName);
            }
            if (nlohmann_json_j.contains("name")) {
                nlohmann_json_j.at("name").get_to(nlohmann_json_t.name);
            }
            if (nlohmann_json_j.contains("description")) {
                nlohmann_json_j.at("description").get_to(nlohmann_json_t.description);
            }
            if (nlohmann_json_j.contains("setBy")) {
                nlohmann_json_j.at("setBy").get_to(nlohmann_json_t.setBy);
            }
            if (nlohmann_json_j.contains("invertSortOrder")) {
                nlohmann_json_j.at("invertSortOrder").get_to(nlohmann_json_t.invertSortOrder);
            }
            if (nlohmann_json_j.contains("decimalOffset")) {
                nlohmann_json_j.at("decimalOffset").get_to(nlohmann_json_t.decimalOffset);
            }
            if (nlohmann_json_j.contains("type")) {
                nlohmann_json_j.at("type").get_to(nlohmann_json_t.type);
            }
            if (nlohmann_json_j.contains("resetEveryTimeAtCron")) {
                nlohmann_json_j.at("resetEveryTimeAtCron").get_to(nlohmann_json_t.resetEveryTimeAtCron);
            }
            if (nlohmann_json_j.contains("rewardsAtReset")) {
                nlohmann_json_j.at("rewardsAtReset").get_to(nlohmann_json_t.rewardsAtReset);
            }
            if (nlohmann_json_j.contains("createdAt")) {
                nlohmann_json_j.at("createdAt").get_to(nlohmann_json_t.createdAt);
            }
            if (nlohmann_json_j.contains("updatedAt")) {
                nlohmann_json_j.at("updatedAt").get_to(nlohmann_json_t.updatedAt);
            }
            if (nlohmann_json_j.contains("createdBy")) {
                nlohmann_json_j.at("createdBy").get_to(nlohmann_json_t.createdBy);
            }
            if (nlohmann_json_j.contains("updatedBy")) {
                nlohmann_json_j.at("updatedBy").get_to(nlohmann_json_t.updatedBy);
            }
        }
    };
}}}