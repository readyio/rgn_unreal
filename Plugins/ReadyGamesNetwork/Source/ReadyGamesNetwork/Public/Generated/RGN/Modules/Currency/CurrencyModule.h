#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "RGNCoinEconomy.h"
#include "Currency.h"
#include "CurrencyProductsData.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    class CurrencyModule {
    public:
        static void GetRGNCoinEconomyAsync(
            const function<void(RGN::Modules::Currency::RGNCoinEconomy& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void PurchaseRGNCoinAsync(
            string& iapUUID,
            string& iapTransactionId,
            string& iapReceipt,
            const function<void(vector<RGN::Modules::Currency::Currency>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetInAppPurchaseCurrencyDataAsync(
            const function<void(RGN::Modules::Currency::CurrencyProductsData& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void PurchaseCurrencyProductAsync(
            string& productId,
            const function<void(vector<RGN::Modules::Currency::Currency>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddUserCurrenciesAsync(
            vector<RGN::Modules::Currency::Currency>& currencies,
            const function<void(vector<RGN::Modules::Currency::Currency>& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}