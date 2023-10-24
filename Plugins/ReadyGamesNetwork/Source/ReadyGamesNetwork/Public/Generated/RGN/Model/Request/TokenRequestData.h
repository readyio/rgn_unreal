#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Request {
    struct TokenRequestData : public RGN::Model::Request::BaseRequestData {
        string idToken;

        friend void to_json(nlohmann::json& nlohmann_json_j, const TokenRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["idToken"] = nlohmann_json_t.idToken;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, TokenRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("idToken")) {
                auto json_idToken = nlohmann_json_j.at("idToken");
                if (!json_idToken.is_null() && json_idToken.is_string()) {
                    json_idToken.get_to(nlohmann_json_t.idToken);
                }
            }
        }
    };
}}}