#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../VirtualItems/PriceInfo.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    class StoreModule_Admin {
    public:
        static void CreateLootBoxAsync(
            string lootBoxName,
            vector<string> virtualItemTags,
            vector<RGN::Modules::VirtualItems::PriceInfo> prices,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["lootBoxName"] = lootBoxName;
                requestData["virtualItemTags"] = virtualItemTags;
                requestData["prices"] = prices;
                RGNCore::CallAPI(
                    "storeV2-createLootBox",
                    requestData,
                    [complete] (nlohmann::json result) {
                        complete(result["lootBoxId"].ToString());
                    },
                    fail);
            };
        static void DeleteLootBoxAsync(
            string lootBoxId,
            const function<void(string result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["lootBoxId"] = lootBoxId;
                RGNCore::CallAPI(
                    "storeV2-deleteLootBox",
                    requestData,
                    [complete] (nlohmann::json result) {
                        complete(result["lootBoxId"].ToString());
                    },
                    fail);
            };
        static void DeleteStoreOfferAsync(
            string offerId,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                RGNCore::CallAPI<nlohmann::json>(
                    "storeV2-deleteStoreOffer",
                    requestData,
                    complete,
                    fail);
            };
    };
}}}