#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/Store/StoreModule.h"
#include <string>

using namespace std;

namespace RGN { namespace Modules { namespace Store {
	class StoreModuleCustomImpl {
	public:
        static void BuyVirtualItemsAsync(
            vector<string> itemIds,
            vector<string> currencies,
            string offerId,
            const function<void(RGN::Modules::Store::PurchaseResult result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // TODO
            };
        static void BuyStoreOfferAsync(
            string offerId,
            vector<string> currencies,
            const function<void(RGN::Modules::Store::PurchaseResult result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // TODO
            };
        static void GetWithVirtualItemsDataByAppIdsAsync(
            vector<string> appIds,
            int32_t limit,
            string startAfter,
            bool ignoreTimestamp,
            const function<void(vector<RGN::Modules::Store::StoreOffer> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // TODO
            };
	};
}}}