#include "Core/Wallets/WalletsModule.h"
#include "Core/RGNCore.h"
#include "Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "Generated/RGN/Modules/Wallets/CreateWalletRequestData.h"
#include "Logging/StructuredLog.h"

using BaseMigrationRequestData = RGN::Model::Request::BaseMigrationRequestData;
using CreateWalletRequest = RGN::Modules::Wallets::CreateWalletRequestData;

void WalletsModule::IsUserHavePrimaryWalletAsync(
    const function<void(IsUserHavePrimaryWalletResponseData)>& complete,
    const function<void(int, string)>& fail) {
        BaseMigrationRequestData request;
        request.version = 2;
        RGNCore::CallAPI<BaseMigrationRequestData, IsUserHavePrimaryWalletResponseData>("wallets-isUserHavePrimaryWallet", request, complete, fail);
    }

void WalletsModule::CreateWallet(const string& password,
    const function<void(CreateWalletResponseData)>& complete,
    const function<void(int, string)>& fail) {
        CreateWalletRequest request;
        request.version = 2;
        request.password = password;
        RGNCore::CallAPI<CreateWalletRequest, CreateWalletResponseData>("wallets-createWallet", request, complete, fail);
    }

void WalletsModule::GetUserWallets(
    const function<void(GetUserWalletsResponseData)>& complete,
    const function<void(int, string)>& fail) {
        BaseMigrationRequestData request;
        request.version = 2;
        RGNCore::CallAPI<BaseMigrationRequestData, GetUserWalletsResponseData>("wallets-getUserWallets", request, complete, fail);
    }