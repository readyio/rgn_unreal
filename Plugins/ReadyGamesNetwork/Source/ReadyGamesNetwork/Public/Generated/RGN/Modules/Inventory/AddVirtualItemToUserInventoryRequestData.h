#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "InventoryItemData.h"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    /**
     * Request to add new item in user inventory
     */
    struct AddVirtualItemToUserInventoryRequestData : public RGN::Model::Request::BaseRequestData {
        string userId;
        RGN::Modules::Inventory::InventoryItemData virtualItemInventoryData;

        friend void to_json(nlohmann::json& nlohmann_json_j, const AddVirtualItemToUserInventoryRequestData& nlohmann_json_t) {
            nlohmann_json_j["appPackageName"] = nlohmann_json_t.appPackageName;
            nlohmann_json_j["userId"] = nlohmann_json_t.userId;
            nlohmann_json_j["virtualItemInventoryData"] = nlohmann_json_t.virtualItemInventoryData;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, AddVirtualItemToUserInventoryRequestData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appPackageName")) {
                nlohmann_json_j.at("appPackageName").get_to(nlohmann_json_t.appPackageName);
            }
            if (nlohmann_json_j.contains("userId")) {
                nlohmann_json_j.at("userId").get_to(nlohmann_json_t.userId);
            }
            if (nlohmann_json_j.contains("virtualItemInventoryData")) {
                nlohmann_json_j.at("virtualItemInventoryData").get_to(nlohmann_json_t.virtualItemInventoryData);
            }
        }
    };
}}}