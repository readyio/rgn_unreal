#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "AchievementData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    class AchievementsModule_Admin {
    public:
        static void AddAchievementAsync(
            RGN::Modules::Achievement::AchievementData& achievementData,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void UpdateAchievementAsync(
            RGN::Modules::Achievement::AchievementData& achievementData,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DeleteAchievementAsync(
            string& achievementId,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddLoginDaysInRowAchievementAsync(
            string& achievementId,
            int32_t daysInRow,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddLoginDaysInRowAchievementAsync(
            RGN::Modules::Achievement::AchievementData& achievementData,
            int32_t daysInRow,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DeleteLoginDaysInRowGameConstRecordAsync(
            string& achievementId,
            int32_t daysInRow,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddPlayerProgressAchievementAsync(
            string& achievementId,
            string& playerProgressFieldName,
            int64_t playerProgressFieldValueToReach,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddPlayerProgressAchievementAsync(
            RGN::Modules::Achievement::AchievementData& achievementData,
            string& playerProgressFieldName,
            int64_t playerProgressFieldValueToReach,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DeletePlayerProgressAchievementAsync(
            string& achievementId,
            string& playerProgressFieldName,
            int64_t playerProgressFieldValueToReach,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}