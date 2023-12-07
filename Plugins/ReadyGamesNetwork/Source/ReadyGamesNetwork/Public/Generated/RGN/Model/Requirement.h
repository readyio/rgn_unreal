#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model {
    /**
     * A class that represents a leaderboard join or store offer purchase requirement on Ready Games Network.
     */
    struct Requirement {
        /**
         * Specifies the type of the join requirement
         * Right now 5 types are implemented:
         * - `gamepass` - the user needs to have a gamepass with a specific id to join the leaderboard.
         * - `item_by_id` - the user needs to have a virtual item with a specific id to join the leaderboard.
         * - `item_by_tag` - the user needs to have a virtual item with a specific tag to join the leaderboard.
         * - `achievement_by_id` - the user needs to complete an achievement to join the leaderboard.
         * - `achievement_by_requestName` - the user needs to complete an achievement with a specific request name to
         * join the leaderboard.
         */
        string type;
        /**
         * The id of the entity to check in user data. For example, if the type is `gamepass`, the id is the id of the
         * gamepass.If the type is `item_by_tag`, the id is the tag of the virtual item.
         */
        string id;

        friend void to_json(nlohmann::json& nlohmann_json_j, const Requirement& nlohmann_json_t) {
            nlohmann_json_j["type"] = nlohmann_json_t.type;
            nlohmann_json_j["id"] = nlohmann_json_t.id;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, Requirement& nlohmann_json_t) {
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
}}