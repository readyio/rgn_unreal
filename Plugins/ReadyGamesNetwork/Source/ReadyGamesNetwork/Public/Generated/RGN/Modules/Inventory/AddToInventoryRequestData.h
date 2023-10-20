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
    struct AddToInventoryRequestData : public RGN::Model::Request::BaseRequestData {
        vector<RGN::Modules::Inventory::InventoryData> inventoryDatas;

        friend void to_json(nlohmann::json& nlohmann_json_j, const AddToInventoryRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["inventoryDatas"] = nlohmann_json_t.inventoryDatas;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, AddToInventoryRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("inventoryDatas")) {
                nlohmann_json_j.at("inventoryDatas").get_to(nlohmann_json_t.inventoryDatas);
            }
        }
    };
}}}