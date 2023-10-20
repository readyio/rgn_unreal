#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Matchmaking {
    struct StartMatchResponseData {
        string matchId;

        friend void to_json(nlohmann::json& nlohmann_json_j, const StartMatchResponseData& nlohmann_json_t) {
            nlohmann_json_j["matchId"] = nlohmann_json_t.matchId;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, StartMatchResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("matchId")) {
                nlohmann_json_j.at("matchId").get_to(nlohmann_json_t.matchId);
            }
        }
    };
}}}