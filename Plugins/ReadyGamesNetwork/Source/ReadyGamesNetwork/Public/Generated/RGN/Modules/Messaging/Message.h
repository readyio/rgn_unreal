#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Messaging {
    /**
     * This struct used to get messages from the backend
     */
    struct Message {
        /**
         * Unique id of the message
         */
        string Id;
        /**
         * Payload string to attach data to the message
         * This could be for example Json string
         */
        string Payload;

        friend void to_json(nlohmann::json& nlohmann_json_j, const Message& nlohmann_json_t) {
            nlohmann_json_j["Id"] = nlohmann_json_t.Id;
            nlohmann_json_j["Payload"] = nlohmann_json_t.Payload;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, Message& nlohmann_json_t) {
            if (nlohmann_json_j.contains("Id")) {
                auto json_Id = nlohmann_json_j.at("Id");
                if (!json_Id.is_null() && json_Id.is_string()) {
                    json_Id.get_to(nlohmann_json_t.Id);
                }
            }
            if (nlohmann_json_j.contains("Payload")) {
                auto json_Payload = nlohmann_json_j.at("Payload");
                if (!json_Payload.is_null() && json_Payload.is_string()) {
                    json_Payload.get_to(nlohmann_json_t.Payload);
                }
            }
        }
    };
}}}