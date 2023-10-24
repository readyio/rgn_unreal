#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "UserStatus.h"
#include "../../Model/Response/BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    struct GetUserStatusResponseData : public RGN::Model::Response::BaseResponseData {
        RGN::Modules::UserProfile::UserStatus userStatus;
        string lastAppPackageName;
        int64_t lastActivityTS = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetUserStatusResponseData& nlohmann_json_t) {
            nlohmann_json_j["status"] = nlohmann_json_t.status;
            nlohmann_json_j["message"] = nlohmann_json_t.message;
            nlohmann_json_j["userStatus"] = nlohmann_json_t.userStatus;
            nlohmann_json_j["lastAppPackageName"] = nlohmann_json_t.lastAppPackageName;
            nlohmann_json_j["lastActivityTS"] = nlohmann_json_t.lastActivityTS;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetUserStatusResponseData& nlohmann_json_t) {
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
            if (nlohmann_json_j.contains("userStatus")) {
                auto json_userStatus = nlohmann_json_j.at("userStatus");
                if (!json_userStatus.is_null()) {
                    json_userStatus.get_to(nlohmann_json_t.userStatus);
                }
            }
            if (nlohmann_json_j.contains("lastAppPackageName")) {
                auto json_lastAppPackageName = nlohmann_json_j.at("lastAppPackageName");
                if (!json_lastAppPackageName.is_null() && json_lastAppPackageName.is_string()) {
                    json_lastAppPackageName.get_to(nlohmann_json_t.lastAppPackageName);
                }
            }
            if (nlohmann_json_j.contains("lastActivityTS")) {
                auto json_lastActivityTS = nlohmann_json_j.at("lastActivityTS");
                if (!json_lastActivityTS.is_null() && json_lastActivityTS.is_number()) {
                    json_lastActivityTS.get_to(nlohmann_json_t.lastActivityTS);
                }
            }
        }
    };
}}}