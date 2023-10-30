#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../CustomImpl/RGN/Modules/Store/StoreModule.h"
#include "../../../../Core/CancellationToken.h"
#include "BuyVirtualItemsResponse.h"
#include "PurchaseResult.h"
#include "BuyStoreOfferResponse.h"
#include "GetLootBoxesResponse.h"
#include "LootBox.h"
#include "LootboxIsAvailableResponse.h"
#include "PurchaseItem.h"
#include "../Inventory/InventoryItemData.h"
#include "StoreOffer.h"
#include "ImportStoreOffersFromCSVResponse.h"
#include "GetStoreOffersResponse.h"
#include "GetStoreOffersWithVirtualItemsDataResponse.h"
#include "GetStoreOfferTagsResponse.h"
#include "../VirtualItems/PriceInfo.h"
#include "SetPricesRequestData.h"
#include "TimeInfo.h"
#include "SetTimeRequestData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    class StoreModule {
    public:
        static void BuyVirtualItemsAsync(
            const vector<string>& itemIds,
            const vector<string>& currencies,
            const string& offerId,
            const function<void(const RGN::Modules::Store::PurchaseResult& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Store::StoreModuleCustomImpl::BuyVirtualItemsAsync(
                    itemIds,
                    currencies,
                    offerId,
                    complete,
                    fail);
            };
        static void BuyStoreOfferAsync(
            const string& offerId,
            const vector<string>& currencies,
            const function<void(const RGN::Modules::Store::PurchaseResult& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Store::StoreModuleCustomImpl::BuyStoreOfferAsync(
                    offerId,
                    currencies,
                    complete,
                    fail);
            };
        static void GetLootBoxesByIdsAsync(
            const vector<string>& ids,
            const function<void(const vector<RGN::Modules::Store::LootBox>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ids"] = ids;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::GetLootBoxesResponse>(
                    "storeV2-getLootBoxesByIds",
                    requestData,
                    [complete] (const RGN::Modules::Store::GetLootBoxesResponse& result) {
                        complete(result.lootBoxes);
                    },
                    fail);
            };
        static void GetLootBoxesByAppIdAsync(
            const string& appId,
            const int32_t limit,
            const string& startAfter,
            const function<void(const vector<RGN::Modules::Store::LootBox>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = appId;
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::GetLootBoxesResponse>(
                    "storeV2-getLootBoxesByAppId",
                    requestData,
                    [complete] (const RGN::Modules::Store::GetLootBoxesResponse& result) {
                        complete(result.lootBoxes);
                    },
                    fail);
            };
        static void GetLootBoxesForCurrentAppAsync(
            const int32_t limit,
            const string& startAfter,
            const function<void(const vector<RGN::Modules::Store::LootBox>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Store::StoreModuleCustomImpl::GetLootBoxesForCurrentAppAsync(
                    limit,
                    startAfter,
                    complete,
                    fail);
            };
        static void LootboxIsAvailableAsync(
            const string& name,
            const function<void(const bool result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["name"] = name;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::LootboxIsAvailableResponse>(
                    "storeV2-lootBoxIsAvailable",
                    requestData,
                    [complete] (const RGN::Modules::Store::LootboxIsAvailableResponse& result) {
                        complete(result.isAvailable);
                    },
                    fail);
            };
        static void GetAvailableLootBoxItemsCountAsync(
            const string& name,
            const function<void(const int64_t result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["name"] = name;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::LootboxIsAvailableResponse>(
                    "storeV2-lootBoxIsAvailable",
                    requestData,
                    [complete] (const RGN::Modules::Store::LootboxIsAvailableResponse& result) {
                        complete(result.count);
                    },
                    fail);
            };
        static void OpenLootboxAsync(
            const string& name,
            const function<void(const RGN::Modules::Inventory::InventoryItemData& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Store::StoreModuleCustomImpl::OpenLootboxAsync(
                    name,
                    complete,
                    fail);
            };
        static void AddVirtualItemsStoreOfferAsync(
            const vector<string>& appIds,
            const vector<string>& itemIds,
            const string& name,
            const string& description,
            const vector<string>& tags,
            const int32_t quantity,
            const function<void(const RGN::Modules::Store::StoreOffer& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["appIds"] = appIds;
                requestData["itemIds"] = itemIds;
                requestData["name"] = name;
                requestData["description"] = description;
                requestData["tags"] = tags;
                requestData["quantity"] = quantity;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::StoreOffer>(
                    "storeV2-addVirtualItemsStoreOffer",
                    requestData,
                    complete,
                    fail);
            };
        static void ImportStoreOffersFromCSVAsync(
            const string& content,
            const string& delimiter,
            const CancellationToken& cancellationToken,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["userId"] = RGNCore::GetUserId();
                requestData["csvUtf8String"] = content;
                requestData["delimiter"] = delimiter;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::ImportStoreOffersFromCSVResponse>(
                    "storeV2-importStoreOffersFromCSV",
                    requestData,
                    [complete] (const RGN::Modules::Store::ImportStoreOffersFromCSVResponse& result) {
                        complete(result.offers);
                    },
                    fail);
            };
        static void GetByTagsAsync(
            const vector<string>& tags,
            const string& appId,
            const bool ignoreTimestamp,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["tags"] = tags;
                requestData["optionalAppId"] = appId;
                requestData["ignoreTimestamp"] = ignoreTimestamp;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::GetStoreOffersResponse>(
                    "storeV2-getByTags",
                    requestData,
                    [complete] (const RGN::Modules::Store::GetStoreOffersResponse& result) {
                        complete(result.offers);
                    },
                    fail);
            };
        static void GetByTimestampAsync(
            const string& appId,
            const int64_t timestamp,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = appId;
                requestData["timestamp"] = timestamp;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::GetStoreOffersResponse>(
                    "storeV2-getByTimestamp",
                    requestData,
                    [complete] (const RGN::Modules::Store::GetStoreOffersResponse& result) {
                        complete(result.offers);
                    },
                    fail);
            };
        static void GetByAppIdsAsync(
            const vector<string>& appIds,
            const int32_t limit,
            const string& startAfter,
            const bool ignoreTimestamp,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["appIds"] = appIds;
                requestData["limit"] = limit;
                requestData["startAfter"] = startAfter;
                requestData["ignoreTimestamp"] = ignoreTimestamp;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::GetStoreOffersResponse>(
                    "storeV2-getByAppIds",
                    requestData,
                    [complete] (const RGN::Modules::Store::GetStoreOffersResponse& result) {
                        complete(result.offers);
                    },
                    fail);
            };
        static void GetForCurrentAppAsync(
            const int32_t limit,
            const string& startAfter,
            const bool ignoreTimestamp,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Store::StoreModuleCustomImpl::GetForCurrentAppAsync(
                    limit,
                    startAfter,
                    ignoreTimestamp,
                    complete,
                    fail);
            };
        static void GetWithVirtualItemsDataForCurrentAppAsync(
            const int32_t limit,
            const string& startAfter,
            const bool ignoreTimestamp,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Store::StoreModuleCustomImpl::GetWithVirtualItemsDataForCurrentAppAsync(
                    limit,
                    startAfter,
                    ignoreTimestamp,
                    complete,
                    fail);
            };
        static void GetWithVirtualItemsDataByAppIdsAsync(
            const vector<string>& appIds,
            const int32_t limit,
            const string& startAfter,
            const bool ignoreTimestamp,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Store::StoreModuleCustomImpl::GetWithVirtualItemsDataByAppIdsAsync(
                    appIds,
                    limit,
                    startAfter,
                    ignoreTimestamp,
                    complete,
                    fail);
            };
        static void GetByIdsAsync(
            const vector<string>& ids,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["ids"] = ids;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::GetStoreOffersResponse>(
                    "storeV2-getByIds",
                    requestData,
                    [complete] (const RGN::Modules::Store::GetStoreOffersResponse& result) {
                        complete(result.offers);
                    },
                    fail);
            };
        static void GetTagsAsync(
            const string& offerId,
            const function<void(const vector<string>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Store::GetStoreOfferTagsResponse>(
                    "storeV2-getTags",
                    requestData,
                    [complete] (const RGN::Modules::Store::GetStoreOfferTagsResponse& result) {
                        complete(result.tags);
                    },
                    fail);
            };
        static void SetTagsAsync(
            const string& offerId,
            const vector<string>& tags,
            const string& appId,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                requestData["tags"] = tags;
                requestData["optionalAppId"] = appId;
                RGNCore::CallAPI<nlohmann::json>(
                    "storeV2-setTags",
                    requestData,
                    complete,
                    fail);
            };
        static void SetNameAsync(
            const string& offerId,
            const string& name,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                requestData["name"] = name;
                RGNCore::CallAPI<nlohmann::json>(
                    "storeV2-setName",
                    requestData,
                    complete,
                    fail);
            };
        static void SetDescriptionAsync(
            const string& offerId,
            const string& description,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                requestData["description"] = description;
                RGNCore::CallAPI<nlohmann::json>(
                    "storeV2-setDescription",
                    requestData,
                    complete,
                    fail);
            };
        static void SetPricesAsync(
            const string& offerId,
            const vector<RGN::Modules::VirtualItems::PriceInfo>& prices,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Store::SetPricesRequestData requestData;
                requestData.offerId = offerId;
                requestData.prices = prices;
                RGNCore::CallAPI<RGN::Modules::Store::SetPricesRequestData>(
                    "storeV2-setPrices",
                    requestData,
                    complete,
                    fail);
            };
        static void SetTimeAsync(
            const string& offerId,
            const RGN::Modules::Store::TimeInfo& time,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                RGN::Modules::Store::SetTimeRequestData requestData;
                requestData.offerId = offerId;
                requestData.time = time;
                RGNCore::CallAPI<RGN::Modules::Store::SetTimeRequestData>(
                    "storeV2-setTime",
                    requestData,
                    complete,
                    fail);
            };
        static void SetImageUrlAsync(
            const string& offerId,
            const string& imageUrl,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                requestData["imageUrl"] = imageUrl;
                RGNCore::CallAPI<nlohmann::json>(
                    "storeV2-setImageUrl",
                    requestData,
                    complete,
                    fail);
            };
        static void GetPropertiesAsync(
            const string& storeOfferId,
            const function<void(const string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = storeOfferId;
                RGNCore::CallAPI<nlohmann::json>(
                    "storeV2-getProperties",
                    requestData,
                    complete,
                    fail);
            };
        static void SetPropertiesAsync(
            const string& storeOfferId,
            const string& json,
            const function<void(const string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = storeOfferId;
                requestData["json"] = json;
                RGNCore::CallAPI<nlohmann::json>(
                    "storeV2-setProperties",
                    requestData,
                    complete,
                    fail);
            };
    };
}}}