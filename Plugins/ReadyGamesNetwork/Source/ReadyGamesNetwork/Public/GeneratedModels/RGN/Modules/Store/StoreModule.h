#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
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
            vector<string>& itemIds,
            vector<string>& currencies,
            string& offerId,
            const function<void(RGN::Modules::Store::PurchaseResult& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void BuyStoreOfferAsync(
            string& offerId,
            vector<string>& currencies,
            const function<void(RGN::Modules::Store::PurchaseResult& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetLootBoxesByIdsAsync(
            vector<string>& ids,
            const function<void(vector<RGN::Modules::Store::LootBox>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetLootBoxesByAppIdAsync(
            string& appId,
            int32_t limit,
            string& startAfter,
            const function<void(vector<RGN::Modules::Store::LootBox>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetLootBoxesForCurrentAppAsync(
            int32_t limit,
            string& startAfter,
            const function<void(vector<RGN::Modules::Store::LootBox>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void LootboxIsAvailableAsync(
            string& name,
            const function<void(bool result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetAvailableLootBoxItemsCountAsync(
            string& name,
            const function<void(int64_t result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void OpenLootboxAsync(
            string& name,
            const function<void(RGN::Modules::Inventory::InventoryItemData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddVirtualItemsStoreOfferAsync(
            vector<string>& appIds,
            vector<string>& itemIds,
            string& name,
            string& description,
            vector<string>& tags,
            int32_t quantity,
            const function<void(RGN::Modules::Store::StoreOffer& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void ImportStoreOffersFromCSVAsync(
            string& content,
            string& delimiter,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(vector<RGN::Modules::Store::StoreOffer>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByTagsAsync(
            vector<string>& tags,
            string& appId,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByTimestampAsync(
            string& appId,
            System::DateTime& timestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByAppIdsAsync(
            vector<string>& appIds,
            int32_t limit,
            string& startAfter,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetForCurrentAppAsync(
            int32_t limit,
            string& startAfter,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetWithVirtualItemsDataForCurrentAppAsync(
            int32_t limit,
            string& startAfter,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetWithVirtualItemsDataByAppIdsAsync(
            vector<string>& appIds,
            int32_t limit,
            string& startAfter,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByIdsAsync(
            vector<string>& ids,
            const function<void(vector<RGN::Modules::Store::StoreOffer>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetTagsAsync(
            string& offerId,
            const function<void(vector<string>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetTagsAsync(
            string& offerId,
            vector<string>& tags,
            string& appId,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetNameAsync(
            string& offerId,
            string& name,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetDescriptionAsync(
            string& offerId,
            string& description,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetPricesAsync(
            string& offerId,
            vector<RGN::Modules::VirtualItems::PriceInfo>& prices,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetTimeAsync(
            string& offerId,
            RGN::Modules::Store::TimeInfo& time,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetImageUrlAsync(
            string& offerId,
            string& imageUrl,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetPropertiesAsync(
            string& storeOfferId,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetPropertiesAsync(
            string& storeOfferId,
            string& json,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}