#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "AchievementReward.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * Represents completed achievement history entry for a given achievement
     * This data is comming from the users data
     */
    struct CompletedAchievementHistoryEntry {
        /**
         * Achievement document id
         */
        string id;
        /**
         * Value which should be reached to complete the achievement when
         * the achievement was triggered
         */
        int32_t valueToReach = 0;
        /**
         * Achievement rewards ids and quantity rewards to add to users when
         * the achievement is triggered
         */
        vector<RGN::Modules::Achievement::AchievementReward> rewards;
        /**
         * Time when the achievement triggered
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t completeTime = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const CompletedAchievementHistoryEntry& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["valueToReach"] = nlohmann_json_t.valueToReach;
            nlohmann_json_j["rewards"] = nlohmann_json_t.rewards;
            nlohmann_json_j["completeTime"] = nlohmann_json_t.completeTime;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, CompletedAchievementHistoryEntry& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                auto json_id = nlohmann_json_j.at("id");
                if (!json_id.is_null() && json_id.is_string()) {
                    json_id.get_to(nlohmann_json_t.id);
                }
            }
            if (nlohmann_json_j.contains("valueToReach")) {
                auto json_valueToReach = nlohmann_json_j.at("valueToReach");
                if (!json_valueToReach.is_null() && json_valueToReach.is_number()) {
                    json_valueToReach.get_to(nlohmann_json_t.valueToReach);
                }
            }
            if (nlohmann_json_j.contains("rewards")) {
                auto json_rewards = nlohmann_json_j.at("rewards");
                if (!json_rewards.is_null() && json_rewards.is_array()) {
                    json_rewards.get_to(nlohmann_json_t.rewards);
                }
            }
            if (nlohmann_json_j.contains("completeTime")) {
                auto json_completeTime = nlohmann_json_j.at("completeTime");
                if (!json_completeTime.is_null() && json_completeTime.is_number()) {
                    json_completeTime.get_to(nlohmann_json_t.completeTime);
                }
            }
        }
    };
}}}