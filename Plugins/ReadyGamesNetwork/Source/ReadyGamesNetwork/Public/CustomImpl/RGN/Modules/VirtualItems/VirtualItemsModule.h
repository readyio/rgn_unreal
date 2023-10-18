#pragma once

#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../Http/Http.h"
#include "../../../../Generated/RGN/Modules/VirtualItems/VirtualItemsModule.h"
#include "../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "../../../../Generated/RGN/Model/ImageSize.h"
#include <cstddef>
#include <string>
#include <functional>
#include <future>
#include <thread>

namespace RGN { namespace Modules { namespace VirtualItems {
    class VirtualItemsModuleCustomImpl {
    public:
        
        static void UploadImageAsync(
            std::string virtualItemId,
            std::vector<uint8_t> thumbnailTextureBytes,
            CancellationToken cancellationToken,
            const std::function<void(bool result)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["appId"] = RGNCore::GetAppId();
                bodyJson["virtualItemId"] = virtualItemId;
                bodyJson["byteArray"] = thumbnailTextureBytes;
                RGNCore::CallAPI<nlohmann::json>("virtualItemsV2-uploadThumbnail", bodyJson, [complete]() {
                    complete(true);
                }, fail, cancellationToken);
            };
        static void DownloadImageAsync(
            std::string virtualItemId,
            RGN::Model::ImageSize size,
            CancellationToken cancellationToken,
            const std::function<void(std::vector<uint8_t> result)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                VirtualItemsModule::GetVirtualItemsByIdsAsync({ virtualItemId }, [complete, fail, size]
                (vector<RGN::Modules::VirtualItems::VirtualItem> virtualItems) {
                    RGN::Modules::VirtualItems::VirtualItem virtualItem = virtualItems[0];
                    RGN::Modules::VirtualItems::VirtualItemImage virtualItemImage = virtualItem.image;

                    std::string imageUrl = "";
                    switch (size) {
                        case RGN::Model::ImageSize::Large:
                            imageUrl = virtualItemImage.source;
                            break;
                        case RGN::Model::ImageSize::Medium:
                            imageUrl = virtualItemImage.source;
                            break;
                        case RGN::Model::ImageSize::Small:
                            imageUrl = virtualItemImage.source;
                            break;
                        default:
                            imageUrl = virtualItemImage.source;
                            break;
                    }

                    HttpHeaders headers;
                    headers.add("Content-type", "application/json");
                    Http::Request(imageUrl, HttpMethod::GET, headers, "", [complete, fail](HttpResponse httpResponse) {
                        int httpResponseCode = httpResponse.getResponseCode();
                        std::string httpResponseBody = httpResponse.getResponseBody();

                        if (httpResponseCode != 200) {
                            fail(httpResponseCode, httpResponseBody);
                            return;
                        }

                        std::vector<uint8_t> byteVector;
                        for (char strChar : httpResponseBody) {
                            byteVector.push_back(static_cast<uint8_t>(strChar));
                        }
                        complete(byteVector);
                    });
                }, fail);
            };
    };
}}}
