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
            const vector<string>& currencies = vector<string>(),
            const string& offerId = "",
            const function<void(const RGN::Modules::Store::PurchaseResult& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::Store::StoreModuleCustomImpl::BuyVirtualItemsAsync(
                    itemIds,
                    currencies,
                    offerId,
                    complete,
                    fail);
            };
        static void BuyStoreOfferAsync(
            const string& offerId,
            const vector<string>& currencies = vector<string>(),
            const function<void(const RGN::Modules::Store::PurchaseResult& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::Store::StoreModuleCustomImpl::BuyStoreOfferAsync(
                    offerId,
                    currencies,
                    complete,
                    fail);
            };
        static void GetLootBoxesByIdsAsync(
            const vector<string>& ids,
            const function<void(const vector<RGN::Modules::Store::LootBox>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
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
        /**
         * Asynchronously retrieves a list of lootBoxes from the Ready Games Network (RGN) store based on
         * the provided application identifiers.
         * @param appId - Application identifier used to filter the lootBoxes.
         * @param limit - An integer indicating the maximum number of store offers to retrieve.
         * @param startAfter - An optional parameter representing an store offer id after which to
         * start retrieving the store offers. The default is an empty string.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns a list of
         * T:RGN.Modules.Store.LootBox objects representing the lootBoxes that match the specified application identifiers,
         * limit and other optional parameters.
         * @throw: Thrown when the provided appId list is empty.
         */
        static void GetLootBoxesByAppIdAsync(
            const string& appId,
            const int32_t limit,
            const string& startAfter = "",
            const function<void(const vector<RGN::Modules::Store::LootBox>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
        /**
         * Asynchronously retrieves a list of lootBoxes for the current application from the Ready Games Network (RGN) store.
         * @param limit - An integer indicating the maximum number of lootBoxes to retrieve.
         * @param startAfter - An optional parameter representing an lootBox id after which to
         * start retrieving the lootBoxes. The default is an empty string.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
         * of T:RGN.Modules.Store.LootBox objects representing the lootBoxes that match the current application identifier,
         * limit and other optional parameters.
         * @throw: Thrown when the provided limit value is zero.
         */
        static void GetLootBoxesForCurrentAppAsync(
            const int32_t limit,
            const string& startAfter = "",
            const function<void(const vector<RGN::Modules::Store::LootBox>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::Store::StoreModuleCustomImpl::GetLootBoxesForCurrentAppAsync(
                    limit,
                    startAfter,
                    complete,
                    fail);
            };
        /**
         * Asynchronously checks if a lootbox associated with the specified name is
         * available in the Ready Games Network (RGN) store.
         * The name specifies the virtual items that are included into the lootbox.
         * @param name - The unique identifier name associated with the lootbox to be checked.
         * Specifies the virtual items that are included into the lootbox.
         * @return A Task representing the asynchronous operation. The Result property of the Task indicates whether
         * the lootbox is available (returns true) or not (returns false).
         * @throw: Thrown when the provided name is null or empty.
         */
        static void LootboxIsAvailableAsync(
            const string& name,
            const function<void(const bool result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
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
        /**
         * Asynchronously gets the number of virtual items available for a lootbox
         * The name specifies the virtual items that are included into the lootbox.
         * @param name - The unique identifier name associated with the lootbox to be checked.
         * Specifies the virtual items that are included into the lootbox.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns
         * the amount of virtual items available in the loot box
         * @throw: Thrown when the provided name is null or empty.
         */
        static void GetAvailableLootBoxItemsCountAsync(
            const string& name,
            const function<void(const int64_t result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
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
        /**
         * Asynchronously opens a lootbox associated with the specified name in the Ready Games Network (RGN) store.
         * The name specifies the virtual items that are included into the lootbox.
         * Randomly selects a virtual item to purchase. Goes with the selected virtual item through purchase process
         * M:RGN.Modules.Store.StoreModule.BuyVirtualItemsAsync(System.Collections.Generic.List{System.String},System.Collections.Generic.List{System.String},System.String)
         * if the virtual item does not have price specified, it is added to users inventory for free
         * @param name - The unique identifier name associated with the lootbox to be opened.
         * Specifies the virtual items that are included into the lootbox.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns the
         * T:RGN.Modules.Inventory.InventoryItemData object representing the items obtained from the opened lootbox.
         * @throw: Thrown when the provided name is null or empty.
         */
        static void OpenLootboxAsync(
            const string& name,
            const function<void(const RGN::Modules::Inventory::InventoryItemData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Store::StoreModuleCustomImpl::OpenLootboxAsync(
                    name,
                    complete,
                    fail);
            };
        static void AddVirtualItemsStoreOfferAsync(
            const vector<string>& appIds,
            const vector<string>& itemIds,
            const string& name = "",
            const string& description = "",
            const vector<string>& tags = vector<string>(),
            const int32_t quantity = 1,
            const function<void(const RGN::Modules::Store::StoreOffer& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
        /**
         * Asynchronously imports a list of store offers from a CSV formatted string to the Ready Games Network (RGN) store.
         * @param content - A string representing the CSV content that contains the store offers to be imported.
         * @param delimiter - A string representing the character used as a delimiter in the CSV content.
         * @param cancellationToken - An optional parameter for the CancellationToken that propagates a notification
         * that operations should be cancelled. The default value is None.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns
         * a list of T:RGN.Modules.Store.StoreOffer objects representing the successfully imported store offers.
         * @throw: Thrown when the provided content string is null or empty.
         */
        static void ImportStoreOffersFromCSVAsync(
            const string& content,
            const string& delimiter,
            const CancellationToken& cancellationToken = CancellationToken(),
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
            const string& appId = "",
            const bool ignoreTimestamp = false,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
        /**
         * Asynchronously retrieves a list of store offers from the Ready Games Network (RGN) store based on a provided timestamp.
         * @param appId - The application identifier used for filtering the store offers.
         * @param timestamp - A long type argument representing the timestamp for filtering the store offers.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
         * of T:RGN.Modules.Store.StoreOffer objects representing the store offers that match the specified appId and timestamp.
         * @throw: Thrown when the provided appId string is null or empty.
         */
        static void GetByTimestampAsync(
            const string& appId,
            const int64_t timestamp,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
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
            const string& startAfter = "",
            const bool ignoreTimestamp = false,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
        /**
         * Asynchronously retrieves a list of store offers for the current application from the Ready Games Network (RGN) store.
         * @param limit - An integer indicating the maximum number of store offers to retrieve.
         * @param startAfter - An optional parameter representing an store offer id after which to
         * start retrieving the store offers. The default is an empty string.
         * @param ignoreTimestamp - An optional parameter that indicates whether to ignore the timestamp in the store offers
         * retrieval process. The default is false.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
         * of T:RGN.Modules.Store.StoreOffer objects representing the store offers that match the current application identifier,
         * limit and other optional parameters.
         * @throw: Thrown when the provided limit value is zero.
         */
        static void GetForCurrentAppAsync(
            const int32_t limit,
            const string& startAfter = "",
            const bool ignoreTimestamp = false,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::Store::StoreModuleCustomImpl::GetForCurrentAppAsync(
                    limit,
                    startAfter,
                    ignoreTimestamp,
                    complete,
                    fail);
            };
        /**
         * Asynchronously retrieves a list of store offers with their associated virtual items data for the current application
         * from the Ready Games Network (RGN) store.
         * @param limit - An integer indicating the maximum number of store offers to retrieve.
         * @param startAfter - An optional parameter representing an stor offer id after which to start retrieving the store offers.
         * The default is an empty string.
         * @param ignoreTimestamp - An optional parameter that indicates whether to ignore the timestamp in the store
         * offers retrieval process. The default is false.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns a list of
         * T:RGN.Modules.Store.StoreOffer objects with their associated store offer items data that match the current application identifier,
         * limit and other optional parameters.
         * @throw: Thrown when the provided limit value is zero.
         */
        static void GetWithVirtualItemsDataForCurrentAppAsync(
            const int32_t limit,
            const string& startAfter = "",
            const bool ignoreTimestamp = false,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
            const string& startAfter = "",
            const bool ignoreTimestamp = false,
            const function<void(const vector<RGN::Modules::Store::StoreOffer>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
            const function<void(const int httpCode, const string& error)>& fail) {
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
        /**
         * Asynchronously retrieves a list of tags associated with a specific store offer from the Ready Games Network (RGN) store.
         * @param offerId - The identifier of the store offer for which to retrieve tags.
         * @return A Task representing the asynchronous operation. The Result property of the Task returns a list of tags
         * associated with the specified store offer.
         * @throw: Thrown when the provided offerId is null or empty.
         */
        static void GetTagsAsync(
            const string& offerId,
            const function<void(const vector<string>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
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
            const string& appId = "",
            const function<void(void)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
        /**
         * Asynchronously sets the name for a specific store offer in the Ready Games Network (RGN) store.
         * @param offerId - The identifier of the store offer for which to set the name.
         * @param name - The new name to be set for the specified store offer.
         * @return A Task representing the asynchronous operation. The task result does not return a value.
         * @throw: Thrown when the provided offerId or name is null or empty.
         */
        static void SetNameAsync(
            const string& offerId,
            const string& name,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
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
        /**
         * Asynchronously sets the description for a specific store offer in the Ready Games Network (RGN) store.
         * @param offerId - The identifier of the store offer for which to set the description.
         * @param description - The new description to be set for the specified store offer.
         * @return A Task representing the asynchronous operation. The task result does not return a value.
         * @throw: Thrown when the provided offerId or description is null or empty.
         */
        static void SetDescriptionAsync(
            const string& offerId,
            const string& description,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
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
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Store::SetPricesRequestData requestData;
                requestData.offerId = offerId;
                requestData.prices = prices;
                RGNCore::CallAPI<RGN::Modules::Store::SetPricesRequestData>(
                    "storeV2-setPrices",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Asynchronously sets the time information for a specific store offer in the Ready Games Network (RGN) store.
         * @param offerId - The identifier of the store offer for which to set the time information.
         * @param time - A TimeInfo object containing the time information to be set for the specified store offer.
         * @return A Task representing the asynchronous operation. The task result does not return a value.
         * @throw: Thrown when the provided offerId is null or empty or when the
         * provided TimeInfo object is null.
         */
        static void SetTimeAsync(
            const string& offerId,
            const RGN::Modules::Store::TimeInfo& time,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Store::SetTimeRequestData requestData;
                requestData.offerId = offerId;
                requestData.time = time;
                RGNCore::CallAPI<RGN::Modules::Store::SetTimeRequestData>(
                    "storeV2-setTime",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Asynchronously sets the image URL for a specific store offer in the Ready Games Network (RGN) store.
         * @param offerId - The identifier of the store offer for which to set the image URL.
         * @param imageUrl - The URL of the image to be set for the specified store offer.
         * @return A Task representing the asynchronous operation. The task result does not return a value.
         * @throw: Thrown when the provided offerId or imageUrl is null or empty.
         */
        static void SetImageUrlAsync(
            const string& offerId,
            const string& imageUrl,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
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
        /**
         * Asynchronously retrieves the properties of a specific store offer in the Ready Games Network (RGN) store.
         * @param storeOfferId - The identifier of the store offer whose properties are to be retrieved.
         * @return A Task representing the asynchronous operation. The Task result contains a string that represents the JSON-formatted properties of the store offer.
         * @throw: Thrown when the provided storeOfferId is null or empty.
         */
        static void GetPropertiesAsync(
            const string& storeOfferId,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = storeOfferId;
                RGNCore::CallAPI<nlohmann::json>(
                    "storeV2-getProperties",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Asynchronously sets the properties of a specific store offer in the Ready Games Network (RGN) store.
         * @param storeOfferId - The identifier of the store offer whose properties are to be set.
         * @param json - A string containing the JSON representation of the properties to be set.
         * @return A Task representing the asynchronous operation. The Task result contains a string confirmation of the properties' update.
         * @throw: Thrown when the provided storeOfferId or json is null or empty.
         */
        static void SetPropertiesAsync(
            const string& storeOfferId,
            const string& json,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
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