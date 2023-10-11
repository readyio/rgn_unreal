#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../VirtualItems/PriceInfo.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    class StoreModule_Admin {
    public:
        static void CreateLootBoxAsync(
            string& lootBoxName,
            vector<string>& virtualItemTags,
            vector<RGN::Modules::VirtualItems::PriceInfo>& prices,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DeleteLootBoxAsync(
            string& lootBoxId,
            const function<void(string& result)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DeleteStoreOfferAsync(
            string& offerId,
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}