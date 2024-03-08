#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LeaderboardEntryWithRewards.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * A class that represents an reset history entry in the leaderboard.
     * This class serves as a Data Transfer Object (DTO) that contains details about a leaderboard reset data
     */
    struct LeaderboardReset {
        /**
         * Gets the unique identifier of the leaderboard reset id.
         */
        string id;
        /**
         * Date and time when the leaderboard will be reset in milliseconds since Jan 1, 1970 UTC.Automatically
         * populated by the backend.
         */
        int64_t resetAt = 0;
        int64_t rewardsGivenAt = 0;
        /**
         * The total count of given rewards.
         */
        int32_t totalGivenRewardsCount = 0;
        /**
         * List of leaderboard entries with the rewards information.
         */
        vector<RGN::Modules::Leaderboard::LeaderboardEntryWithRewards> entries;

        friend void to_json(nlohmann::json& nlohmann_json_j, const LeaderboardReset& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["resetAt"] = nlohmann_json_t.resetAt;
            nlohmann_json_j["rewardsGivenAt"] = nlohmann_json_t.rewardsGivenAt;
            nlohmann_json_j["totalGivenRewardsCount"] = nlohmann_json_t.totalGivenRewardsCount;
            nlohmann_json_j["entries"] = nlohmann_json_t.entries;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LeaderboardReset& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                auto json_id = nlohmann_json_j.at("id");
                if (!json_id.is_null() && json_id.is_string()) {
                    json_id.get_to(nlohmann_json_t.id);
                }
            }
            if (nlohmann_json_j.contains("resetAt")) {
                auto json_resetAt = nlohmann_json_j.at("resetAt");
                if (!json_resetAt.is_null() && json_resetAt.is_number()) {
                    json_resetAt.get_to(nlohmann_json_t.resetAt);
                }
            }
            if (nlohmann_json_j.contains("rewardsGivenAt")) {
                auto json_rewardsGivenAt = nlohmann_json_j.at("rewardsGivenAt");
                if (!json_rewardsGivenAt.is_null() && json_rewardsGivenAt.is_number()) {
                    json_rewardsGivenAt.get_to(nlohmann_json_t.rewardsGivenAt);
                }
            }
            if (nlohmann_json_j.contains("totalGivenRewardsCount")) {
                auto json_totalGivenRewardsCount = nlohmann_json_j.at("totalGivenRewardsCount");
                if (!json_totalGivenRewardsCount.is_null() && json_totalGivenRewardsCount.is_number()) {
                    json_totalGivenRewardsCount.get_to(nlohmann_json_t.totalGivenRewardsCount);
                }
            }
            if (nlohmann_json_j.contains("entries")) {
                auto json_entries = nlohmann_json_j.at("entries");
                if (!json_entries.is_null() && json_entries.is_array()) {
                    json_entries.get_to(nlohmann_json_t.entries);
                }
            }
        }
    };
}}}