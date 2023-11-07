#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * A class that represents a leaderboard join requirement on Ready Games Network.
     */
    struct JoinRequirement {
        /**
         * Specifies the type of the join requirement
         * Right now two types are implemented: "gamepass" and "inventory"
         */
        string type;
        /**
         * The id of the entity to check if it exists in user data
         * In case the type is "gamepass" the id is the gamepass id to check if the user has it.
         * In case the type is "invenotory", then it is the id of the virtual item the user needs to buy
         */
        string id;

        friend void to_json(nlohmann::json& nlohmann_json_j, const JoinRequirement& nlohmann_json_t) {
            nlohmann_json_j["type"] = nlohmann_json_t.type;
            nlohmann_json_j["id"] = nlohmann_json_t.id;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, JoinRequirement& nlohmann_json_t) {
            if (nlohmann_json_j.contains("type")) {
                auto json_type = nlohmann_json_j.at("type");
                if (!json_type.is_null() && json_type.is_string()) {
                    json_type.get_to(nlohmann_json_t.type);
                }
            }
            if (nlohmann_json_j.contains("id")) {
                auto json_id = nlohmann_json_j.at("id");
                if (!json_id.is_null() && json_id.is_string()) {
                    json_id.get_to(nlohmann_json_t.id);
                }
            }
        }
    };
}}}