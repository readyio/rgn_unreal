#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
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
            string& virtualItemId,
            int32_t quantity,
            RGN::Modules::VirtualItems::Properties& properties,
            const function<void(RGN::Modules::Inventory::AddToInventoryResponseData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddToInventoryAsync(
            string& userId,
            string& virtualItemId,
            int32_t quantity,
            RGN::Modules::VirtualItems::Properties& properties,
            const function<void(RGN::Modules::Inventory::AddToInventoryResponseData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddToInventoryAsync(
            string& userId,
            RGN::Modules::Inventory::InventoryItemData& inventoryData,
            const function<void(RGN::Modules::Inventory::AddToInventoryResponseData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void RemoveByVirtualItemIdAsync(
            string& userId,
            string& virtualItemId,
            int32_t quantity,
            const function<void(RGN::Modules::Inventory::RemoveByVirtualItemIdResponseData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void RemoveByInventoryItemIdAsync(
            string& userId,
            string& ownedItemId,
            int32_t quantity,
            const function<void(RGN::Modules::Inventory::RemoveByOwnedIdResponseData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetPropertiesAsync(
            string& ownedItemId,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetPropertiesAsync(
            string& ownedItemId,
            string& json,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetUpgradesAsync(
            string& ownedItemId,
            const function<void(vector<RGN::Modules::Inventory::UpgradesResponseData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void UpgradeAsync(
            string& ownedItemId,
            int32_t newUpgradeLevel,
            string& upgradeId,
            vector<RGN::Modules::Currency::Currency>& upgradePrice,
            const function<void(vector<RGN::Modules::Inventory::VirtualItemUpgrade>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByIdAsync(
            string& ownedItemId,
            const function<void(RGN::Modules::Inventory::InventoryItemData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByIdsAsync(
            vector<string>& ownedItemIds,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByVirtualItemIdsAsync(
            vector<string>& virtualItemIds,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetAllForCurrentAppAsync(
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByAppIdsAsync(
            vector<string>& appIds,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetWithVirtualItemsDataForCurrentAppAsync(
            string& startAfter,
            int32_t limit,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetWithVirtualItemsDataByAppIdsAsync(
            vector<string>& appIds,
            string& startAfter,
            int32_t limit,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void ParseInventoryItemData(
            string& json,
            const function<void(RGN::Modules::Inventory::InventoryItemData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void ParseInventoryItemsData(
            string& json,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByTagsAsync(
            vector<string>& tags,
            string& appId,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetTagsAsync(
            string& ownedItemId,
            const function<void(vector<string>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetTagsAsync(
            string& ownedItemId,
            vector<string>& tags,
            string& appId,
            const function<void(vector<string>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}