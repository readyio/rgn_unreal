#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    struct TriggerByRequestNameRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string requestName;
        int32_t progress = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const TriggerByRequestNameRequestData& nlohmann_json_t) {
            nlohmann_json_j["version"] = nlohmann_json_t.version;
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["requestName"] = nlohmann_json_t.requestName;
            nlohmann_json_j["progress"] = nlohmann_json_t.progress;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, TriggerByRequestNameRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("version")) {
                nlohmann_json_j.at("version").get_to(nlohmann_json_t.version);
            }
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("requestName")) {
                nlohmann_json_j.at("requestName").get_to(nlohmann_json_t.requestName);
            }
            if (nlohmann_json_j.contains("progress")) {
                nlohmann_json_j.at("progress").get_to(nlohmann_json_t.progress);
            }
        }
    };
}}}