#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../random.hpp"
#include "RGNCoinEconomy.h"
#include "../../Model/Request/BaseRequestData.h"
#include "PurchaseRGNCoinRequestData.h"
#include "Currency.h"
#include "CurrencyProductsData.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "PurchaseCurrencyProductRequestData.h"
#include "AddUserCurrenciesResponseData.h"
#include "GetUserCurrenciesResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    class CurrencyModule {
    public:
        static void GetRGNCoinEconomyAsync(
            const function<void(const RGN::Modules::Currency::RGNCoinEconomy& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseRequestData, RGN::Modules::Currency::RGNCoinEconomy>(
                    "currency-getRGNCoinEconomy",
                    requestData,
                    success,
                    fail,
                    false);
            };
        /**
         * Adds the rgn-coin currency to the user in
         * in-app purchase plugin callback after verifying the reciept locally
         * 1. Start in-app purchase process
         * 2. Wait for user purchase
         * 3. Verify the reciept after successful purchase
         * 4. Cann this method with the appropriate in-app item id (M:RGN.Modules.Currency.CurrencyModule.GetRGNCoinEconomyAsync)
         * @param iapUUID - Unique id of the rgn-coin pack that was returned by the M:RGN.Modules.Currency.CurrencyModule.GetRGNCoinEconomyAsync method
         * @param iapTransactionId - The transaction id of the in-app purchase
         * @param iapReceipt - The receipt of the in-app purchase
         */
        static void PurchaseRGNCoinAsync(
            const function<void(const vector<RGN::Modules::Currency::Currency>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& iapUUID,
            const string& iapTransactionId,
            const string& iapReceipt) {
                RGN::Modules::Currency::PurchaseRGNCoinRequestData requestData;
                requestData.iapUUID = iapUUID;
                requestData.requestId = RGN::Random::generate_uuid_v4();
                requestData.iapTransactionId = iapTransactionId;
                requestData.iapReceipt = iapReceipt;
                RGNCore::CallAPI<RGN::Modules::Currency::PurchaseRGNCoinRequestData, nlohmann::json>(
                    "currency-purchaseRGNCoinV2",
                    requestData,
                    [success] (const nlohmann::json& result) {
                        success(result["userCurrencies"].template get<vector<RGN::Modules::Currency::Currency>>());
                    },
                    fail,
                    true);
            };
        static void GetInAppPurchaseCurrencyDataAsync(
            const function<void(const RGN::Modules::Currency::CurrencyProductsData& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseMigrationRequestData, RGN::Modules::Currency::CurrencyProductsData>(
                    "currency-getProducts",
                    requestData,
                    success,
                    fail,
                    false);
            };
        /**
         * Adds any project specific currency to the users profile.
         * You can also use this method without going to the in-app purchase process if you want to give the player a currencies
         */
        static void PurchaseCurrencyProductAsync(
            const function<void(const vector<RGN::Modules::Currency::Currency>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const string& productId) {
                RGN::Modules::Currency::PurchaseCurrencyProductRequestData requestData;
                requestData.productId = productId;
                RGNCore::CallAPI<RGN::Modules::Currency::PurchaseCurrencyProductRequestData, vector<RGN::Modules::Currency::Currency>>(
                    "currency-purchaseProduct",
                    requestData,
                    success,
                    fail,
                    false);
            };
        static void AddUserCurrenciesAsync(
            const function<void(const vector<RGN::Modules::Currency::Currency>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail,
            const vector<RGN::Modules::Currency::Currency>& currencies) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["currencies"] = currencies;
                requestData["version"] = 3;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Currency::AddUserCurrenciesResponseData>(
                    "currency-addUserCurrencies",
                    requestData,
                    [success] (const RGN::Modules::Currency::AddUserCurrenciesResponseData& result) {
                        success(result.userCurrencies);
                    },
                    fail,
                    false);
            };
        static void GetUserCurrenciesAsync(
            const function<void(const vector<RGN::Modules::Currency::Currency>& result)>& success,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::Currency::GetUserCurrenciesResponseData>(
                    "currency-getUserCurrencies",
                    requestData,
                    [success] (const RGN::Modules::Currency::GetUserCurrenciesResponseData& result) {
                        success(result.userCurrencies);
                    },
                    fail,
                    false);
            };
    };
}}}