#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    struct TriggerByIdRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string id;
        int32_t progress = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const TriggerByIdRequestData& nlohmann_json_t) {
            nlohmann_json_j["version"] = nlohmann_json_t.version;
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["id"] = nlohmann_json_t.id;
            nlohmann_json_j["progress"] = nlohmann_json_t.progress;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, TriggerByIdRequestData& nlohmann_json_t) {
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
            if (nlohmann_json_j.contains("id")) {
                auto json_id = nlohmann_json_j.at("id");
                if (!json_id.is_null() && json_id.is_string()) {
                    json_id.get_to(nlohmann_json_t.id);
                }
            }
            if (nlohmann_json_j.contains("progress")) {
                auto json_progress = nlohmann_json_j.at("progress");
                if (!json_progress.is_null() && json_progress.is_number()) {
                    json_progress.get_to(nlohmann_json_t.progress);
                }
            }
        }
    };
}}}