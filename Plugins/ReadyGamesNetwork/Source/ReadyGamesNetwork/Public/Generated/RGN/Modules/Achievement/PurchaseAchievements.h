#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    /**
     * Purchase achievements. Triggered when the user purchases a virtual item with the specified tag.
     * Is triggered when 'storeV2-buyStoreOffer' or 'storeV2-buyVirtualItems' is called.
     */
    struct PurchaseAchievements {
        /**
         * The tag of the virtual item. When the user purchases a virtual item with this tag, the achievement is triggered.
         */
        string virtualItemTag;
        /**
         * The ID of the achievement to trigger
         */
        string achievementId;

        friend void to_json(nlohmann::json& nlohmann_json_j, const PurchaseAchievements& nlohmann_json_t) {
            nlohmann_json_j["virtualItemTag"] = nlohmann_json_t.virtualItemTag;
            nlohmann_json_j["achievementId"] = nlohmann_json_t.achievementId;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, PurchaseAchievements& nlohmann_json_t) {
            if (nlohmann_json_j.contains("virtualItemTag")) {
                auto json_virtualItemTag = nlohmann_json_j.at("virtualItemTag");
                if (!json_virtualItemTag.is_null() && json_virtualItemTag.is_string()) {
                    json_virtualItemTag.get_to(nlohmann_json_t.virtualItemTag);
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