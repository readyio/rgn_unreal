#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Request {
    struct RefreshTokensRequestData : public RGN::Model::Request::BaseRequestData {
        string refreshToken;

        friend void to_json(nlohmann::json& nlohmann_json_j, const RefreshTokensRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["refreshToken"] = nlohmann_json_t.refreshToken;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, RefreshTokensRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("refreshToken")) {
                auto json_refreshToken = nlohmann_json_j.at("refreshToken");
                if (!json_refreshToken.is_null() && json_refreshToken.is_string()) {
                    json_refreshToken.get_to(nlohmann_json_t.refreshToken);
                }
            }
        }
    };
}}}