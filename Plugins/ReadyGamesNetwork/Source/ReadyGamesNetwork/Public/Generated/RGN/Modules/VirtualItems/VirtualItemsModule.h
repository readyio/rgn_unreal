#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "VirtualItem.h"
#include "../../Model/ImageSize.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    class VirtualItemsModule {
    public:
        static void AddVirtualItemAsync(
            RGN::Modules::VirtualItems::VirtualItem& virtualItem,
            const function<void(RGN::Modules::VirtualItems::VirtualItem& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void AddFromCSVAsync(
            string& virtualItemName,
            string& csvContent,
            string& csvDelimiter,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(vector<string>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void UpdateVirtualItemAsync(
            string& itemId,
            RGN::Modules::VirtualItems::VirtualItem& virtualItem,
            const function<void(RGN::Modules::VirtualItems::VirtualItem& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DeleteVirtualItemAsync(
            string& itemId,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetVirtualItemsAsync(
            const function<void(vector<RGN::Modules::VirtualItems::VirtualItem>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetVirtualItemsAsync(
            int32_t limit,
            string& startAfter,
            const function<void(vector<RGN::Modules::VirtualItems::VirtualItem>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetVirtualItemsByIdsAsync(
            vector<string>& virtualItemsIds,
            const function<void(vector<RGN::Modules::VirtualItems::VirtualItem>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetByTagsAsync(
            vector<string>& tags,
            string& appId,
            const function<void(vector<RGN::Modules::VirtualItems::VirtualItem>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetTagsAsync(
            string& virtualItemId,
            const function<void(vector<string>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetTagsAsync(
            string& virtualItemId,
            vector<string>& tags,
            string& appId,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetNameAsync(
            string& virtualItemId,
            string& name,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetDescriptionAsync(
            string& virtualItemId,
            string& description,
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void GetPropertiesAsync(
            string& virtualItemId,
            const function<void(string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SetPropertiesAsync(
            string& virtualItemId,
            string& json,
            const function<void(string& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void UploadImageAsync(
            string& virtualItemId,
            vector<byte>& thumbnailTextureBytes,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(bool result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DownloadImageAsync(
            string& virtualItemId,
            RGN::Model::ImageSize& size,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(vector<byte>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void UploadMaterialTexturesAsync(
            string& virtualItemId,
            vector<vector<byte>>& materialTexturesBytes,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(bool result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
        static void DownloadMaterialTexturesAsync(
            string& virtualItemId,
            System::Threading::CancellationToken& cancellationToken,
            const function<void(vector<vector<byte>>& result)>& complete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}