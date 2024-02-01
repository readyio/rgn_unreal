#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * Player progress achievements. Triggered when the player progress field reaches the specified value.
     * Is triggered when 'game-updatePlayerProgress' or 'game-addPlayerProgress' is called.
     */
    struct PlayerProgressAchievements {
        /**
         * The name of the player progress field
         */
        string playerProgressFieldName;
        /**
         * The value of the player progress field to reach for the achievement
         */
        int32_t playerProgressFieldValueToReach = 0;
        /**
         * The ID of the achievement to trigger
         */
        string achievementId;

        friend void to_json(nlohmann::json& nlohmann_json_j, const PlayerProgressAchievements& nlohmann_json_t) {
            nlohmann_json_j["playerProgressFieldName"] = nlohmann_json_t.playerProgressFieldName;
            nlohmann_json_j["playerProgressFieldValueToReach"] = nlohmann_json_t.playerProgressFieldValueToReach;
            nlohmann_json_j["achievementId"] = nlohmann_json_t.achievementId;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, PlayerProgressAchievements& nlohmann_json_t) {
            if (nlohmann_json_j.contains("playerProgressFieldName")) {
                auto json_playerProgressFieldName = nlohmann_json_j.at("playerProgressFieldName");
                if (!json_playerProgressFieldName.is_null() && json_playerProgressFieldName.is_string()) {
                    json_playerProgressFieldName.get_to(nlohmann_json_t.playerProgressFieldName);
                }
            }
            if (nlohmann_json_j.contains("playerProgressFieldValueToReach")) {
                auto json_playerProgressFieldValueToReach = nlohmann_json_j.at("playerProgressFieldValueToReach");
                if (!json_playerProgressFieldValueToReach.is_null() && json_playerProgressFieldValueToReach.is_number()) {
                    json_playerProgressFieldValueToReach.get_to(nlohmann_json_t.playerProgressFieldValueToReach);
                }
            }
            if (nlohmann_json_j.contains("achievementId")) {
                auto json_achievementId = nlohmann_json_j.at("achievementId");
                if (!json_achievementId.is_null() && json_achievementId.is_string()) {
                    json_achievementId.get_to(nlohmann_json_t.achievementId);
                }
            }
        }
    };
}}}