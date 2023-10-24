#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LeaderboardData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    struct GetLeaderboardsResponse {
        vector<RGN::Modules::Leaderboard::LeaderboardData> Leaderboards;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetLeaderboardsResponse& nlohmann_json_t) {
            nlohmann_json_j["Leaderboards"] = nlohmann_json_t.Leaderboards;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetLeaderboardsResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("Leaderboards")) {
                auto json_Leaderboards = nlohmann_json_j.at("Leaderboards");
                if (!json_Leaderboards.is_null() && json_Leaderboards.is_array()) {
                    json_Leaderboards.get_to(nlohmann_json_t.Leaderboards);
                }
            }
        }
    };
}}}