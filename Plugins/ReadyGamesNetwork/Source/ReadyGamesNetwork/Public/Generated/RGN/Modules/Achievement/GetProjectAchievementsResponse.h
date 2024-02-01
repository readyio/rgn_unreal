#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "DailyAchievements.h"
#include "PlayerProgressAchievements.h"
#include "PurchaseAchievements.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * Currently active achievements for a project
     */
    struct GetProjectAchievementsResponse {
        /**
         * Daily achievements. Triggered when the user logs in.
         */
        vector<RGN::Modules::Achievement::DailyAchievements> dailyAchievements;
        /**
         * Player progress achievements. Triggered when the player progress field reaches the specified value.
         */
        vector<RGN::Modules::Achievement::PlayerProgressAchievements> playerProgressAchievements;
        /**
         * Purchase achievements. Triggered when the user purchases a virtual item with the specified tag.
         */
        vector<RGN::Modules::Achievement::PurchaseAchievements> purchaseAchievements;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetProjectAchievementsResponse& nlohmann_json_t) {
            nlohmann_json_j["dailyAchievements"] = nlohmann_json_t.dailyAchievements;
            nlohmann_json_j["playerProgressAchievements"] = nlohmann_json_t.playerProgressAchievements;
            nlohmann_json_j["purchaseAchievements"] = nlohmann_json_t.purchaseAchievements;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetProjectAchievementsResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("dailyAchievements")) {
                auto json_dailyAchievements = nlohmann_json_j.at("dailyAchievements");
                if (!json_dailyAchievements.is_null() && json_dailyAchievements.is_array()) {
                    json_dailyAchievements.get_to(nlohmann_json_t.dailyAchievements);
                }
            }
            if (nlohmann_json_j.contains("playerProgressAchievements")) {
                auto json_playerProgressAchievements = nlohmann_json_j.at("playerProgressAchievements");
                if (!json_playerProgressAchievements.is_null() && json_playerProgressAchievements.is_array()) {
                    json_playerProgressAchievements.get_to(nlohmann_json_t.playerProgressAchievements);
                }
            }
            if (nlohmann_json_j.contains("purchaseAchievements")) {
                auto json_purchaseAchievements = nlohmann_json_j.at("purchaseAchievements");
                if (!json_purchaseAchievements.is_null() && json_purchaseAchievements.is_array()) {
                    json_purchaseAchievements.get_to(nlohmann_json_t.purchaseAchievements);
                }
            }
        }
    };
}}}