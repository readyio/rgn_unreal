#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LeaderboardReset.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    struct GetLeaderboardResetsResponseData {
        vector<RGN::Modules::Leaderboard::LeaderboardReset> resets;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetLeaderboardResetsResponseData& nlohmann_json_t) {
            nlohmann_json_j["resets"] = nlohmann_json_t.resets;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetLeaderboardResetsResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("resets")) {
                auto json_resets = nlohmann_json_j.at("resets");
                if (!json_resets.is_null() && json_resets.is_array()) {
                    json_resets.get_to(nlohmann_json_t.resets);
                }
            }
        }
    };
}}}