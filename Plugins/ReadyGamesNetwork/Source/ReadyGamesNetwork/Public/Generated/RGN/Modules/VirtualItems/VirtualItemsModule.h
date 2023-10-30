#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../CustomImpl/RGN/Modules/VirtualItems/VirtualItemsModule.h"
#include "../../../../Core/CancellationToken.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "VirtualItem.h"
#include "AddVirtualItemResponseData.h"
#include "AddToVirtualItemsRequestData.h"
#include "UpdateVirtualItemsRequestData.h"
#include "VirtualItemsResponseData.h"
#include "GetAllVirtualItemsByAppIdsRequestData.h"
#include "GetVirtualItemsByIdsRequestData.h"
#include "GetVirtualItemTagsResponse.h"
#include "../../Model/ImageSize.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    class VirtualItemsModule {
    public:
        static void AddVirtualItemAsync(
            const RGN::Modules::VirtualItems::VirtualItem& virtualItem,
            const function<void(const RGN::Modules::VirtualItems::VirtualItem& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::VirtualItems::AddToVirtualItemsRequestData requestData;
                requestData.virtualItem = virtualItem;
                RGNCore::CallAPI<RGN::Modules::VirtualItems::AddToVirtualItemsRequestData, RGN::Modules::VirtualItems::AddVirtualItemResponseData>(
                    "virtualItemsV2-add",
                    requestData,
                    [complete] (const RGN::Modules::VirtualItems::AddVirtualItemResponseData& result) {
                        complete(result.virtualItem);
                    },
                    fail);
            };
        static void AddFromCSVAsync(
            const string& virtualItemName,
            const string& csvContent,
            const string& csvDelimiter,
            const CancellationToken& cancellationToken,
            const function<void(const vector<string>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["virtualItemName"] = virtualItemName;
                requestData["csvFileString"] = csvContent;
                requestData["delimiter"] = csvDelimiter;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "virtualItemsV2-addFromCSV",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["newVirtualItemIds"].template get<vector<string>>());
                    },
                    fail);
            };
        static void UpdateVirtualItemAsync(
            const string& itemId,
            const RGN::Modules::VirtualItems::VirtualItem& virtualItem,
            const function<void(const RGN::Modules::VirtualItems::VirtualItem& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::VirtualItems::UpdateVirtualItemsRequestData requestData;
                requestData.itemId = itemId;
                requestData.virtualItem = virtualItem;
                RGNCore::CallAPI<RGN::Modules::VirtualItems::UpdateVirtualItemsRequestData, RGN::Modules::VirtualItems::AddVirtualItemResponseData>(
                    "virtualItemsV2-update",
                    requestData,
                    [complete] (const RGN::Modules::VirtualItems::AddVirtualItemResponseData& result) {
                        complete(result.virtualItem);
                    },
                    fail);
            };
        static void DeleteVirtualItemAsync(
            const string& itemId,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["itemId"] = itemId;
                RGNCore::CallAPI<nlohmann::json>(
                    "virtualItemsV2-deleteVirtualItem",
                    requestData,
                    complete,
                    fail);
            };
        static void GetVirtualItemsAsync(
            const function<void(const vector<RGN::Modules::VirtualItems::VirtualItem>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseMigrationRequestData, RGN::Modules::VirtualItems::VirtualItemsResponseData>(
                    "virtualItemsV2-getByAppId",
                    requestData,
                    [complete] (const RGN::Modules::VirtualItems::VirtualItemsResponseData& result) {
                        complete(result.virtualItems);
                    },
                    fail);
            };
        static void GetVirtualItemsAsync(
            const int32_t limit,
            const string& startAfter,
            const function<void(const vector<RGN::Modules::VirtualItems::VirtualItem>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::VirtualItems::GetAllVirtualItemsByAppIdsRequestData requestData;
                requestData.appIds = vector<string>{ RGNCore::GetAppId() };
                requestData.limit = limit;
                requestData.startAfter = startAfter;
                RGNCore::CallAPI<RGN::Modules::VirtualItems::GetAllVirtualItemsByAppIdsRequestData, RGN::Modules::VirtualItems::VirtualItemsResponseData>(
                    "virtualItemsV2-getByAppIds",
                    requestData,
                    [complete] (const RGN::Modules::VirtualItems::VirtualItemsResponseData& result) {
                        complete(result.virtualItems);
                    },
                    fail);
            };
        static void GetVirtualItemsByIdsAsync(
            const vector<string>& virtualItemsIds,
            const function<void(const vector<RGN::Modules::VirtualItems::VirtualItem>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::VirtualItems::GetVirtualItemsByIdsRequestData requestData;
                requestData.ids = virtualItemsIds;
                RGNCore::CallAPI<RGN::Modules::VirtualItems::GetVirtualItemsByIdsRequestData, RGN::Modules::VirtualItems::VirtualItemsResponseData>(
                    "virtualItemsV2-getByIds",
                    requestData,
                    [complete] (const RGN::Modules::VirtualItems::VirtualItemsResponseData& result) {
                        complete(result.virtualItems);
                    },
                    fail);
            };
        static void GetByTagsAsync(
            const vector<string>& tags,
            const string& appId,
            const function<void(const vector<RGN::Modules::VirtualItems::VirtualItem>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["tags"] = tags;
                requestData["optionalAppId"] = appId;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::VirtualItems::VirtualItemsResponseData>(
                    "virtualItemsV2-getByTags",
                    requestData,
                    [complete] (const RGN::Modules::VirtualItems::VirtualItemsResponseData& result) {
                        complete(result.virtualItems);
                    },
                    fail);
            };
        static void GetTagsAsync(
            const string& virtualItemId,
            const function<void(const vector<string>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["virtualItemId"] = virtualItemId;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, RGN::Modules::VirtualItems::GetVirtualItemTagsResponse>(
                    "virtualItemsV2-getTags",
                    requestData,
                    [complete] (const RGN::Modules::VirtualItems::GetVirtualItemTagsResponse& result) {
                        complete(result.tags);
                    },
                    fail);
            };
        static void SetTagsAsync(
            const string& virtualItemId,
            const vector<string>& tags,
            const string& appId,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["virtualItemId"] = virtualItemId;
                requestData["tags"] = tags;
                requestData["optionalAppId"] = appId;
                RGNCore::CallAPI<nlohmann::json>(
                    "virtualItemsV2-setTags",
                    requestData,
                    complete,
                    fail);
            };
        static void SetNameAsync(
            const string& virtualItemId,
            const string& name,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["virtualItemId"] = virtualItemId;
                requestData["name"] = name;
                RGNCore::CallAPI<nlohmann::json>(
                    "virtualItemsV2-setName",
                    requestData,
                    complete,
                    fail);
            };
        static void SetDescriptionAsync(
            const string& virtualItemId,
            const string& description,
            const function<void(void)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["virtualItemId"] = virtualItemId;
                requestData["description"] = description;
                RGNCore::CallAPI<nlohmann::json>(
                    "virtualItemsV2-setDescription",
                    requestData,
                    complete,
                    fail);
            };
        static void GetPropertiesAsync(
            const string& virtualItemId,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["virtualItemId"] = virtualItemId;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "virtualItemsV2-getProperties",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["properties"].template get<string>());
                    },
                    fail);
            };
        static void SetPropertiesAsync(
            const string& virtualItemId,
            const string& json,
            const function<void(const string& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                nlohmann::json requestData;
                requestData["appId"] = RGNCore::GetAppId();
                requestData["virtualItemId"] = virtualItemId;
                requestData["json"] = json;
                requestData["version"] = RGN::Model::Request::BaseMigrationRequestData().version;
                RGNCore::CallAPI<nlohmann::json, nlohmann::json>(
                    "virtualItemsV2-setProperties",
                    requestData,
                    [complete] (const nlohmann::json& result) {
                        complete(result["properties"].template get<string>());
                    },
                    fail);
            };
        static void UploadImageAsync(
            const string& virtualItemId,
            const vector<uint8_t>& thumbnailTextureBytes,
            const CancellationToken& cancellationToken,
            const function<void(const bool result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::VirtualItems::VirtualItemsModuleCustomImpl::UploadImageAsync(
                    virtualItemId,
                    thumbnailTextureBytes,
                    cancellationToken,
                    complete,
                    fail);
            };
        static void DownloadImageAsync(
            const string& virtualItemId,
            const RGN::Model::ImageSize& size,
            const CancellationToken& cancellationToken,
            const function<void(const vector<uint8_t>& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::VirtualItems::VirtualItemsModuleCustomImpl::DownloadImageAsync(
                    virtualItemId,
                    size,
                    cancellationToken,
                    complete,
                    fail);
            };
    };
}}}