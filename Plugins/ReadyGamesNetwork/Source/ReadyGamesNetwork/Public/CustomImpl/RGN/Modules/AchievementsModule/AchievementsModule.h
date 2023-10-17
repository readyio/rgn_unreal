#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/Achievement/AchievementsModule.h"
#include "../../../../Generated/RGN/Modules/Achievement/GetAchievementsWithUserDataResponse.h"
#include <string>
#include <algorithm>

using namespace std;
using GetAchievementsWithUserDataResponse = RGN::Modules::Achievement::GetAchievementsWithUserDataResponse;

namespace RGN { namespace Modules { namespace Achievement {
    class AchievementsModuleCustomImpl {
    public:
        static void GetByAppIdsWithUserDataAsync(
            vector<string> appIds,
            int32_t limit,
            string startAfter,
            bool withHistory,
            const function<void(vector<RGN::Modules::Achievement::AchievementWithUserData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["appId"] = RGNCore::GetAppId();
                bodyJson["appIds"] = appIds;
                bodyJson["limit"] = limit;
                bodyJson["startAfter"] = startAfter;
                bodyJson["withHistory"] = withHistory;
                RGNCore::CallAPI<nlohmann::json, GetAchievementsWithUserDataResponse>("achievements-getByAppIds", bodyJson, [complete](GetAchievementsWithUserDataResponse response) {
                    for (auto& achievement : response.achievements) {
                        for (auto& userAchievement : response.userAchievements) {
                            if (achievement.id == userAchievement.id) {
                                achievement._userAchievement = userAchievement;
                                break;
                            }
                        }
                    }
                }, fail);
            };
    };
}}}
