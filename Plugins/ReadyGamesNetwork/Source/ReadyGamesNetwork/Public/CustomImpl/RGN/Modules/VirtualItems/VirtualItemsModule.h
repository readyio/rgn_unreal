#pragma once
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include "../../../../CustomImpl/RGN/Modules/VirtualItems/VirtualItemsModule.h"
#include "../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "../../../../Generated/RGN/Model/ImageSize.h"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    class VirtualItemsModuleCustomImpl {
    public:
        
        static void UploadImageAsync(
            string virtualItemId,
            vector<byte> thumbnailTextureBytes,
            CancellationToken cancellationToken,
            const function<void(bool result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
                // TODO:
            };
        static void DownloadImageAsync(
            string virtualItemId,
            RGN::Model::ImageSize size,
            CancellationToken cancellationToken,
            const function<void(vector<byte> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            // TODO:
            };
        static void UploadMaterialTexturesAsync(
            string virtualItemId,
            vector<vector<byte>> materialTexturesBytes,
            CancellationToken cancellationToken,
            const function<void(bool result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            // TODO:
            };
        static void DownloadMaterialTexturesAsync(
            string virtualItemId,
            CancellationToken cancellationToken,
            const function<void(vector<vector<byte>> result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            // TODO:
            };
    };
}}}
