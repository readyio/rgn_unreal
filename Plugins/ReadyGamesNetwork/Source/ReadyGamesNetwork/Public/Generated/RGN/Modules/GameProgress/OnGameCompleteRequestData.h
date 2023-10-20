#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    struct OnGameCompleteRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        vector<RGN::Modules::Currency::Currency> reward;

        friend void to_json(nlohmann::json& nlohmann_json_j, const OnGameCompleteRequestData& nlohmann_json_t) {
            nlohmann_json_j["version"] = nlohmann_json_t.version;
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["reward"] = nlohmann_json_t.reward;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, OnGameCompleteRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("version")) {
                nlohmann_json_j.at("version").get_to(nlohmann_json_t.version);
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("reward")) {
                nlohmann_json_j.at("reward").get_to(nlohmann_json_t.reward);
            }
        }
    };
}}}