#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../CustomImpl/RGN/Modules/Inventory/InventoryModule.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "../VirtualItems/Properties.h"
#include "AddToInventoryResponseData.h"
#include "InventoryItemData.h"
#include "AddVirtualItemToUserInventoryRequestData.h"
#include "RemoveByVirtualItemIdResponseData.h"
#include "RemoveByOwnedIdResponseData.h"
#include "UpgradesResponseData.h"
#include "../Currency/Currency.h"
#include "VirtualItemUpgrade.h"
#include "InventoryItemsWithVirtualItemsData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    class InventoryModule {
    public:
        /**
         * Asynchronously adds a specified quantity of a virtual item to the current logged in user's inventory.
         * @param virtualItemId - The unique identifier of the virtual item to be added to the inventory.
         * @param quantity - The quantity of the virtual item to be added. The default value is 1.
         * @param properties - Optional additional properties associated with the item. The default is null.
         * @return A Task that represents the asynchronous operation.
         * The task result contains an T:RGN.Modules.Inventory.AddToInventoryResponseData object which holds the response data of the operation.
         * @throw: Thrown when the user is not logged in.
         */
        static void AddToInventoryAsync(
            const string& virtualItemId,
            const int32_t quantity,
            const RGN::Modules::VirtualItems::Properties& properties,
            const function<void(const RGN::Modules::Inventory::AddToInventoryResponseData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Inventory::InventoryModuleCustomImpl::AddToInventoryAsync(
                    virtualItemId,
                    quantity,
                    properties,
                    complete,
                    fail);
            };
        /**
         * Asynchronously adds a specified quantity of a virtual item to the inventory for a specified user.
         * @param userId - The unique identifier of the user whose inventory will be updated.
         * @param virtualItemId - The unique identifier of the virtual item to be added to the user's inventory.
         * @param quantity - The quantity of the virtual item to be added. The default value is 1.
         * @param properties - Optional additional properties associated with the item. The default is null.
         * @return A Task that represents the asynchronous operation.
         * The task result contains an T:RGN.Modules.Inventory.AddToInventoryResponseData object which holds the response data of the operation.
         * @throw: Thrown when the ownedItemId is null or empty.
         */
        static void AddToInventoryAsync(
            const string& userId,
            const string& virtualItemId,
            const int32_t quantity,
            const RGN::Modules::VirtualItems::Properties& properties,
            const function<void(const RGN::Modules::Inventory::AddToInventoryResponseData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Inventory::InventoryModuleCustomImpl::AddToInventoryAsync(
                    userId,
                    virtualItemId,
                    quantity,
                    properties,
                    complete,
                    fail);
            };
        /**
         * Asynchronously adds a specified inventory item to the inventory for a specified user.
         * @param userId - The unique identifier of the user whose inventory will be updated.
         * @param inventoryData - The data of the inventory item to be added to the user's inventory. Includes item's unique identifier, quantity and optional additional properties.
         * @return A Task that represents the asynchronous operation.
         * The task result contains an T:RGN.Modules.Inventory.AddToInventoryResponseData object which holds the response data of the operation.
         * @throw: Thrown when the userId or inventoryData.ownedItemId is null or empty.
         */
        static void AddToInventoryAsync(
            const string& userId,
            const RGN::Modules::Inventory::InventoryItemData& inventoryData,
            const function<void(const RGN::Modules::Inventory::AddToInventoryResponseData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Inventory::AddVirtualItemToUserInventoryRequestData requestData;
                requestData.userId = userId;
                requestData.virtualItemInventoryData = inventoryData;
                RGNCore::CallAPI<RGN::Modules::Inventory::AddVirtualItemToUserInventoryRequestData, RGN::Modules::Inventory::AddToInventoryResponseData>(
                    "inventoryV2-addToInventory",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Asynchronously removes a specified quantity of a virtual item from a user's inventory by its unique identifier.
         * @param userId - The unique identifier of the user whose inventory to modify.
         * @param virtualItemId - The unique identifier of the virtual item to remove.
         * @param quantity - The quantity of the virtual item to remove. Must be a positive number.
         * @return A task that represents the asynchronous operation.
         * The task result contains a T:RGN.Modules.Inventory.RemoveByVirtualItemIdResponseData object which holds the server's response data.
         * @throw: Thrown when virtualItemId is null or empty.
         */
        static void RemoveByVirtualItemIdAsync(
            const string& userId,
            const string& virtualItemId,
            const int32_t quantity,
            const function<void(const RGN::Modules::Inventory::RemoveByVirtualItemIdResponseData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["userId"] = userId;
                requestData["virtualItemId"] = virtualItemId;
                requestData["quantity"] = quantity;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Inventory::RemoveByVirtualItemIdResponseData>(
                    "inventoryV2-removeByVirtualItemId",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Asynchronously removes a specified quantity of a virtual item from a user's inventory by its owned item identifier.
         * @param userId - The unique identifier of the user whose inventory to modify.
         * @param ownedItemId - The unique identifier of the owned item to remove.
         * @param quantity - The quantity of the owned item to remove. Must be a positive number. Default is 1.
         * @return A task that represents the asynchronous operation.
         * The task result contains a T:RGN.Modules.Inventory.RemoveByOwnedIdResponseData object which holds the server's response data.
         * @throw: Thrown when ownedItemId is null or empty.
         */
        static void RemoveByInventoryItemIdAsync(
            const string& userId,
            const string& ownedItemId,
            const int32_t quantity,
            const function<void(const RGN::Modules::Inventory::RemoveByOwnedIdResponseData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["userId"] = userId;
                requestData["ownedItemId"] = ownedItemId;
                requestData["quantity"] = quantity;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Inventory::RemoveByOwnedIdResponseData>(
                    "inventoryV2-removeByInventoryItemId",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Returns json string or throws an exception if there are no json for virtual item
         * @return Returns json as string
         */
        static void GetPropertiesAsync(
            const string& ownedItemId,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-getProperties",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["properties"].template get<string>());
                    },
                    fail);
            };
        /**
         * Set json on a given ownedItemId.
         * @return Returns json as string
         */
        static void SetPropertiesAsync(
            const string& ownedItemId,
            const string& json,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["json"] = json;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-setProperties",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["properties"].template get<string>());
                    },
                    fail);
            };
        /**
         * Get user owned item upgrades, returns all upgrades for all owned items for virtual item ownedItemId
         * @param ownedItemId - The ownedItemId of the virtual item to search in inventory for
         */
        static void GetUpgradesAsync(
            const string& ownedItemId,
            const function<void(const vector<RGN::Modules::Inventory::UpgradesResponseData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-getUpgrades",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["upgrades"].template get<vector<RGN::Modules::Inventory::UpgradesResponseData>>());
                    },
                    fail);
            };
        static void UpgradeAsync(
            const string& ownedItemId,
            const int32_t newUpgradeLevel,
            const string& upgradeId,
            const vector<RGN::Modules::Currency::Currency>& upgradePrice,
            const function<void(const vector<RGN::Modules::Inventory::VirtualItemUpgrade>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["newUpgradeLevel"] = newUpgradeLevel;
                requestData["upgradeId"] = upgradeId;
                requestData["upgradePrice"] = upgradePrice;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-upgrade",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["upgrades"].template get<vector<RGN::Modules::Inventory::VirtualItemUpgrade>>());
                    },
                    fail);
            };
        /**
         * Get single owned virtual item inventory data by ownedItemId
         * @param ownedItemId - The id of the owned item in users inventory
         */
        static void GetByIdAsync(
            const string& ownedItemId,
            const function<void(const RGN::Modules::Inventory::InventoryItemData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-getById",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["inventoryItem"].template get<RGN::Modules::Inventory::InventoryItemData>());
                    },
                    fail);
            };
        static void GetByIdsAsync(
            const vector<string>& ownedItemIds,
            const function<void(const vector<RGN::Modules::Inventory::InventoryItemData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemIds"] = ownedItemIds;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-getByIds",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["inventoryItems"].template get<vector<RGN::Modules::Inventory::InventoryItemData>>());
                    },
                    fail);
            };
        static void GetByVirtualItemIdsAsync(
            const vector<string>& virtualItemIds,
            const function<void(const vector<RGN::Modules::Inventory::InventoryItemData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["virtualItemIds"] = virtualItemIds;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-getByVirtualItemIds",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["inventoryItems"].template get<vector<RGN::Modules::Inventory::InventoryItemData>>());
                    },
                    fail);
            };
        static void GetAllForCurrentAppAsync(
            const function<void(const vector<RGN::Modules::Inventory::InventoryItemData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-getByAppId",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["inventoryItems"].template get<vector<RGN::Modules::Inventory::InventoryItemData>>());
                    },
                    fail);
            };
        static void GetByAppIdsAsync(
            const vector<string>& appIds,
            const function<void(const vector<RGN::Modules::Inventory::InventoryItemData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appIds"] = appIds;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-getByAppIds",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["inventoryItems"].template get<vector<RGN::Modules::Inventory::InventoryItemData>>());
                    },
                    fail);
            };
        /**
         * Get multiple owned virtual items inventory data for current app with the Virtual Item data included
         */
        static void GetWithVirtualItemsDataForCurrentAppAsync(
            const string& startAfter,
            const int32_t limit,
            const function<void(const vector<RGN::Modules::Inventory::InventoryItemData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Inventory::InventoryModuleCustomImpl::GetWithVirtualItemsDataForCurrentAppAsync(
                    startAfter,
                    limit,
                    complete,
                    fail);
            };
        static void GetWithVirtualItemsDataByAppIdsAsync(
            const vector<string>& appIds,
            const string& startAfter,
            const int32_t limit,
            const function<void(const vector<RGN::Modules::Inventory::InventoryItemData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Inventory::InventoryModuleCustomImpl::GetWithVirtualItemsDataByAppIdsAsync(
                    appIds,
                    startAfter,
                    limit,
                    complete,
                    fail);
            };
        /**
         * Parses a JSON string representation of an T:RGN.Modules.Inventory.InventoryItemData object.
         * @param json - The JSON string representation of an T:RGN.Modules.Inventory.InventoryItemData object.
         * @return An T:RGN.Modules.Inventory.InventoryItemData object represented by the JSON string. 
         * Returns null if the JSON string does not represent a valid T:RGN.Modules.Inventory.InventoryItemData object.
         * @throw: Thrown when json is null or empty.
         */
        static RGN::Modules::Inventory::InventoryItemData ParseInventoryItemData(const string& json) {
                return RGN::Modules::Inventory::InventoryModuleCustomImpl::ParseInventoryItemData(
                    json);
            };
        /**
         * Parses a JSON string representation of a list of T:RGN.Modules.Inventory.InventoryItemData objects.
         * @param json - The JSON string representation of a list of T:RGN.Modules.Inventory.InventoryItemData objects.
         * @return A list of T:RGN.Modules.Inventory.InventoryItemData objects represented by the JSON string.
         * Returns null if the JSON string does not represent a valid list of T:RGN.Modules.Inventory.InventoryItemData objects.
         * @throw: Thrown when json is null or empty.
         */
        static vector<RGN::Modules::Inventory::InventoryItemData> ParseInventoryItemsData(const string& json) {
                return RGN::Modules::Inventory::InventoryModuleCustomImpl::ParseInventoryItemsData(
                    json);
            };
        static void GetByTagsAsync(
            const vector<string>& tags,
            const string& appId,
            const function<void(const vector<RGN::Modules::Inventory::InventoryItemData>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = appId;
                requestData["tags"] = tags;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-getByTags",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["inventoryItems"].template get<vector<RGN::Modules::Inventory::InventoryItemData>>());
                    },
                    fail);
            };
        /**
         * Asynchronously retrieves the tags of an owned item in the inventory by its identifier for current logged in user
         * @param ownedItemId - The unique identifier of the owned item for which to retrieve tags.
         * @return A task that represents the asynchronous operation.
         * The task result contains a list of tags associated with the owned item.
         * @throw: Thrown when ownedItemId is null or empty.
         */
        static void GetTagsAsync(
            const string& ownedItemId,
            const function<void(const vector<string>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-getTags",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["tags"].template get<vector<string>>());
                    },
                    fail);
            };
        static void SetTagsAsync(
            const string& ownedItemId,
            const vector<string>& tags,
            const string& appId,
            const function<void(const vector<string>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = appId;
                requestData["ownedItemId"] = ownedItemId;
                requestData["tags"] = tags;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "inventoryV2-setTags",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["tags"].template get<vector<string>>());
                    },
                    fail);
            };
    };
}}}