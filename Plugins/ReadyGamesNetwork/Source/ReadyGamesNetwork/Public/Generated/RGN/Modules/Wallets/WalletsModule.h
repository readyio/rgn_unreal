#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "IsUserHavePrimaryWalletResponseData.h"
#include "GetUserWalletsResponseData.h"
#include "CreateWalletResponseData.h"
#include <string>
#include <functional>
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Wallets {
    class WalletsModule {
    public:
        static void IsUserHavePrimaryWalletAsync(
            const function<void(RGN::Modules::Wallets::IsUserHavePrimaryWalletResponseData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void GetUserWalletsAsync(
            const function<void(RGN::Modules::Wallets::GetUserWalletsResponseData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void CreateWalletAsync(
            string password,
            const function<void(RGN::Modules::Wallets::CreateWalletResponseData result)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
    };
}}}