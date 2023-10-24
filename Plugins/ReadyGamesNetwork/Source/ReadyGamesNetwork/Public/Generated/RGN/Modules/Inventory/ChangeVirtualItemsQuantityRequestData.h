#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "InventoryData.h"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct ChangeVirtualItemsQuantityRequestData : public RGN::Model::Request::BaseRequestData {
        vector<RGN::Modules::Inventory::InventoryData> inventoryDatas;

        friend void to_json(nlohmann::json& nlohmann_json_j, const ChangeVirtualItemsQuantityRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["inventoryDatas"] = nlohmann_json_t.inventoryDatas;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, ChangeVirtualItemsQuantityRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("inventoryDatas")) {
                auto json_inventoryDatas = nlohmann_json_j.at("inventoryDatas");
                if (!json_inventoryDatas.is_null() && json_inventoryDatas.is_array()) {
                    json_inventoryDatas.get_to(nlohmann_json_t.inventoryDatas);
                }
            }
        }
    };
}}}