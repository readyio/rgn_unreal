#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "IsUserHavePrimaryWalletResponseData.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include "GetUserWalletsResponseData.h"
#include "CreateWalletResponseData.h"
#include "CreateWalletRequestData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace Wallets {
    class WalletsModule {
    public:
        static void IsUserHavePrimaryWalletAsync(
            const function<void(const RGN::Modules::Wallets::IsUserHavePrimaryWalletResponseData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseMigrationRequestData, RGN::Modules::Wallets::IsUserHavePrimaryWalletResponseData>(
                    "wallets-isUserHavePrimaryWallet",
                    requestData,
                    complete,
                    fail);
            };
        static void GetUserWalletsAsync(
            const function<void(const RGN::Modules::Wallets::GetUserWalletsResponseData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Model::Request::BaseMigrationRequestData requestData;
                RGNCore::CallAPI<RGN::Model::Request::BaseMigrationRequestData, RGN::Modules::Wallets::GetUserWalletsResponseData>(
                    "wallets-getUserWallets",
                    requestData,
                    complete,
                    fail);
            };
        /**
         * Creates user wallet. Right now it is possible to create just one wallet per user
         * @param password - Password for the wallet
         * @return Information of the create operation was successful.
         */
        static void CreateWalletAsync(
            const string& password,
            const function<void(const RGN::Modules::Wallets::CreateWalletResponseData& result)>& complete,
            const function<void(const int httpCode, const string& error)>& fail) {
                RGN::Modules::Wallets::CreateWalletRequestData requestData;
                requestData.password = password;
                RGNCore::CallAPI<RGN::Modules::Wallets::CreateWalletRequestData, RGN::Modules::Wallets::CreateWalletResponseData>(
                    "wallets-createWallet",
                    requestData,
                    complete,
                    fail);
            };
    };
}}}