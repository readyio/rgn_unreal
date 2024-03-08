#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LeaderboardReset.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    struct GetLeaderboardResetResponseData {
        RGN::Modules::Leaderboard::LeaderboardReset reset;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetLeaderboardResetResponseData& nlohmann_json_t) {
            nlohmann_json_j["reset"] = nlohmann_json_t.reset;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetLeaderboardResetResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("reset")) {
                auto json_reset = nlohmann_json_j.at("reset");
                if (!json_reset.is_null()) {
                    json_reset.get_to(nlohmann_json_t.reset);
                }
            }
        }
    };
}}}