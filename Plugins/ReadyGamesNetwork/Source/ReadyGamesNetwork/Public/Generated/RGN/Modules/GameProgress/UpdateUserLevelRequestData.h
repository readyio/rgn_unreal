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
    struct UpdateUserLevelRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string playerProgress;
        vector<RGN::Modules::Currency::Currency> reward;

        friend void to_json(nlohmann::json& nlohmann_json_j, const UpdateUserLevelRequestData& nlohmann_json_t) {
            nlohmann_json_j["version"] = nlohmann_json_t.version;
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["playerProgress"] = nlohmann_json_t.playerProgress;
            nlohmann_json_j["reward"] = nlohmann_json_t.reward;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, UpdateUserLevelRequestData& nlohmann_json_t) {
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
            if (nlohmann_json_j.contains("playerProgress")) {
                auto json_playerProgress = nlohmann_json_j.at("playerProgress");
                if (!json_playerProgress.is_null()) {
                    json_playerProgress.get_to(nlohmann_json_t.playerProgress);
                }
            }
            if (nlohmann_json_j.contains("reward")) {
                auto json_reward = nlohmann_json_j.at("reward");
                if (!json_reward.is_null() && json_reward.is_array()) {
                    json_reward.get_to(nlohmann_json_t.reward);
                }
            }
        }
    };
}}}