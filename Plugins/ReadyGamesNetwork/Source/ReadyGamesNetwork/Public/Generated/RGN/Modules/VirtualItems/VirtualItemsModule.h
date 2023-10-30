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
        /**
         * Add a virtual item
         */
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
        /**
         * Asynchronously adds a list of virtual items from a CSV content string to the Ready Games Network.
         * @param virtualItemName - The name of the virtual item.
         * @param csvContent - The content of the CSV file as a string.
         * @param csvDelimiter - The delimiter used in the CSV file (defaults to ',').
         * @param cancellationToken - A CancellationToken to observe while waiting for the task to complete.
         * @return A Task that represents the asynchronous operation. The Task result contains a list of strings, which are the item IDs of the added virtual items.
         * @throw: Thrown when 'virtualItemName', 'csvContent', or 'csvDelimiter' is null or empty.
         */
        static void AddFromCSVAsync(
            const string& virtualItemName,
            const string& csvContent,
            const string& csvDelimiter = ",",
            const CancellationToken& cancellationToken = CancellationToken(),
            const function<void(const vector<string>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
        /**
         * Asynchronously updates a specific virtual item in the Ready Games Network.
         * @param itemId - The ID of the virtual item to be updated.
         * @param virtualItem - A VirtualItem object containing the new data for the virtual item.
         * @return A Task representing the asynchronous operation. The result of the Task is the updated VirtualItem.
         */
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
        /**
         * Asynchronously deletes a specific virtual item from the Ready Games Network.
         * @param itemId - The ID of the virtual item to be deleted.
         * @return A Task representing the asynchronous operation.
         * @throw: Thrown when 'itemId' is null or empty.
         */
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
        /**
         * Returns a limited list of virtual items for your game.
         * @param limit - Maximal count of items to return
         * @param startAfter - The item id to start after
         */
        static void GetVirtualItemsAsync(
            const int32_t limit,
            const string& startAfter = "",
            const function<void(const vector<RGN::Modules::VirtualItems::VirtualItem>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
            const string& appId = "",
            const function<void(const vector<RGN::Modules::VirtualItems::VirtualItem>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
        /**
         * Returns all tags for specific virtual item
         */
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
            const string& appId = "",
            const function<void(void)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
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
        /**
         * Sets the name for a specific virtual item
         */
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
        /**
         * Sets the description for a specific virtual item
         */
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
        /**
         * Returns json string or throws an exception if there are no json for virtual item
         * @return Returns json as string
         */
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
        /**
         * Set json on a given virtualItemId.
         * @return Returns json as string
         */
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
        /**
         * Uploads an image thumbnail for a virtual item to the RGNCore backend.
         * @param virtualItemId - The ID of the virtual item to upload the thumbnail for.
         * @param thumbnailTextureBytes - The byte array of the thumbnail texture image to upload.
         * @param cancellationToken - The cancellation token.
         * @return A boolean indicating whether the upload was successful.
         */
        static void UploadImageAsync(
            const string& virtualItemId,
            const vector<uint8_t>& thumbnailTextureBytes,
            const CancellationToken& cancellationToken = CancellationToken(),
            const function<void(const bool result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::VirtualItems::VirtualItemsModuleCustomImpl::UploadImageAsync(
                    virtualItemId,
                    thumbnailTextureBytes,
                    cancellationToken,
                    complete,
                    fail);
            };
        /**
         * Downloads an image asynchronously from a specified virtual item ID.
         * @param virtualItemId - The ID of the virtual item to download the image from.
         * @param size - The size type of virtual item image to download.
         * @param cancellationToken - A cancellation token that can be used to cancel the asynchronous operation.
         * @return A byte array containing the image data.
         */
        static void DownloadImageAsync(
            const string& virtualItemId,
            const RGN::Model::ImageSize& size,
            const CancellationToken& cancellationToken = CancellationToken(),
            const function<void(const vector<uint8_t>& result)>& complete = {},
            const function<void(const int httpCode, const string& error)>& fail = {}) {
                RGN::Modules::VirtualItems::VirtualItemsModuleCustomImpl::DownloadImageAsync(
                    virtualItemId,
                    size,
                    cancellationToken,
                    complete,
                    fail);
            };
    };
}}}