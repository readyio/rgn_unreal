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
                nlohmann_json_j.at("version").get_to(nlohmann_json_t.version);
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("token")) {
                nlohmann_json_j.at("token").get_to(nlohmann_json_t.token);
            }
            if (nlohmann_json_j.contains("password")) {
                nlohmann_json_j.at("password").get_to(nlohmann_json_t.password);
            }
        }
    };
}}}