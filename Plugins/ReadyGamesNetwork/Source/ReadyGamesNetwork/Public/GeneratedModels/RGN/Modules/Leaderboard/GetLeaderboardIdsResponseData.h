#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    struct GetLeaderboardIdsResponseData {
        vector<string> ids;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetLeaderboardIdsResponseData, ids)
    };
}}}