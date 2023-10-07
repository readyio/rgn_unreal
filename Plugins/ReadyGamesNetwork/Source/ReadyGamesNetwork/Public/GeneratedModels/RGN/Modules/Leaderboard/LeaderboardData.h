// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "LeaderboardReward.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
struct LeaderboardData {
    string id;
    string requestName;
    string name;
    string description;
    string setBy;
    bool invertSortOrder;
    int32_t decimalOffset;
    string type;
    string resetEveryTimeAtCron;
    vector<RGN::Modules::Leaderboard::LeaderboardReward> rewardsAtReset;
    int64_t createdAt;
    int64_t updatedAt;
    string createdBy;
    string updatedBy;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(LeaderboardData, id, requestName, name, description, setBy, invertSortOrder, decimalOffset, type, resetEveryTimeAtCron, rewardsAtReset, createdAt, updatedAt, createdBy, updatedBy)
};
}}}