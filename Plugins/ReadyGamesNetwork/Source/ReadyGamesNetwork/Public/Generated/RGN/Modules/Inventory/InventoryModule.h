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
        static void AddToInventoryAsync(
            const string& virtualItemId,
            const int32_t quantity,
            const RGN::Modules::VirtualItems::Properties& properties,
            const function<void(const RGN::Modules::Inventory::AddToInventoryResponseData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Inventory::InventoryModuleCustomImpl::AddToInventoryAsync(
                    virtualItemId,
                    quantity,
                    properties,
                    complete,
                    fail);
            };
        static void AddToInventoryAsync(
            const string& userId,
            const string& virtualItemId,
            const int32_t quantity,
            const RGN::Modules::VirtualItems::Properties& properties,
            const function<void(const RGN::Modules::Inventory::AddToInventoryResponseData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Inventory::InventoryModuleCustomImpl::AddToInventoryAsync(
                    userId,
                    virtualItemId,
                    quantity,
                    properties,
                    complete,
                    fail);
            };
        static void AddToInventoryAsync(
            const string& userId,
            const RGN::Modules::Inventory::InventoryItemData& inventoryData,
            const function<void(const RGN::Modules::Inventory::AddToInventoryResponseData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Inventory::AddVirtualItemToUserInventoryRequestData requestData;
                requestData.userId = userId;
                requestData.virtualItemInventoryData = inventoryData;
                RGNCore::CallAPI<RGN::Modules::Inventory::AddVirtualItemToUserInventoryRequestData, RGN::Modules::Inventory::AddToInventoryResponseData>(
                    "inventoryV2-addToInventory",
                    requestData,
                    complete,
                    fail);
            };
        static void RemoveByVirtualItemIdAsync(
            const string& userId,
            const string& virtualItemId,
            const int32_t quantity,
            const function<void(const RGN::Modules::Inventory::RemoveByVirtualItemIdResponseData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
        static void RemoveByInventoryItemIdAsync(
            const string& userId,
            const string& ownedItemId,
            const int32_t quantity,
            const function<void(const RGN::Modules::Inventory::RemoveByOwnedIdResponseData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
        static void GetPropertiesAsync(
            const string& ownedItemId,
            const function<void(const string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
        static void SetPropertiesAsync(
            const string& ownedItemId,
            const string& json,
            const function<void(const string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
        static void GetUpgradesAsync(
            const string& ownedItemId,
            const function<void(const vector<RGN::Modules::Inventory::UpgradesResponseData>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
            const function<void(int httpCode, string error)>& fail) {
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
        static void GetByIdAsync(
            const string& ownedItemId,
            const function<void(const RGN::Modules::Inventory::InventoryItemData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
            const function<void(int httpCode, string error)>& fail) {
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
            const function<void(int httpCode, string error)>& fail) {
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
            const function<void(int httpCode, string error)>& fail) {
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
            const function<void(int httpCode, string error)>& fail) {
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
        static void GetWithVirtualItemsDataForCurrentAppAsync(
            const string& startAfter,
            const int32_t limit,
            const function<void(const vector<RGN::Modules::Inventory::InventoryItemData>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Inventory::InventoryModuleCustomImpl::GetWithVirtualItemsDataByAppIdsAsync(
                    appIds,
                    startAfter,
                    limit,
                    complete,
                    fail);
            };
        static RGN::Modules::Inventory::InventoryItemData ParseInventoryItemData(const string& json) {
                return RGN::Modules::Inventory::InventoryModuleCustomImpl::ParseInventoryItemData(
                    json);
            };
        static vector<RGN::Modules::Inventory::InventoryItemData> ParseInventoryItemsData(const string& json) {
                return RGN::Modules::Inventory::InventoryModuleCustomImpl::ParseInventoryItemsData(
                    json);
            };
        static void GetByTagsAsync(
            const vector<string>& tags,
            const string& appId,
            const function<void(const vector<RGN::Modules::Inventory::InventoryItemData>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
        static void GetTagsAsync(
            const string& ownedItemId,
            const function<void(const vector<string>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
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
            const function<void(int httpCode, string error)>& fail) {
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