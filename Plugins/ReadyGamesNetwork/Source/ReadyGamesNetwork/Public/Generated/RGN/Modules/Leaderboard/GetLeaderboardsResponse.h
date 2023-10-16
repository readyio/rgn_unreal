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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetLeaderboardsResponse, Leaderboards)
    };
}}}