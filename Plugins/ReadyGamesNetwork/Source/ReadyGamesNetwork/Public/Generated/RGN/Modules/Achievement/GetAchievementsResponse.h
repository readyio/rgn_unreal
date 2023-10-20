#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "AchievementData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    struct GetAchievementsResponse {
        vector<RGN::Modules::Achievement::AchievementData> achievements;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetAchievementsResponse& nlohmann_json_t) {
            nlohmann_json_j["achievements"] = nlohmann_json_t.achievements;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetAchievementsResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("achievements")) {
                nlohmann_json_j.at("achievements").get_to(nlohmann_json_t.achievements);
            }
        }
    };
}}}