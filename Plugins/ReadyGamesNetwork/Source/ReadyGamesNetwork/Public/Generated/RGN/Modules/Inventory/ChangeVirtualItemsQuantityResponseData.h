#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../VirtualItems/VirtualItem.h"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct ChangeVirtualItemsQuantityResponseData : public RGN::Model::Request::BaseRequestData {
        vector<RGN::Modules::VirtualItems::VirtualItem> updatedItems;

        friend void to_json(nlohmann::json& nlohmann_json_j, const ChangeVirtualItemsQuantityResponseData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["updatedItems"] = nlohmann_json_t.updatedItems;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, ChangeVirtualItemsQuantityResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("updatedItems")) {
                auto json_updatedItems = nlohmann_json_j.at("updatedItems");
                if (!json_updatedItems.is_null() && json_updatedItems.is_array()) {
                    json_updatedItems.get_to(nlohmann_json_t.updatedItems);
                }
            }
        }
    };
}}}