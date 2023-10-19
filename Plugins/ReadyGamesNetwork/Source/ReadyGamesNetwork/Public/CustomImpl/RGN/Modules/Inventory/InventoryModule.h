#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/Inventory/InventoryModule.h"
#include "../../../../Generated/RGN/Modules/Inventory/InventoryItemsWithVirtualItemsData.h"
#include "../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include <string>

namespace RGN { namespace Modules { namespace Inventory {
	class InventoryModuleCustomImpl {
	public:
        static void AddToInventoryAsync(
            std::string virtualItemId,
            int32_t quantity,
            RGN::Modules::VirtualItems::Properties properties,
            const std::function<void(RGN::Modules::Inventory::AddToInventoryResponseData result)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                AddToInventoryAsync(RGNCore::GetUserId(), virtualItemId, quantity, properties, complete, fail);
            };

        static void AddToInventoryAsync(
            std::string userId,
            std::string virtualItemId,
            int32_t quantity,
            RGN::Modules::VirtualItems::Properties properties,
            const std::function<void(RGN::Modules::Inventory::AddToInventoryResponseData result)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                RGN::Modules::Inventory::InventoryItemData inventoryItemData;
                inventoryItemData.virtualItemId = virtualItemId;
                inventoryItemData.appIds = { RGNCore::GetAppId() };
                inventoryItemData.quantity = quantity;
                inventoryItemData.properties = { properties };
                RGN::Modules::Inventory::InventoryModule::AddToInventoryAsync(
                    userId,
                    inventoryItemData,
                    complete,
                    fail
                );
            };

        static void GetWithVirtualItemsDataForCurrentAppAsync(
            std::string startAfter,
            int32_t limit,
            const std::function<void(std::vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                GetWithVirtualItemsDataByAppIdsAsync({RGNCore::GetAppId()}, startAfter, limit, complete, fail);
            };

        static void GetWithVirtualItemsDataByAppIdsAsync(
            std::vector<string> appIds,
            std::string startAfter,
            int32_t limit,
            const std::function<void(std::vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["appId"] = RGNCore::GetAppId();
                bodyJson["startAfter"] = startAfter;
                bodyJson["limit"] = limit;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Inventory::InventoryItemsWithVirtualItemsData>
                    ("inventoryV2-getWithVirtualItemsDataByAppIds", bodyJson,
                    [complete](RGN::Modules::Inventory::InventoryItemsWithVirtualItemsData response) {
                        for (RGN::Modules::Inventory::InventoryItemData& item : response.items) {
                            for (RGN::Modules::VirtualItems::VirtualItem& virtualItem : response.virtualItems) {
                                if (item.id == virtualItem.id) {
                                    item.virtualItem = virtualItem;
                                    break;
                                }
                            }
                        }
                        complete(response.items);
                    },
                fail);
            };

        static RGN::Modules::Inventory::InventoryItemData ParseInventoryItemData(string json) {
                nlohmann::json result = json;
                return result.template get<RGN::Modules::Inventory::InventoryItemData>();
            };
        static vector<RGN::Modules::Inventory::InventoryItemData> ParseInventoryItemsData(string json) {
                nlohmann::json result = json;
                return result.template get<vector<RGN::Modules::Inventory::InventoryItemData>>();
            };
	};
}}}
