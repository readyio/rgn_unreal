#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "AchievementWithUserData.h"
#include "UserAchievement.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    struct GetAchievementsWithUserDataResponse {
        vector<RGN::Modules::Achievement::AchievementWithUserData> achievements;
        vector<RGN::Modules::Achievement::UserAchievement> userAchievements;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetAchievementsWithUserDataResponse& nlohmann_json_t) {
            nlohmann_json_j["achievements"] = nlohmann_json_t.achievements;
            nlohmann_json_j["userAchievements"] = nlohmann_json_t.userAchievements;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetAchievementsWithUserDataResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("achievements")) {
                auto json_achievements = nlohmann_json_j.at("achievements");
                if (!json_achievements.is_null() && json_achievements.is_array()) {
                    json_achievements.get_to(nlohmann_json_t.achievements);
                }
            }
            if (nlohmann_json_j.contains("userAchievements")) {
                auto json_userAchievements = nlohmann_json_j.at("userAchievements");
                if (!json_userAchievements.is_null() && json_userAchievements.is_array()) {
                    json_userAchievements.get_to(nlohmann_json_t.userAchievements);
                }
            }
        }
    };
}}}