// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    struct LeaderboardReward {
        int32_t placeFrom = 0;
        int32_t placeTo = 0;
        string achievementId;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(LeaderboardReward, placeFrom, placeTo, achievementId)
    };
}}}