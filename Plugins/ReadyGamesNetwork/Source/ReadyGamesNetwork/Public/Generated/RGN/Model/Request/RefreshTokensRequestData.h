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
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("refreshToken")) {
                nlohmann_json_j.at("refreshToken").get_to(nlohmann_json_t.refreshToken);
            }
        }
    };
}}}