// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LeaderboardEntry.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
struct GetLeaderboardEntriesResponseData {
    vector<RGN::Modules::Leaderboard::LeaderboardEntry> entries;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetLeaderboardEntriesResponseData, entries)
};
}}}