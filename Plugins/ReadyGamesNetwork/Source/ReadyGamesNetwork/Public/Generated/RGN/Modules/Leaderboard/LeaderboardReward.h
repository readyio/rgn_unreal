#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * A class that represents a leaderboard reward on Ready Games Network.
     */
    struct LeaderboardReward {
        /**
         * The place from users will be earned
         */
        int32_t placeFrom = 0;
        /**
         * The place to users will be earned
         */
        int32_t placeTo = 0;
        /**
         * Specifies reward, achievement contains virtual items reward, currency reward, etc
         */
        string achievementId;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(LeaderboardReward, placeFrom, placeTo, achievementId)
    };
}}}