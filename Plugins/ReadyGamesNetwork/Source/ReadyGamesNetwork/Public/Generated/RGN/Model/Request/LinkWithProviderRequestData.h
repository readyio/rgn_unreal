#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Request {
    struct LinkWithProviderRequestData : public RGN::Model::Request::BaseRequestData {
        bool useMaster = false;
        string idToken;

        friend void to_json(nlohmann::json& nlohmann_json_j, const LinkWithProviderRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["useMaster"] = nlohmann_json_t.useMaster;
            nlohmann_json_j["idToken"] = nlohmann_json_t.idToken;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, LinkWithProviderRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("useMaster")) {
                nlohmann_json_j.at("useMaster").get_to(nlohmann_json_t.useMaster);
            }
            if (nlohmann_json_j.contains("idToken")) {
                nlohmann_json_j.at("idToken").get_to(nlohmann_json_t.idToken);
            }
        }
    };
}}}