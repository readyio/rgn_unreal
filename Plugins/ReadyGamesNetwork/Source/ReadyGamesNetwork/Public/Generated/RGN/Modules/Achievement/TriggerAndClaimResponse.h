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
     * This object is returned for the Trigger and Claim methods
     * In case the achievement gave the rewards the 
     * will be true. Otherwise it it false
     */
    struct TriggerAndClaimResponse {
        /**
         * When the rewards have been given to the user this is true
         * Otherwise it is false
         */
        bool rewardsHaveBeenGivenOut = false;
        /**
         * In case the rewards have been given to the user this will contain the rewards
         */
        vector<RGN::Modules::Achievement::AchievementReward> rewards;

        friend void to_json(nlohmann::json& nlohmann_json_j, const TriggerAndClaimResponse& nlohmann_json_t) {
            nlohmann_json_j["rewardsHaveBeenGivenOut"] = nlohmann_json_t.rewardsHaveBeenGivenOut;
            nlohmann_json_j["rewards"] = nlohmann_json_t.rewards;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, TriggerAndClaimResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("rewardsHaveBeenGivenOut")) {
                nlohmann_json_j.at("rewardsHaveBeenGivenOut").get_to(nlohmann_json_t.rewardsHaveBeenGivenOut);
            }
            if (nlohmann_json_j.contains("rewards")) {
                nlohmann_json_j.at("rewards").get_to(nlohmann_json_t.rewards);
            }
        }
    };
}}}