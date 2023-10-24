#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LeaderboardEntry.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    struct GetLeaderboardEntriesResponseData {
        vector<RGN::Modules::Leaderboard::LeaderboardEntry> entries;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetLeaderboardEntriesResponseData& nlohmann_json_t) {
            nlohmann_json_j["entries"] = nlohmann_json_t.entries;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetLeaderboardEntriesResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("entries")) {
                auto json_entries = nlohmann_json_j.at("entries");
                if (!json_entries.is_null() && json_entries.is_array()) {
                    json_entries.get_to(nlohmann_json_t.entries);
                }
            }
        }
    };
}}}