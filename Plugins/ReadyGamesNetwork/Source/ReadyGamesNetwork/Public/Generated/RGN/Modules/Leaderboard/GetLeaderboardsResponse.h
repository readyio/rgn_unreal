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
        vector<RGN::Modules::Leaderboard::LeaderboardData> leaderboards;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetLeaderboardsResponse& nlohmann_json_t) {
            nlohmann_json_j["leaderboards"] = nlohmann_json_t.leaderboards;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetLeaderboardsResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("leaderboards")) {
                auto json_leaderboards = nlohmann_json_j.at("leaderboards");
                if (!json_leaderboards.is_null() && json_leaderboards.is_array()) {
                    json_leaderboards.get_to(nlohmann_json_t.leaderboards);
                }
            }
        }
    };
}}}