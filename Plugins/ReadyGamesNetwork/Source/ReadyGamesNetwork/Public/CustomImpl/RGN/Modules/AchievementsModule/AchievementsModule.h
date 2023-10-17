#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/Achievement/AchievementsModule.h"
#include "../../../../Generated/RGN/Modules/Achievement/GetAchievementsWithUserDataResponse.h"
#include <string>
#include <algorithm>

namespace RGN { namespace Modules { namespace Achievement {
    class AchievementsModuleCustomImpl {
    public:
        static void GetByAppIdsWithUserDataAsync(
            std::vector<string> appIds,
            int32_t limit,
            std::string startAfter,
            bool withHistory,
            const std::function<void(std::vector<RGN::Modules::Achievement::AchievementWithUserData> result)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["appId"] = RGNCore::GetAppId();
                bodyJson["appIds"] = appIds;
                bodyJson["limit"] = limit;
                bodyJson["startAfter"] = startAfter;
                bodyJson["withHistory"] = withHistory;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Achievement::GetAchievementsWithUserDataResponse>
                    ("achievements-getByAppIds", bodyJson, 
                    [complete](RGN::Modules::Achievement::GetAchievementsWithUserDataResponse response) {
                        for (RGN::Modules::Achievement::AchievementWithUserData& achievement : response.achievements) {
                            for (RGN::Modules::Achievement::UserAchievement& userAchievement : response.userAchievements) {
                                if (achievement.id == userAchievement.id) {
                                    achievement._userAchievement = userAchievement;
                                    break;
                                }
                            }
                        }
                    }, 
                fail);
            };
    };
}}}
