#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Request {
    struct LoginRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string bio;

        friend void to_json(nlohmann::json& nlohmann_json_j, const LoginRequestData& nlohmann_json_t) {
            nlohmann_json_j["version"] = nlohmann_json_t.version;
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["bio"] = nlohmann_json_t.bio;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LoginRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("version")) {
                nlohmann_json_j.at("version").get_to(nlohmann_json_t.version);
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("bio")) {
                nlohmann_json_j.at("bio").get_to(nlohmann_json_t.bio);
            }
        }
    };
}}}