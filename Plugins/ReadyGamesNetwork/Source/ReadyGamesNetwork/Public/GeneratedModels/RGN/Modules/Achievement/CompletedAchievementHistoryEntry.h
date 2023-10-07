// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "AchievementReward.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
struct CompletedAchievementHistoryEntry {
    string id;
    int32_t valueToReach;
    vector<RGN::Modules::Achievement::AchievementReward> rewards;
    int64_t completeTime;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(CompletedAchievementHistoryEntry, id, valueToReach, rewards, completeTime)
};
}}}