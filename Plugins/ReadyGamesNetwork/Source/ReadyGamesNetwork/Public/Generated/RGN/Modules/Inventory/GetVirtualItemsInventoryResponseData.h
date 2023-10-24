#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "InventoryItemData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct GetVirtualItemsInventoryResponseData {
        vector<RGN::Modules::Inventory::InventoryItemData> virtualItemInventoryDatas;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetVirtualItemsInventoryResponseData& nlohmann_json_t) {
            nlohmann_json_j["virtualItemInventoryDatas"] = nlohmann_json_t.virtualItemInventoryDatas;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetVirtualItemsInventoryResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("virtualItemInventoryDatas")) {
                auto json_virtualItemInventoryDatas = nlohmann_json_j.at("virtualItemInventoryDatas");
                if (!json_virtualItemInventoryDatas.is_null() && json_virtualItemInventoryDatas.is_array()) {
                    json_virtualItemInventoryDatas.get_to(nlohmann_json_t.virtualItemInventoryDatas);
                }
            }
        }
    };
}}}