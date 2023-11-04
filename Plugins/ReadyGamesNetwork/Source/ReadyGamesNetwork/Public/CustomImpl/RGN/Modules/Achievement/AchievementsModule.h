#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/Achievement/GetAchievementsResponse.h"
#include "../../../../Generated/RGN/Modules/Achievement/GetAchievementsWithUserDataResponse.h"
#include "../../../../Generated/RGN/Modules/Achievement/GetUserAchievementsResponse.h"
#include <string>
#include <algorithm>

namespace RGN { namespace Modules { namespace Achievement {
    class AchievementsModuleCustomImpl {
    public:
        static void GetForCurrentAppAsync(
            int32_t limit,
            std::string startAfter,
            const std::function<void(std::vector<RGN::Modules::Achievement::AchievementData> result)>& success,
            const std::function<void(int httpCode, std::string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["appIds"] = { RGNCore::GetAppId() };
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Achievement::GetAchievementsResponse>(
                    "achievements-getByAppIds",
                    requestData,
                    [success](RGN::Modules::Achievement::GetAchievementsResponse result) {
                        success(result.achievements);
                    },
                    fail
                );
            };

        static void GetByAppIdsWithUserDataAsync(
            std::vector<string> appIds,
            int32_t limit,
            std::string startAfter,
            bool withHistory,
            const std::function<void(std::vector<RGN::Modules::Achievement::AchievementWithUserData> result)>& success,
            const std::function<void(int httpCode, std::string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["appId"] = RGNCore::GetAppId();
                bodyJson["appIds"] = appIds;
                bodyJson["limit"] = limit;
                bodyJson["startAfter"] = startAfter;
                bodyJson["withHistory"] = withHistory;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Achievement::GetAchievementsWithUserDataResponse>
                    ("achievements-getByAppIds", bodyJson, 
                    [success](RGN::Modules::Achievement::GetAchievementsWithUserDataResponse response) {
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

        static void GetForCurrentAppWithUserDataAsync(
            int32_t limit,
            std::string startAfter,
            const std::function<void(std::vector<RGN::Modules::Achievement::AchievementWithUserData> result)>& success,
            const std::function<void(int httpCode, std::string error)>& fail) {
                GetByAppIdsWithUserDataAsync({ RGNCore::GetAppId() }, limit, startAfter, false, success, fail);
            };

        static void GetUserAchievementsAsync(
            std::string userId,
            int64_t startAfter,
            int32_t limit,
            const std::function<void(std::vector<RGN::Modules::Achievement::UserAchievement> result)>& success,
            const std::function<void(int httpCode, std::string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["appId"] = RGNCore::GetAppId();
                bodyJson["userId"] = userId;
                bodyJson["startAfter"] = startAfter;
                bodyJson["limit"] = limit;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Achievement::GetUserAchievementsResponse>
                    ("achievements-getUserAchievements", bodyJson,
                    [success](RGN::Modules::Achievement::GetUserAchievementsResponse response) {
                        success(response.userAchievements);
                    },
                fail);
            };
    };
}}}
