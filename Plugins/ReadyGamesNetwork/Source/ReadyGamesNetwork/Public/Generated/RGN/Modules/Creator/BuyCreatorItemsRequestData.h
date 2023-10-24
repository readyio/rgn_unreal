#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct BuyCreatorItemsRequestData : public RGN::Model::Request::BaseRequestData {
        vector<string> itemIds;

        friend void to_json(nlohmann::json& nlohmann_json_j, const BuyCreatorItemsRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["itemIds"] = nlohmann_json_t.itemIds;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, BuyCreatorItemsRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("itemIds")) {
                auto json_itemIds = nlohmann_json_j.at("itemIds");
                if (!json_itemIds.is_null() && json_itemIds.is_array()) {
                    json_itemIds.get_to(nlohmann_json_t.itemIds);
                }
            }
        }
    };
}}}