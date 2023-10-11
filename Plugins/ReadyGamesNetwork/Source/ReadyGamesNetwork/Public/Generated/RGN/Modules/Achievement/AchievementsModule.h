#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "AchievementData.h"
#include "AchievementWithUserData.h"
#include "TriggerAndClaimResponse.h"
#include "UserAchievement.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    class AchievementsModule {
    public:
        static void GetByIdsAsync(
            vector<string>& ids,
            const function<void(vector<RGN::Modules::Achievement::AchievementData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByAppIdsAsync(
            vector<string>& appIds,
            int32_t limit,
            string& startAfter,
            const function<void(vector<RGN::Modules::Achievement::AchievementData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetForCurrentAppAsync(
            int32_t limit,
            string& startAfter,
            const function<void(vector<RGN::Modules::Achievement::AchievementData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByAppIdsWithUserDataAsync(
            vector<string>& appIds,
            int32_t limit,
            string& startAfter,
            bool withHistory,
            const function<void(vector<RGN::Modules::Achievement::AchievementWithUserData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetForCurrentAppWithUserDataAsync(
            int32_t limit,
            string& startAfter,
            const function<void(vector<RGN::Modules::Achievement::AchievementWithUserData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByRequestNameAsync(
            string& requestName,
            const function<void(RGN::Modules::Achievement::AchievementData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByRequestNamesAsync(
            vector<string>& requestNames,
            const function<void(vector<RGN::Modules::Achievement::AchievementData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void TriggerByIdAsync(
            string& id,
            int32_t progress,
            const function<void(RGN::Modules::Achievement::TriggerAndClaimResponse& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void TriggerByRequestNameAsync(
            string& requestName,
            int32_t progress,
            const function<void(RGN::Modules::Achievement::TriggerAndClaimResponse& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void ClaimByIdAsync(
            string& achievementId,
            const function<void(RGN::Modules::Achievement::TriggerAndClaimResponse& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void ClaimByRequestNameAsync(
            string& requestName,
            const function<void(RGN::Modules::Achievement::TriggerAndClaimResponse& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetUserAchievementsAsync(
            string& userId,
            int64_t startAfter,
            int32_t limit,
            const function<void(vector<RGN::Modules::Achievement::UserAchievement>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}