#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Response/BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    struct GetPlayerLevelResponseData : public RGN::Model::Response::BaseResponseData {
        string playerProgress;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetPlayerLevelResponseData& nlohmann_json_t) {
            nlohmann_json_j["status"] = nlohmann_json_t.status;
            nlohmann_json_j["message"] = nlohmann_json_t.message;
            nlohmann_json_j["playerProgress"] = nlohmann_json_t.playerProgress;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetPlayerLevelResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("status")) {
                nlohmann_json_j.at("status").get_to(nlohmann_json_t.status);
            }
            if (nlohmann_json_j.contains("message")) {
                nlohmann_json_j.at("message").get_to(nlohmann_json_t.message);
            }
            if (nlohmann_json_j.contains("playerProgress")) {
                nlohmann_json_j.at("playerProgress").get_to(nlohmann_json_t.playerProgress);
            }
        }
    };
}}}