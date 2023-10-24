#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "MatchmakingData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    struct GetMatchesResponseData {
        vector<RGN::Modules::Matchmaking::MatchmakingData> matches;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetMatchesResponseData& nlohmann_json_t) {
            nlohmann_json_j["matches"] = nlohmann_json_t.matches;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetMatchesResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("matches")) {
                auto json_matches = nlohmann_json_j.at("matches");
                if (!json_matches.is_null() && json_matches.is_array()) {
                    json_matches.get_to(nlohmann_json_t.matches);
                }
            }
        }
    };
}}}