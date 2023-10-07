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
        bool isClaimable = false;
        int32_t valueToReach = 0;
        vector<string> completedAchievementsToUnlock;
        bool repeatable = false;
        string repeatNoMoreOftenThanCron;
        int64_t startTime = 0;
        int64_t endTime = 0;
        string resetTimeLimitEvery;
        vector<RGN::Modules::Achievement::AchievementReward> rewards;
        int64_t createdAt = 0;
        int64_t updatedAt = 0;
        string createdBy;
        string updatedBy;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(AchievementData, id, appIds, requestName, name, description, setBy, isClaimable, valueToReach, completedAchievementsToUnlock, repeatable, repeatNoMoreOftenThanCron, startTime, endTime, resetTimeLimitEvery, rewards, createdAt, updatedAt, createdBy, updatedBy)
    };
}}}