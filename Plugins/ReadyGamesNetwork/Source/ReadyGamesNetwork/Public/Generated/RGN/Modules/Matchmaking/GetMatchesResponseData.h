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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetMatchesResponseData, matches)
    };
}}}