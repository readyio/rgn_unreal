#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "AchievementData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    class AchievementsModule_Admin {
    public:
        static void AddAchievementAsync(
            RGN::Modules::Achievement::AchievementData achievementData,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["data"] = achievementData;
                RGNCore::CallAPI(
                    "achievements-add",
                    requestData,
                    complete,
                    fail);
            };
        static void UpdateAchievementAsync(
            RGN::Modules::Achievement::AchievementData achievementData,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["data"] = achievementData;
                RGNCore::CallAPI(
                    "achievements-update",
                    requestData,
                    complete,
                    fail);
            };
        static void DeleteAchievementAsync(
            string achievementId,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["id"] = achievementId;
                RGNCore::CallAPI(
                    "achievements-delete",
                    requestData,
                    complete,
                    fail);
            };
        static void AddLoginDaysInRowAchievementAsync(
            string achievementId,
            int32_t daysInRow,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["achievementId"] = achievementId;
                RGNCore::CallAPI(
                    "achievements-addLoginDaysInRowAchievement",
                    requestData,
                    complete,
                    fail);
            };
        static void AddLoginDaysInRowAchievementAsync(
            RGN::Modules::Achievement::AchievementData achievementData,
            int32_t daysInRow,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["achievementData"] = achievementData;
                RGNCore::CallAPI(
                    "achievements-addLoginDaysInRowAchievement",
                    requestData,
                    complete,
                    fail);
            };
        static void DeleteLoginDaysInRowGameConstRecordAsync(
            string achievementId,
            int32_t daysInRow,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["achievementId"] = achievementId;
                RGNCore::CallAPI(
                    "achievements-deleteLoginDaysInRowGameConstRecord",
                    requestData,
                    complete,
                    fail);
            };
        static void AddPlayerProgressAchievementAsync(
            string achievementId,
            string playerProgressFieldName,
            int64_t playerProgressFieldValueToReach,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["achievementId"] = achievementId;
                requestData["playerProgressFieldName"] = playerProgressFieldName;
                requestData["playerProgressFieldValueToReach"] = playerProgressFieldValueToReach;
                RGNCore::CallAPI(
                    "achievements-addPlayerProgressAchievement",
                    requestData,
                    complete,
                    fail);
            };
        static void AddPlayerProgressAchievementAsync(
            RGN::Modules::Achievement::AchievementData achievementData,
            string playerProgressFieldName,
            int64_t playerProgressFieldValueToReach,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["achievementData"] = achievementData;
                requestData["playerProgressFieldName"] = playerProgressFieldName;
                requestData["playerProgressFieldValueToReach"] = playerProgressFieldValueToReach;
                RGNCore::CallAPI(
                    "achievements-addPlayerProgressAchievement",
                    requestData,
                    complete,
                    fail);
            };
        static void DeletePlayerProgressAchievementAsync(
            string achievementId,
            string playerProgressFieldName,
            int64_t playerProgressFieldValueToReach,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["achievementId"] = achievementId;
                requestData["playerProgressFieldName"] = playerProgressFieldName;
                requestData["playerProgressFieldValueToReach"] = playerProgressFieldValueToReach;
                RGNCore::CallAPI(
                    "achievements-deletePlayerProgressGameConstRecord",
                    requestData,
                    complete,
                    fail);
            };
    };
}}}