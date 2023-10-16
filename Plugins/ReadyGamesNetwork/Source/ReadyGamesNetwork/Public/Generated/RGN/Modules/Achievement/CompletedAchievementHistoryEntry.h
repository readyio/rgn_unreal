#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "AchievementReward.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * Represents completed achievement history entry for a given achievement
     * This data is comming from the users data
     */
    struct CompletedAchievementHistoryEntry {
        /**
         * Achievement document id
         */
        string id;
        /**
         * Value which should be reached to complete the achievement when
         * the achievement was triggered
         */
        int32_t valueToReach = 0;
        /**
         * Achievement rewards ids and quantity rewards to add to users when
         * the achievement is triggered
         */
        vector<RGN::Modules::Achievement::AchievementReward> rewards;
        /**
         * Time when the achievement triggered
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t completeTime = 0;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(CompletedAchievementHistoryEntry, id, valueToReach, rewards, completeTime)
    };
}}}