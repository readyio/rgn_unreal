#include "Core/Wallets/WalletsModule.h"
#include "Core/RGNCore.h"
#include "GeneratedModels/RGN/Utility/BaseMigrationRequestData.h"
#include "GeneratedModels/RGN/Modules/Wallets/CreateWalletRequestData.h"

using BaseMigrationRequestData = RGN::Utility::BaseMigrationRequestData;
using CreateWalletRequest = RGN::Modules::Wallets::CreateWalletRequestData;

void WalletsModule::IsUserHavePrimaryWalletAsync(
    const function<void(IsUserHavePrimaryWalletResponseData)>& complete,
    const function<void(int, string)>& fail) {
        BaseMigrationRequestData request;
        request.version = 2;
        RGNCore::CallAPI("wallets-isUserHavePrimaryWallet", request, complete, fail);
    }

void WalletsModule::CreateWallet(const string& password,
    const function<void(CreateWalletResponseData)>& complete,
    const function<void(int, string)>& fail) {
        CreateWalletRequest request;
        request.version = 2;
        request.password = password;
        RGNCore::CallAPI("wallets-createWallet", request, complete, fail);
    }

void WalletsModule::GetUserWallets(
    const function<void(GetUserWalletsResponseData)>& complete,
    const function<void(int, string)>& fail) {
        BaseMigrationRequestData request;
        request.version = 2;
        RGNCore::CallAPI("wallets-getUserWallets", request, complete, fail);
    }