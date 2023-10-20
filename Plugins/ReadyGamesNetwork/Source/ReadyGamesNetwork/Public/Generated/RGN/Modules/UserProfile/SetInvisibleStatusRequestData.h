#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    struct SetInvisibleStatusRequestData : public RGN::Model::Request::BaseRequestData {
        bool invisibleStatus = false;

        friend void to_json(nlohmann::json& nlohmann_json_j, const SetInvisibleStatusRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["invisibleStatus"] = nlohmann_json_t.invisibleStatus;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, SetInvisibleStatusRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("invisibleStatus")) {
                nlohmann_json_j.at("invisibleStatus").get_to(nlohmann_json_t.invisibleStatus);
            }
        }
    };
}}}