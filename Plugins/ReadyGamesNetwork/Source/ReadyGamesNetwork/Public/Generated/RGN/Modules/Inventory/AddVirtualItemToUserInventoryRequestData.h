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
                auto json_appPackageName = nlohmann_json_j.at("appPackageName");
                if (!json_appPackageName.is_null() && json_appPackageName.is_string()) {
                    json_appPackageName.get_to(nlohmann_json_t.appPackageName);
                }
            }
            if (nlohmann_json_j.contains("userId")) {
                auto json_userId = nlohmann_json_j.at("userId");
                if (!json_userId.is_null() && json_userId.is_string()) {
                    json_userId.get_to(nlohmann_json_t.userId);
                }
            }
            if (nlohmann_json_j.contains("virtualItemInventoryData")) {
                auto json_virtualItemInventoryData = nlohmann_json_j.at("virtualItemInventoryData");
                if (!json_virtualItemInventoryData.is_null()) {
                    json_virtualItemInventoryData.get_to(nlohmann_json_t.virtualItemInventoryData);
                }
            }
        }
    };
}}}