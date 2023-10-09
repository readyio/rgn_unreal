#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * This class represents the AchievementReward in the Ready Games Network (RGN) Unity SDK's AchievementsModule.
     * An AchievementReward is a generic type of reward that can be earned by the user upon completing an achievement.
     * This could be a Virtual Item, Currency Coins, Progression, or Leaderboard Score rewards depending on the `type`.
     */
    struct AchievementReward {
        /**
         * The type of reward this achievement offers. 
         * This could be "virtualItem", "currency", "progression", "setLeaderboardScore" or "addLeaderboardScore"
         * to match the different types of reward systems available.
         */
        string type;
        /**
         * The list of application IDs for which this achievement reward is applicable. 
         * This allows rewards to be scoped to specific applications within a developer's portfolio.
         */
        vector<string> appIds;
        /**
         * The name of the reward.
         * This could be the id of the virtual item, currency name, progression id, or leaderboard id.
         */
        string name;
        /**
         * The quantity of the reward that will be given to the user upon completing the achievement.
         * For "virtualItem" and "currency", it represents the number of items or coins rewarded.
         * For "progression", it represents the increment value for the user's progression.
         * For "setLeaderboardScore", it represents the score that will be set for the current user to the leaderboard
         * For "addLeaderboardScore", it represents the score that will be added for the current user to the leaderboard
         */
        int32_t quantity = 0;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(AchievementReward, type, appIds, name, quantity)
    };
}}}