#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Response {
    struct RefreshTokensResponseData {
        string userId;
        string idToken;
        string refreshToken;

        friend void to_json(nlohmann::json& nlohmann_json_j, const RefreshTokensResponseData& nlohmann_json_t) {
            nlohmann_json_j["userId"] = nlohmann_json_t.userId;
            nlohmann_json_j["idToken"] = nlohmann_json_t.idToken;
            nlohmann_json_j["refreshToken"] = nlohmann_json_t.refreshToken;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, RefreshTokensResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("userId")) {
                auto json_userId = nlohmann_json_j.at("userId");
                if (!json_userId.is_null() && json_userId.is_string()) {
                    json_userId.get_to(nlohmann_json_t.userId);
                }
            }
            if (nlohmann_json_j.contains("idToken")) {
                auto json_idToken = nlohmann_json_j.at("idToken");
                if (!json_idToken.is_null() && json_idToken.is_string()) {
                    json_idToken.get_to(nlohmann_json_t.idToken);
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