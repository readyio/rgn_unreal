#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    class VirtualItemsModule_Admin {
    public:
        static void DeleteVirtualItemsByIdsAsync(
            vector<string>& virtualItemIds,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DeleteVirtualItemsByNameAsync(
            string& itemName,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DeleteVirtualItemByAppIdAsync(
            string& appId,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddFromCSVWithBlockchainStubAsync(
            string& virtualItemName,
            string& csvContent,
            string& csvDelimiter,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(vector<string>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}