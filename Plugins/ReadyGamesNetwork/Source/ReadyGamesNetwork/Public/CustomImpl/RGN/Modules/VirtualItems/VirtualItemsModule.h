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
        static void UploadMaterialTexturesAsync(
            std::string virtualItemId,
            std::vector<std::vector<uint8_t>> materialTexturesBytes,
            CancellationToken cancellationToken,
            const std::function<void(bool result)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                nlohmann::json bodyJson;
                bodyJson["appId"] = RGNCore::GetAppId();
                bodyJson["virtualItemId"] = virtualItemId;
                for (std::vector<uint8_t> materialTextureBytes : materialTexturesBytes) {
                    nlohmann::json materialTextureJson = materialTextureBytes;
                    materialTextureJson["byteArray"] = materialTextureBytes;
                    bodyJson["texturesInfos"].push_back(materialTextureBytes);
                }
                RGNCore::CallAPI<nlohmann::json>("virtualItemsV2-uploadTextures", bodyJson, [complete]() {
                    complete(true);
                }, fail, cancellationToken);
            };
        static void DownloadMaterialTexturesAsync(
            std::string virtualItemId,
            CancellationToken cancellationToken,
            const std::function<void(std::vector<std::vector<uint8_t>> result)>& complete,
            const std::function<void(int httpCode, std::string error)>& fail) {
                std::vector<std::vector<uint8_t>> textures = { {} };

                for (int i = 0; ; i++) {
                    std::string url =
                        "https://firebasestorage.googleapis.com/v0/b/" +
                        RGNCore::GetStorageBucket() +
                        ".appspot.com/o/virtual-items%2F" +
                        virtualItemId +
                        "%2Ftextures%2F" +
                        to_string(i) +
                        ".png?alt=media";

                    std::future<bool> future = async(launch::async, [url, &textures]() {
                        bool successed = false;

                        HttpHeaders headers;
                        headers.add("Content-type", "application/json");
                        Http::Request(url, HttpMethod::GET, headers, "", [&successed, &textures](HttpResponse httpResponse) {
                            int httpResponseCode = httpResponse.getResponseCode();
                            std::string httpResponseBody = httpResponse.getResponseBody();

                            successed = httpResponseCode == 200;
                            if (!successed) {
                                return;
                            }

                            std::vector<uint8_t> byteVector;
                            for (char strChar : httpResponseBody) {
                                byteVector.push_back(static_cast<uint8_t>(strChar));
                            }

                            if (byteVector.size() < 100) {
                                successed = false;
                                return;
                            }

                            textures.push_back(byteVector);
                        });

                        return successed;
                    });

                    bool successed = future.get();
                    if (!successed) {
                        break;
                    }
                }

                complete(textures);
            };
    };
}}}
