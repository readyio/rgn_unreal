#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../..//Core/RGNCore.h"
#include <string>
#include <functional>
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    class VirtualItemsModule_Admin {
    public:
        static void DeleteVirtualItemsByIdsAsync(
            vector<string> virtualItemIds,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["virtualItemIds"] = virtualItemIds;
                RGNCore::CallAPI("virtualItemsV2-deleteVirtualItemsByIds", requestData, complete, fail);
            };
        static void DeleteVirtualItemsByNameAsync(
            string itemName,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["itemName"] = itemName;
                RGNCore::CallAPI("virtualItemsV2-deleteVirtualItemsByName", requestData, complete, fail);
            };
        static void DeleteVirtualItemByAppIdAsync(
            string appId,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = appId;
                RGNCore::CallAPI("virtualItemsV2-deleteVirtualItemByAppId", requestData, complete, fail);
            };
        static void AddFromCSVWithBlockchainStubAsync(
            string virtualItemName,
            string csvContent,
            string csvDelimiter,
            System::Threading::CancellationToken cancellationToken,
            const function<void(vector<string> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["virtualItemName"] = virtualItemName;
                requestData["csvFileString"] = csvContent;
                requestData["delimiter"] = csvDelimiter;
                requestData["addBlockchainStub"] = true;
                RGNCore::CallAPI("virtualItemsV2-addFromCSV", requestData, complete, fail);
            };
    };
}}}