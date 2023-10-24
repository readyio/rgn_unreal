#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "UserAchievement.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    struct GetUserAchievementsResponse {
        vector<RGN::Modules::Achievement::UserAchievement> userAchievements;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetUserAchievementsResponse& nlohmann_json_t) {
            nlohmann_json_j["userAchievements"] = nlohmann_json_t.userAchievements;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetUserAchievementsResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("userAchievements")) {
                auto json_userAchievements = nlohmann_json_j.at("userAchievements");
                if (!json_userAchievements.is_null() && json_userAchievements.is_array()) {
                    json_userAchievements.get_to(nlohmann_json_t.userAchievements);
                }
            }
        }
    };
}}}