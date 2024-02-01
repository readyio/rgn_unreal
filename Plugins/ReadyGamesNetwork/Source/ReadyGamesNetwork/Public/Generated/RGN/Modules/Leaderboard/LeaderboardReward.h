#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * A class that represents a leaderboard reward on Ready Games Network.
     */
    struct LeaderboardReward {
        /**
         * The place from users will be earned
         */
        int32_t placeFrom = 0;
        /**
         * The place to users will be earned
         */
        int32_t placeTo = 0;
        /**
         * Specifies reward, achievement contains virtual items reward, currency reward, etc
         */
        string achievementId;
        /**
         * Specifies how amount times to trigger an achievement
         */
        int32_t quantity = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const LeaderboardReward& nlohmann_json_t) {
            nlohmann_json_j["placeFrom"] = nlohmann_json_t.placeFrom;
            nlohmann_json_j["placeTo"] = nlohmann_json_t.placeTo;
            nlohmann_json_j["achievementId"] = nlohmann_json_t.achievementId;
            nlohmann_json_j["quantity"] = nlohmann_json_t.quantity;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LeaderboardReward& nlohmann_json_t) {
            if (nlohmann_json_j.contains("placeFrom")) {
                auto json_placeFrom = nlohmann_json_j.at("placeFrom");
                if (!json_placeFrom.is_null() && json_placeFrom.is_number()) {
                    json_placeFrom.get_to(nlohmann_json_t.placeFrom);
                }
            }
            if (nlohmann_json_j.contains("placeTo")) {
                auto json_placeTo = nlohmann_json_j.at("placeTo");
                if (!json_placeTo.is_null() && json_placeTo.is_number()) {
                    json_placeTo.get_to(nlohmann_json_t.placeTo);
                }
            }
            if (nlohmann_json_j.contains("achievementId")) {
                auto json_achievementId = nlohmann_json_j.at("achievementId");
                if (!json_achievementId.is_null() && json_achievementId.is_string()) {
                    json_achievementId.get_to(nlohmann_json_t.achievementId);
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