#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * Information about the leaderboard's promo period.
     */
    struct IsInPromoPeriodResponseData {
        /**
         * Indicates whether the leaderboard is in promo period or not.
         */
        bool isInPromoPeriod = false;
        /**
         * The start time of the leaderboard in milliseconds since midnight, January 1, 1970 UTC.
         */
        int64_t leaderboardStartTime = 0;
        /**
         * The start time of the promo period in milliseconds since midnight, January 1, 1970 UTC.
         */
        int64_t promoPeriodStartTime = 0;
        /**
         * The current server time in milliseconds since midnight, January 1, 1970 UTC.
         */
        int64_t currentTime = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const IsInPromoPeriodResponseData& nlohmann_json_t) {
            nlohmann_json_j["isInPromoPeriod"] = nlohmann_json_t.isInPromoPeriod;
            nlohmann_json_j["leaderboardStartTime"] = nlohmann_json_t.leaderboardStartTime;
            nlohmann_json_j["promoPeriodStartTime"] = nlohmann_json_t.promoPeriodStartTime;
            nlohmann_json_j["currentTime"] = nlohmann_json_t.currentTime;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, IsInPromoPeriodResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("isInPromoPeriod")) {
                auto json_isInPromoPeriod = nlohmann_json_j.at("isInPromoPeriod");
                if (!json_isInPromoPeriod.is_null() && json_isInPromoPeriod.is_boolean()) {
                    json_isInPromoPeriod.get_to(nlohmann_json_t.isInPromoPeriod);
                }
            }
            if (nlohmann_json_j.contains("leaderboardStartTime")) {
                auto json_leaderboardStartTime = nlohmann_json_j.at("leaderboardStartTime");
                if (!json_leaderboardStartTime.is_null() && json_leaderboardStartTime.is_number()) {
                    json_leaderboardStartTime.get_to(nlohmann_json_t.leaderboardStartTime);
                }
            }
            if (nlohmann_json_j.contains("promoPeriodStartTime")) {
                auto json_promoPeriodStartTime = nlohmann_json_j.at("promoPeriodStartTime");
                if (!json_promoPeriodStartTime.is_null() && json_promoPeriodStartTime.is_number()) {
                    json_promoPeriodStartTime.get_to(nlohmann_json_t.promoPeriodStartTime);
                }
            }
            if (nlohmann_json_j.contains("currentTime")) {
                auto json_currentTime = nlohmann_json_j.at("currentTime");
                if (!json_currentTime.is_null() && json_currentTime.is_number()) {
                    json_currentTime.get_to(nlohmann_json_t.currentTime);
                }
            }
        }
    };
}}}