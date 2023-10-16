#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "CompletedAchievementHistoryEntry.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * Represents completed achievement data from the users data
     * If the achievement is  then
     * this document can contain more that one
     */
    struct UserAchievement {
        /**
         * Achievement document id
         */
        string id;
        /**
         * Current progress value of the achievement
         */
        int32_t value = 0;
        /**
         * Value which should be reached to complete the achievement when
         * the achievement was triggered
         */
        int32_t valueToReach = 0;
        /**
         * Shows if the achievement was completed
         */
        bool isCompleted = false;
        /**
         * Shows if the achievement was claimed
         */
        bool isClaimed = false;
        /**
         * Time when the achievement was last time completed
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t lastCompleteTime = 0;
        /**
         * Represents all times the user completed this achievement
         * This collection can contain more than 1 item in case the
         * F:RGN.Modules.Achievement.AchievementData.repeatable is true
         */
        vector<RGN::Modules::Achievement::CompletedAchievementHistoryEntry> history;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(UserAchievement, id, value, valueToReach, isCompleted, isClaimed, lastCompleteTime, history)
    };
}}}