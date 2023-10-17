#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "../VirtualItems/Properties.h"
#include "AddToInventoryResponseData.h"
#include "InventoryItemData.h"
#include "RemoveByVirtualItemIdResponseData.h"
#include "RemoveByOwnedIdResponseData.h"
#include "UpgradesResponseData.h"
#include "../Currency/Currency.h"
#include "VirtualItemUpgrade.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    class InventoryModule {
    public:
        static void AddToInventoryAsync(
            string virtualItemId,
            int32_t quantity,
            RGN::Modules::VirtualItems::Properties properties,
            const function<void(RGN::Modules::Inventory::AddToInventoryResponseData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void AddToInventoryAsync(
            string userId,
            string virtualItemId,
            int32_t quantity,
            RGN::Modules::VirtualItems::Properties properties,
            const function<void(RGN::Modules::Inventory::AddToInventoryResponseData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void AddToInventoryAsync(
            string userId,
            RGN::Modules::Inventory::InventoryItemData inventoryData,
            const function<void(RGN::Modules::Inventory::AddToInventoryResponseData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void RemoveByVirtualItemIdAsync(
            string userId,
            string virtualItemId,
            int32_t quantity,
            const function<void(RGN::Modules::Inventory::RemoveByVirtualItemIdResponseData result)>& complete,
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
            string userId,
            string ownedItemId,
            int32_t quantity,
            const function<void(RGN::Modules::Inventory::RemoveByOwnedIdResponseData result)>& complete,
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
            string ownedItemId,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-getProperties",
                    requestData,
                    complete,
                    fail);
            };
        static void SetPropertiesAsync(
            string ownedItemId,
            string json,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["json"] = json;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-setProperties",
                    requestData,
                    complete,
                    fail);
            };
        static void GetUpgradesAsync(
            string ownedItemId,
            const function<void(vector<RGN::Modules::Inventory::UpgradesResponseData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-getUpgrades",
                    requestData,
                    complete,
                    fail);
            };
        static void UpgradeAsync(
            string ownedItemId,
            int32_t newUpgradeLevel,
            string upgradeId,
            vector<RGN::Modules::Currency::Currency> upgradePrice,
            const function<void(vector<RGN::Modules::Inventory::VirtualItemUpgrade> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["newUpgradeLevel"] = newUpgradeLevel;
                requestData["upgradeId"] = upgradeId;
                requestData["upgradePrice"] = upgradePrice;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-upgrade",
                    requestData,
                    complete,
                    fail);
            };
        static void GetByIdAsync(
            string ownedItemId,
            const function<void(RGN::Modules::Inventory::InventoryItemData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-getById",
                    requestData,
                    complete,
                    fail);
            };
        static void GetByIdsAsync(
            vector<string> ownedItemIds,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemIds"] = ownedItemIds;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-getByIds",
                    requestData,
                    complete,
                    fail);
            };
        static void GetByVirtualItemIdsAsync(
            vector<string> virtualItemIds,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["virtualItemIds"] = virtualItemIds;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-getByVirtualItemIds",
                    requestData,
                    complete,
                    fail);
            };
        static void GetAllForCurrentAppAsync(
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-getByAppId",
                    requestData,
                    complete,
                    fail);
            };
        static void GetByAppIdsAsync(
            vector<string> appIds,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appIds"] = appIds;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-getByAppIds",
                    requestData,
                    complete,
                    fail);
            };
        static void GetWithVirtualItemsDataForCurrentAppAsync(
            string startAfter,
            int32_t limit,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void GetWithVirtualItemsDataByAppIdsAsync(
            vector<string> appIds,
            string startAfter,
            int32_t limit,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appIds"] = appIds;
                requestData["startAfter"] = startAfter;
                requestData["limit"] = limit;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Inventory::InventoryItemsWithVirtualItemsData>(
                    "inventoryV2-getWithVirtualItemsDataByAppIds",
                    requestData,
                    complete,
                    fail);
            };
        static RGN::Modules::Inventory::InventoryItemData ParseInventoryItemData(string json) {
            };
        static vector<RGN::Modules::Inventory::InventoryItemData> ParseInventoryItemsData(string json) {
            };
        static void GetByTagsAsync(
            vector<string> tags,
            string appId,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = appId;
                requestData["tags"] = tags;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-getByTags",
                    requestData,
                    complete,
                    fail);
            };
        static void GetTagsAsync(
            string ownedItemId,
            const function<void(vector<string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ownedItemId"] = ownedItemId;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-getTags",
                    requestData,
                    complete,
                    fail);
            };
        static void SetTagsAsync(
            string ownedItemId,
            vector<string> tags,
            string appId,
            const function<void(vector<string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = appId;
                requestData["ownedItemId"] = ownedItemId;
                requestData["tags"] = tags;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI(
                    "inventoryV2-setTags",
                    requestData,
                    complete,
                    fail);
            };
    };
}}}