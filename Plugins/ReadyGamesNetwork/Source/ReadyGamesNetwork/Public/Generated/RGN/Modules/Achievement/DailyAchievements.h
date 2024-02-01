#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * Daily achievements. Triggered when the user logs in.
     * Use the 'repeatNoMoreOftenThanCron' field to specify how often the achievement can give rewards.
     */
    struct DailyAchievements {
        /**
         * The number of consecutive days for the login achievement
         */
        int32_t daysInRow = 0;
        /**
         * The ID of the achievement to trigger
         */
        string achievementId;

        friend void to_json(nlohmann::json& nlohmann_json_j, const DailyAchievements& nlohmann_json_t) {
            nlohmann_json_j["daysInRow"] = nlohmann_json_t.daysInRow;
            nlohmann_json_j["achievementId"] = nlohmann_json_t.achievementId;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, DailyAchievements& nlohmann_json_t) {
            if (nlohmann_json_j.contains("daysInRow")) {
                auto json_daysInRow = nlohmann_json_j.at("daysInRow");
                if (!json_daysInRow.is_null() && json_daysInRow.is_number()) {
                    json_daysInRow.get_to(nlohmann_json_t.daysInRow);
                }
            }
            if (nlohmann_json_j.contains("achievementId")) {
                auto json_achievementId = nlohmann_json_j.at("achievementId");
                if (!json_achievementId.is_null() && json_achievementId.is_string()) {
                    json_achievementId.get_to(nlohmann_json_t.achievementId);
                }
            }
        }
    };
}}}