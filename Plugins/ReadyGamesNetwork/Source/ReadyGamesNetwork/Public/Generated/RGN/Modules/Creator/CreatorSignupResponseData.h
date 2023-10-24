#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct CreatorSignupResponseData {
        string message;
        bool success = false;

        friend void to_json(nlohmann::json& nlohmann_json_j, const CreatorSignupResponseData& nlohmann_json_t) {
            nlohmann_json_j["message"] = nlohmann_json_t.message;
            nlohmann_json_j["success"] = nlohmann_json_t.success;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, CreatorSignupResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("message")) {
                auto json_message = nlohmann_json_j.at("message");
                if (!json_message.is_null() && json_message.is_string()) {
                    json_message.get_to(nlohmann_json_t.message);
                }
            }
            if (nlohmann_json_j.contains("success")) {
                auto json_success = nlohmann_json_j.at("success");
                if (!json_success.is_null() && json_success.is_boolean()) {
                    json_success.get_to(nlohmann_json_t.success);
                }
            }
        }
    };
}}}