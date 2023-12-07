#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace GamePass {
    /**
     * Represents a Game Pass in the Ready Games Network (RGN) with its associated properties.
     */
    struct GamePassUserData {
        /**
         * Unique identifier of the Game Pass user id.
         */
        string id;
        /**
         * Unique identifier of the Game Pass.
         */
        string gamePassId;
        /**
         * The UNIX timestamp representing when the Game Pass was created.
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t createdAt = 0;
        /**
         * The UNIX timestamp representing when the Game Pass was last updated.
         * in milliseconds since midnight, January 1, 1970 UTC.
         * Refer to T:RGN.Utility.DateTimeUtility for helper methods.
         * This field is automatically populated by the backend
         */
        int64_t updatedAt = 0;
        /**
         * Identifier of the user who created the Game Pass. User Id. Populated by the backend.
         */
        string createdBy;
        /**
         * Identifier of the user who last updated the Game Pass. User Id. Populated by the backend.
         */
        string updatedBy;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GamePassUserData& nlohmann_json_t) {
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["gamePassId"] = nlohmann_json_t.gamePassId;
            nlohmann_json_j["createdAt"] = nlohmann_json_t.createdAt;
            nlohmann_json_j["updatedAt"] = nlohmann_json_t.updatedAt;
            nlohmann_json_j["createdBy"] = nlohmann_json_t.createdBy;
            nlohmann_json_j["updatedBy"] = nlohmann_json_t.updatedBy;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GamePassUserData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("id")) {
                auto json_id = nlohmann_json_j.at("id");
                if (!json_id.is_null() && json_id.is_string()) {
                    json_id.get_to(nlohmann_json_t.id);
                }
            }
            if (nlohmann_json_j.contains("gamePassId")) {
                auto json_gamePassId = nlohmann_json_j.at("gamePassId");
                if (!json_gamePassId.is_null() && json_gamePassId.is_string()) {
                    json_gamePassId.get_to(nlohmann_json_t.gamePassId);
                }
            }
            if (nlohmann_json_j.contains("createdAt")) {
                auto json_createdAt = nlohmann_json_j.at("createdAt");
                if (!json_createdAt.is_null() && json_createdAt.is_number()) {
                    json_createdAt.get_to(nlohmann_json_t.createdAt);
                }
            }
            if (nlohmann_json_j.contains("updatedAt")) {
                auto json_updatedAt = nlohmann_json_j.at("updatedAt");
                if (!json_updatedAt.is_null() && json_updatedAt.is_number()) {
                    json_updatedAt.get_to(nlohmann_json_t.updatedAt);
                }
            }
            if (nlohmann_json_j.contains("createdBy")) {
                auto json_createdBy = nlohmann_json_j.at("createdBy");
                if (!json_createdBy.is_null() && json_createdBy.is_string()) {
                    json_createdBy.get_to(nlohmann_json_t.createdBy);
                }
            }
            if (nlohmann_json_j.contains("updatedBy")) {
                auto json_updatedBy = nlohmann_json_j.at("updatedBy");
                if (!json_updatedBy.is_null() && json_updatedBy.is_string()) {
                    json_updatedBy.get_to(nlohmann_json_t.updatedBy);
                }
            }
        }
    };
}}}