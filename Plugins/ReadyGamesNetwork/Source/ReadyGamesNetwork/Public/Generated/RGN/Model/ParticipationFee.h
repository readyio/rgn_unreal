#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model {
    /**
     * A class that represents a participation fee on Ready Games Network.
     */
    struct ParticipationFee {
        /**
         * Specifies the type of the fee.
         * Specifies the type of the participation fee.
         * Available types are:
         * - `currency` - the user needs to pay a specific amount of currency to join a leaderboard.
         * - `gamepass_by_id` - the user needs to have a gamepass with a specific id to join a leaderboard.
         * - `gamepass_by_request_name` - the user needs to have a gamepass with a specific request name to join a
         * leaderboard.
         */
        string type;
        /**
         * The id of the entity to check in user data. For example, if the type is `gamepass_by_id`, the id is the id of the
         * gamepass.If the type is `gamepass_by_request_name`, the id is the request name of the gamepass.
         */
        string id;
        /**
         * The quantity of the entity to check in user data. For example, if the type is `currency`, the quantity is the
         * amount of currency.If the type is `gamepass_by_id`, the quantity is the quantity of the game passes the user
         * needs to have.
         */
        int32_t quantity = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const ParticipationFee& nlohmann_json_t) {
            nlohmann_json_j["type"] = nlohmann_json_t.type;
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["quantity"] = nlohmann_json_t.quantity;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, ParticipationFee& nlohmann_json_t) {
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
            if (nlohmann_json_j.contains("quantity")) {
                auto json_quantity = nlohmann_json_j.at("quantity");
                if (!json_quantity.is_null() && json_quantity.is_number()) {
                    json_quantity.get_to(nlohmann_json_t.quantity);
                }
            }
        }
    };
}}