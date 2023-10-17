#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Generated/RGN/Modules/Inventory/InventoryModule.h"
#include <string>

using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
	class InventoryModuleCustomImpl {
	public:
        static void GetWithVirtualItemsDataForCurrentAppAsync(
            string startAfter,
            int32_t limit,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // TODO
            };

        static void GetWithVirtualItemsDataByAppIdsAsync(
            vector<string> appIds,
            string startAfter,
            int32_t limit,
            const function<void(vector<RGN::Modules::Inventory::InventoryItemData> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // TODO
            };

        static void ParseInventoryItemData(string json) {
                // TODO
            };
        static void ParseInventoryItemsData(string json) {
                // TODO
            };
	};
}}}
