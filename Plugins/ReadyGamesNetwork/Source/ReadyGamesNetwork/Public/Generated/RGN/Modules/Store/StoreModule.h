#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "PurchaseResult.h"
#include "LootBox.h"
#include "../Inventory/InventoryItemData.h"
#include "StoreOffer.h"
#include "../VirtualItems/PriceInfo.h"
#include "TimeInfo.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    class StoreModule {
    public:
        static void BuyVirtualItemsAsync(
            vector<string> itemIds,
            vector<string> currencies,
            string offerId,
            const function<void(RGN::Modules::Store::PurchaseResult result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["itemIds"] = itemIds;
                requestData["currencies"] = currencies;
                requestData["offerId"] = offerId;
                requestData["version"] = 2;
                RGNCore::CallAPI(
                    "storeV2-buyVirtualItems",
                    requestData,
                    complete,
                    fail);
            };
        static void BuyStoreOfferAsync(
            string offerId,
            vector<string> currencies,
            const function<void(RGN::Modules::Store::PurchaseResult result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                requestData["currencies"] = currencies;
                requestData["version"] = 2;
                RGNCore::CallAPI(
                    "storeV2-buyStoreOffer",
                    requestData,
                    complete,
                    fail);
            };
        static void GetLootBoxesByIdsAsync(
            vector<string> ids,
            const function<void(vector<RGN::Modules::Store::LootBox> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ids"] = ids;
                RGNCore::CallAPI(
                    "storeV2-getLootBoxesByIds",
                    requestData,
                    complete,
                    fail);
            };
        static void GetLootBoxesByAppIdAsync(
            string appId,
            int32_t limit,
            string startAfter,
            const function<void(vector<RGN::Modules::Store::LootBox> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = appId;
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI(
                    "storeV2-getLootBoxesByAppId",
                    requestData,
                    complete,
                    fail);
            };
        static void GetLootBoxesForCurrentAppAsync(
            int32_t limit,
            string startAfter,
            const function<void(vector<RGN::Modules::Store::LootBox> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void LootboxIsAvailableAsync(
            string name,
            const function<void(bool result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["name"] = name;
                RGNCore::CallAPI(
                    "storeV2-lootBoxIsAvailable",
                    requestData,
                    complete,
                    fail);
            };
        static void GetAvailableLootBoxItemsCountAsync(
            string name,
            const function<void(int64_t result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["name"] = name;
                RGNCore::CallAPI(
                    "storeV2-lootBoxIsAvailable",
                    requestData,
                    complete,
                    fail);
            };
        static void OpenLootboxAsync(
            string name,
            const function<void(RGN::Modules::Inventory::InventoryItemData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["name"] = name;
                RGNCore::CallAPI(
                    "storeV2-openLootBox",
                    requestData,
                    complete,
                    fail);
            };
        static void AddVirtualItemsStoreOfferAsync(
            vector<string> appIds,
            vector<string> itemIds,
            string name,
            string description,
            vector<string> tags,
            int32_t quantity,
            const function<void(RGN::Modules::Store::StoreOffer result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["appIds"] = appIds;
                requestData["itemIds"] = itemIds;
                requestData["name"] = name;
                requestData["description"] = description;
                requestData["tags"] = tags;
                requestData["quantity"] = quantity;
                RGNCore::CallAPI(
                    "storeV2-addVirtualItemsStoreOffer",
                    requestData,
                    complete,
                    fail);
            };
        static void ImportStoreOffersFromCSVAsync(
            string content,
            string delimiter,
            CancellationToken cancellationToken,
            const function<void(vector<RGN::Modules::Store::StoreOffer> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["userId"] = userId;
                requestData["csvUtf8String"] = content;
                requestData["delimiter"] = delimiter;
                RGNCore::CallAPI(
                    "storeV2-importStoreOffersFromCSV",
                    requestData,
                    complete,
                    fail);
            };
        static void GetByTagsAsync(
            vector<string> tags,
            string appId,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["tags"] = tags;
                requestData["optionalAppId"] = appId;
                requestData["ignoreTimestamp"] = ignoreTimestamp;
                RGNCore::CallAPI(
                    "storeV2-getByTags",
                    requestData,
                    complete,
                    fail);
            };
        static void GetByTimestampAsync(
            string appId,
            System::DateTime timestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = appId;
                requestData["timestamp"] = new DateTimeOffset(timestamp).ToUnixTimeMilliseconds();
                RGNCore::CallAPI(
                    "storeV2-getByTimestamp",
                    requestData,
                    complete,
                    fail);
            };
        static void GetByAppIdsAsync(
            vector<string> appIds,
            int32_t limit,
            string startAfter,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["appIds"] = appIds;
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                requestData["ignoreTimestamp"] = ignoreTimestamp;
                RGNCore::CallAPI(
                    "storeV2-getByAppIds",
                    requestData,
                    complete,
                    fail);
            };
        static void GetForCurrentAppAsync(
            int32_t limit,
            string startAfter,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void GetWithVirtualItemsDataForCurrentAppAsync(
            int32_t limit,
            string startAfter,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void GetWithVirtualItemsDataByAppIdsAsync(
            vector<string> appIds,
            int32_t limit,
            string startAfter,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["appIds"] = appIds;
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                requestData["ignoreTimestamp"] = ignoreTimestamp;
                RGNCore::CallAPI(
                    "storeV2-getWithVirtualItemsDataByAppIds",
                    requestData,
                    complete,
                    fail);
            };
        static void GetByIdsAsync(
            vector<string> ids,
            const function<void(vector<RGN::Modules::Store::StoreOffer> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ids"] = ids;
                RGNCore::CallAPI(
                    "storeV2-getByIds",
                    requestData,
                    complete,
                    fail);
            };
        static void GetTagsAsync(
            string offerId,
            const function<void(vector<string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                RGNCore::CallAPI(
                    "storeV2-getTags",
                    requestData,
                    complete,
                    fail);
            };
        static void SetTagsAsync(
            string offerId,
            vector<string> tags,
            string appId,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                requestData["tags"] = tags;
                requestData["optionalAppId"] = appId;
                RGNCore::CallAPI(
                    "storeV2-setTags",
                    requestData,
                    complete,
                    fail);
            };
        static void SetNameAsync(
            string offerId,
            string name,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                requestData["name"] = name;
                RGNCore::CallAPI(
                    "storeV2-setName",
                    requestData,
                    complete,
                    fail);
            };
        static void SetDescriptionAsync(
            string offerId,
            string description,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                requestData["description"] = description;
                RGNCore::CallAPI(
                    "storeV2-setDescription",
                    requestData,
                    complete,
                    fail);
            };
        static void SetPricesAsync(
            string offerId,
            vector<RGN::Modules::VirtualItems::PriceInfo> prices,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void SetTimeAsync(
            string offerId,
            RGN::Modules::Store::TimeInfo time,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void SetImageUrlAsync(
            string offerId,
            string imageUrl,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                requestData["imageUrl"] = imageUrl;
                RGNCore::CallAPI(
                    "storeV2-setImageUrl",
                    requestData,
                    complete,
                    fail);
            };
        static void GetPropertiesAsync(
            string storeOfferId,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = storeOfferId;
                RGNCore::CallAPI(
                    "storeV2-getProperties",
                    requestData,
                    complete,
                    fail);
            };
        static void SetPropertiesAsync(
            string storeOfferId,
            string json,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = storeOfferId;
                requestData["json"] = json;
                RGNCore::CallAPI(
                    "storeV2-setProperties",
                    requestData,
                    complete,
                    fail);
            };
    };
}}}