#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * Information about the leaderboard's grace period.
     */
    struct IsInGracePeriodResponseData {
        /**
         * Indicates whether the leaderboard is in grace period or not.
         */
        bool isInGracePeriod = false;
        /**
         * The end time of the leaderboard in milliseconds since midnight, January 1, 1970 UTC.
         */
        int64_t leaderboardEndTime = 0;
        /**
         * The end time of the grace period in milliseconds since midnight, January 1, 1970 UTC.
         */
        int64_t gracePeriodEndTime = 0;
        /**
         * The current server time in milliseconds since midnight, January 1, 1970 UTC.
         */
        int64_t currentTime = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const IsInGracePeriodResponseData& nlohmann_json_t) {
            nlohmann_json_j["isInGracePeriod"] = nlohmann_json_t.isInGracePeriod;
            nlohmann_json_j["leaderboardEndTime"] = nlohmann_json_t.leaderboardEndTime;
            nlohmann_json_j["gracePeriodEndTime"] = nlohmann_json_t.gracePeriodEndTime;
            nlohmann_json_j["currentTime"] = nlohmann_json_t.currentTime;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, IsInGracePeriodResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("isInGracePeriod")) {
                auto json_isInGracePeriod = nlohmann_json_j.at("isInGracePeriod");
                if (!json_isInGracePeriod.is_null() && json_isInGracePeriod.is_boolean()) {
                    json_isInGracePeriod.get_to(nlohmann_json_t.isInGracePeriod);
                }
            }
            if (nlohmann_json_j.contains("leaderboardEndTime")) {
                auto json_leaderboardEndTime = nlohmann_json_j.at("leaderboardEndTime");
                if (!json_leaderboardEndTime.is_null() && json_leaderboardEndTime.is_number()) {
                    json_leaderboardEndTime.get_to(nlohmann_json_t.leaderboardEndTime);
                }
            }
            if (nlohmann_json_j.contains("gracePeriodEndTime")) {
                auto json_gracePeriodEndTime = nlohmann_json_j.at("gracePeriodEndTime");
                if (!json_gracePeriodEndTime.is_null() && json_gracePeriodEndTime.is_number()) {
                    json_gracePeriodEndTime.get_to(nlohmann_json_t.gracePeriodEndTime);
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