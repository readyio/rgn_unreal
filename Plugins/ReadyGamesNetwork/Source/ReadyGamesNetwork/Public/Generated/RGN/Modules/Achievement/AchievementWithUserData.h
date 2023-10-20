#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "UserAchievement.h"
#include "AchievementData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * Represents achievement data from the backend
     */
    struct AchievementWithUserData : public RGN::Modules::Achievement::AchievementData {
        RGN::Modules::Achievement::UserAchievement _userAchievement;

        friend void to_json(nlohmann::json& nlohmann_json_j, const AchievementWithUserData& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["requestName"] = nlohmann_json_t.requestName;
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["description"] = nlohmann_json_t.description;
            nlohmann_json_j["setBy"] = nlohmann_json_t.setBy;
            nlohmann_json_j["isClaimable"] = nlohmann_json_t.isClaimable;
            nlohmann_json_j["valueToReach"] = nlohmann_json_t.valueToReach;
            nlohmann_json_j["completedAchievementsToUnlock"] = nlohmann_json_t.completedAchievementsToUnlock;
            nlohmann_json_j["repeatable"] = nlohmann_json_t.repeatable;
            nlohmann_json_j["repeatNoMoreOftenThanCron"] = nlohmann_json_t.repeatNoMoreOftenThanCron;
            nlohmann_json_j["startTime"] = nlohmann_json_t.startTime;
            nlohmann_json_j["endTime"] = nlohmann_json_t.endTime;
            nlohmann_json_j["resetTimeLimitEvery"] = nlohmann_json_t.resetTimeLimitEvery;
            nlohmann_json_j["rewards"] = nlohmann_json_t.rewards;
            nlohmann_json_j["createdAt"] = nlohmann_json_t.createdAt;
            nlohmann_json_j["updatedAt"] = nlohmann_json_t.updatedAt;
            nlohmann_json_j["createdBy"] = nlohmann_json_t.createdBy;
            nlohmann_json_j["updatedBy"] = nlohmann_json_t.updatedBy;
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["_userAchievement"] = nlohmann_json_t._userAchievement;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, AchievementWithUserData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                nlohmann_json_j.at("id").get_to(nlohmann_json_t.id);
            }
            if (nlohmann_json_j.contains("appIds")) {
                nlohmann_json_j.at("appIds").get_to(nlohmann_json_t.appIds);
            }
            if (nlohmann_json_j.contains("requestName")) {
                nlohmann_json_j.at("requestName").get_to(nlohmann_json_t.requestName);
            }
            if (nlohmann_json_j.contains("name")) {
                nlohmann_json_j.at("name").get_to(nlohmann_json_t.name);
            }
            if (nlohmann_json_j.contains("description")) {
                nlohmann_json_j.at("description").get_to(nlohmann_json_t.description);
            }
            if (nlohmann_json_j.contains("setBy")) {
                nlohmann_json_j.at("setBy").get_to(nlohmann_json_t.setBy);
            }
            if (nlohmann_json_j.contains("isClaimable")) {
                nlohmann_json_j.at("isClaimable").get_to(nlohmann_json_t.isClaimable);
            }
            if (nlohmann_json_j.contains("valueToReach")) {
                nlohmann_json_j.at("valueToReach").get_to(nlohmann_json_t.valueToReach);
            }
            if (nlohmann_json_j.contains("completedAchievementsToUnlock")) {
                nlohmann_json_j.at("completedAchievementsToUnlock").get_to(nlohmann_json_t.completedAchievementsToUnlock);
            }
            if (nlohmann_json_j.contains("repeatable")) {
                nlohmann_json_j.at("repeatable").get_to(nlohmann_json_t.repeatable);
            }
            if (nlohmann_json_j.contains("repeatNoMoreOftenThanCron")) {
                nlohmann_json_j.at("repeatNoMoreOftenThanCron").get_to(nlohmann_json_t.repeatNoMoreOftenThanCron);
            }
            if (nlohmann_json_j.contains("startTime")) {
                nlohmann_json_j.at("startTime").get_to(nlohmann_json_t.startTime);
            }
            if (nlohmann_json_j.contains("endTime")) {
                nlohmann_json_j.at("endTime").get_to(nlohmann_json_t.endTime);
            }
            if (nlohmann_json_j.contains("resetTimeLimitEvery")) {
                nlohmann_json_j.at("resetTimeLimitEvery").get_to(nlohmann_json_t.resetTimeLimitEvery);
            }
            if (nlohmann_json_j.contains("rewards")) {
                nlohmann_json_j.at("rewards").get_to(nlohmann_json_t.rewards);
            }
            if (nlohmann_json_j.contains("createdAt")) {
                nlohmann_json_j.at("createdAt").get_to(nlohmann_json_t.createdAt);
            }
            if (nlohmann_json_j.contains("updatedAt")) {
                nlohmann_json_j.at("updatedAt").get_to(nlohmann_json_t.updatedAt);
            }
            if (nlohmann_json_j.contains("createdBy")) {
                nlohmann_json_j.at("createdBy").get_to(nlohmann_json_t.createdBy);
            }
            if (nlohmann_json_j.contains("updatedBy")) {
                nlohmann_json_j.at("updatedBy").get_to(nlohmann_json_t.updatedBy);
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("_userAchievement")) {
                nlohmann_json_j.at("_userAchievement").get_to(nlohmann_json_t._userAchievement);
            }
        }
    };
}}}