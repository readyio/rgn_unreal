#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "MatchmakingData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    struct GetMatchResponseData {
        RGN::Modules::Matchmaking::MatchmakingData match;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetMatchResponseData& nlohmann_json_t) {
            nlohmann_json_j["match"] = nlohmann_json_t.match;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetMatchResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("match")) {
                auto json_match = nlohmann_json_j.at("match");
                if (!json_match.is_null()) {
                    json_match.get_to(nlohmann_json_t.match);
                }
            }
        }
    };
}}}