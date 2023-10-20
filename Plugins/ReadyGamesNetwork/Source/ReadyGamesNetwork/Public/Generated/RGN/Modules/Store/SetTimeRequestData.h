#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "TimeInfo.h"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct SetTimeRequestData : public RGN::Model::Request::BaseRequestData {
        string offerId;
        RGN::Modules::Store::TimeInfo time;

        friend void to_json(nlohmann::json& nlohmann_json_j, const SetTimeRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["offerId"] = nlohmann_json_t.offerId;
            nlohmann_json_j["time"] = nlohmann_json_t.time;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, SetTimeRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("offerId")) {
                nlohmann_json_j.at("offerId").get_to(nlohmann_json_t.offerId);
            }
            if (nlohmann_json_j.contains("time")) {
                nlohmann_json_j.at("time").get_to(nlohmann_json_t.time);
            }
        }
    };
}}}