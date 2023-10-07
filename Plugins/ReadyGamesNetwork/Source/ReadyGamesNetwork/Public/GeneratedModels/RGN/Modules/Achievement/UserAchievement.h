// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "CompletedAchievementHistoryEntry.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
struct UserAchievement {
    string id;
    int32_t value;
    int32_t valueToReach;
    bool isCompleted;
    bool isClaimed;
    int64_t lastCompleteTime;
    vector<RGN::Modules::Achievement::CompletedAchievementHistoryEntry> history;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(UserAchievement, id, value, valueToReach, isCompleted, isClaimed, lastCompleteTime, history)
};
}}}