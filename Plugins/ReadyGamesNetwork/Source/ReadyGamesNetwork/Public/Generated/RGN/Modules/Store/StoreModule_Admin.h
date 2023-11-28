#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../VirtualItems/PriceInfo.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    class StoreModule_Admin {
    public:
        static void CreateLootBoxAsync(
            const function<void(const string& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& lootBoxName,
            const vector<string>& virtualItemTags,
            const vector<RGN::Modules::VirtualItems::PriceInfo>& prices = vector<RGN::Modules::VirtualItems::PriceInfo>()) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["lootBoxName"] = lootBoxName;
                requestData["virtualItemTags"] = virtualItemTags;
                requestData["prices"] = prices;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "storeV2-createLootBox",
                    requestData,
                    [success] (const nlohmann::json& result) {
                        success(result["lootBoxId"].template get<string>());
                    },
                    fail,
                    false);
            };
        static void DeleteLootBoxAsync(
            const function<void(const string& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& lootBoxId) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["lootBoxId"] = lootBoxId;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "storeV2-deleteLootBox",
                    requestData,
                    [success] (const nlohmann::json& result) {
                        success(result["lootBoxId"].template get<string>());
                    },
                    fail,
                    false);
            };
        static void DeleteStoreOfferAsync(
            const function<void(void)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& offerId) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["offerId"] = offerId;
                RGNCore::CallAPI<nlohmann::json>(
                    "storeV2-deleteStoreOffer",
                    requestData,
                    success,
                    fail,
                    false);
            };
    };
}}}