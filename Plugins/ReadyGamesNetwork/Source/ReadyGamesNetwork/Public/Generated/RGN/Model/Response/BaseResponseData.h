#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Response {
    /**
     * Represents the base class for response data received from a server.
     * It contains common properties that are expected in all responses.
     */
    struct BaseResponseData {
        /**
         * The status code of the response, typically indicating success or failure of the request.
         */
        int32_t status = 0;
        /**
         * A message providing additional information about the response, such as an error message or a status update.
         */
        string message;

        friend void to_json(nlohmann::json& nlohmann_json_j, const BaseResponseData& nlohmann_json_t) {
            nlohmann_json_j["status"] = nlohmann_json_t.status;
            nlohmann_json_j["message"] = nlohmann_json_t.message;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, BaseResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("status")) {
                auto json_status = nlohmann_json_j.at("status");
                if (!json_status.is_null() && json_status.is_number()) {
                    json_status.get_to(nlohmann_json_t.status);
                }
            }
            if (nlohmann_json_j.contains("message")) {
                auto json_message = nlohmann_json_j.at("message");
                if (!json_message.is_null() && json_message.is_string()) {
                    json_message.get_to(nlohmann_json_t.message);
                }
            }
        }
    };
}}}