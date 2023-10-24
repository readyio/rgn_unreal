#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Wallets {
    struct CreateWalletRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string token;
        string password;

        friend void to_json(nlohmann::json& nlohmann_json_j, const CreateWalletRequestData& nlohmann_json_t) {
            nlohmann_json_j["version"] = nlohmann_json_t.version;
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["token"] = nlohmann_json_t.token;
            nlohmann_json_j["password"] = nlohmann_json_t.password;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, CreateWalletRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("version")) {
                auto json_version = nlohmann_json_j.at("version");
                if (!json_version.is_null() && json_version.is_number()) {
                    json_version.get_to(nlohmann_json_t.version);
                }
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("token")) {
                auto json_token = nlohmann_json_j.at("token");
                if (!json_token.is_null() && json_token.is_string()) {
                    json_token.get_to(nlohmann_json_t.token);
                }
            }
            if (nlohmann_json_j.contains("password")) {
                auto json_password = nlohmann_json_j.at("password");
                if (!json_password.is_null() && json_password.is_string()) {
                    json_password.get_to(nlohmann_json_t.password);
                }
            }
        }
    };
}}}