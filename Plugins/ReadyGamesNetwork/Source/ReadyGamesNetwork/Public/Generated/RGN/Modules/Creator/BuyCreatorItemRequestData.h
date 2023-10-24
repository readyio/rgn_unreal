#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct BuyCreatorItemRequestData : public RGN::Model::Request::BaseRequestData {
        string itemId;

        friend void to_json(nlohmann::json& nlohmann_json_j, const BuyCreatorItemRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["itemId"] = nlohmann_json_t.itemId;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, BuyCreatorItemRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("itemId")) {
                auto json_itemId = nlohmann_json_j.at("itemId");
                if (!json_itemId.is_null() && json_itemId.is_string()) {
                    json_itemId.get_to(nlohmann_json_t.itemId);
                }
            }
        }
    };
}}}