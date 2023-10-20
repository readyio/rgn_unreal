#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    struct GetLeaderboardIdsResponseData {
        vector<string> ids;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetLeaderboardIdsResponseData& nlohmann_json_t) {
            nlohmann_json_j["ids"] = nlohmann_json_t.ids;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetLeaderboardIdsResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("ids")) {
                nlohmann_json_j.at("ids").get_to(nlohmann_json_t.ids);
            }
        }
    };
}}}