#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
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
         * Supported reward types are:
         * - `currency` - the reward is a quantity of currency coins.The `name` field is the name of the currency.
         * - `item_by_id` - the reward is a quantity of a virtual items.The `name` field is the id of the virtual item.
         * - `progression` - the reward is a quantity of progression.The `name` field is the id/name of the progression.
         * - `setLeaderboardScore` - the reward is a quantity of leaderboard score to set.The `name` field is the id of the
         * leaderboard.
         * - `addLeaderboardScore` - the reward is a quantity of leaderboard score to add.The `name` field is the id of the
         * leaderboard.
         * - `gamepass_by_id` - the reward is a quantity of game passes to add.The `name` field is the id of the game pass.
         * - `gamepass_by_request_name` - the reward is a quantity of game passes to add.The `name` field is the request name
         * of the game pass.
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
         * For "item_by_id" and "currency", it represents the number of items or coins rewarded.
         * For "progression", it represents the increment value for the user's progression.
         * For "setLeaderboardScore", it represents the score that will be set for the current user to the leaderboard
         * For "addLeaderboardScore", it represents the score that will be added for the current user to the leaderboard
         */
        int32_t quantity = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const AchievementReward& nlohmann_json_t) {
            nlohmann_json_j["type"] = nlohmann_json_t.type;
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["name"] = nlohmann_json_t.name;
            nlohmann_json_j["quantity"] = nlohmann_json_t.quantity;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, AchievementReward& nlohmann_json_t) {
            if (nlohmann_json_j.contains("type")) {
                auto json_type = nlohmann_json_j.at("type");
                if (!json_type.is_null() && json_type.is_string()) {
                    json_type.get_to(nlohmann_json_t.type);
                }
            }
            if (nlohmann_json_j.contains("appIds")) {
                auto json_appIds = nlohmann_json_j.at("appIds");
                if (!json_appIds.is_null() && json_appIds.is_array()) {
                    json_appIds.get_to(nlohmann_json_t.appIds);
                }
            }
            if (nlohmann_json_j.contains("name")) {
                auto json_name = nlohmann_json_j.at("name");
                if (!json_name.is_null() && json_name.is_string()) {
                    json_name.get_to(nlohmann_json_t.name);
                }
            }
            if (nlohmann_json_j.contains("quantity")) {
                auto json_quantity = nlohmann_json_j.at("quantity");
                if (!json_quantity.is_null() && json_quantity.is_number()) {
                    json_quantity.get_to(nlohmann_json_t.quantity);
                }
            }
        }
    };
}}}