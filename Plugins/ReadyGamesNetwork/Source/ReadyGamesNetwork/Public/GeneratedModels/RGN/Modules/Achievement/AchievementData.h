// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "AchievementReward.h"
#include "../../Model/Request/BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
struct AchievementData : public RGN::Model::Request::BaseRequestData {
    string id;
    vector<string> appIds;
    string requestName;
    string name;
    string description;
    string setBy;
    bool isClaimable;
    int32_t valueToReach;
    vector<string> completedAchievementsToUnlock;
    bool repeatable;
    string repeatNoMoreOftenThanCron;
    int64_t startTime;
    int64_t endTime;
    string resetTimeLimitEvery;
    vector<RGN::Modules::Achievement::AchievementReward> rewards;
    int64_t createdAt;
    int64_t updatedAt;
    string createdBy;
    string updatedBy;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(AchievementData, id, appIds, requestName, name, description, setBy, isClaimable, valueToReach, completedAchievementsToUnlock, repeatable, repeatNoMoreOftenThanCron, startTime, endTime, resetTimeLimitEvery, rewards, createdAt, updatedAt, createdBy, updatedBy)
};
}}}