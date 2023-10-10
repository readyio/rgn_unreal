#include "Core/WalletsModule/WalletsModule.h"
#include "Core/CoreModule/CoreModule.h"
#include "GeneratedModels/RGN/Utility/BaseMigrationRequestData.h"
#include "GeneratedModels/RGN/Modules/Wallets/CreateWalletRequestData.h"

using BaseMigrationRequestData = RGN::Utility::BaseMigrationRequestData;
using CreateWalletRequest = RGN::Modules::Wallets::CreateWalletRequestData;

void WalletsModule::CreateWallet(const string& password,
    const function<void(CreateWalletResponse)>& complete,
    const function<void(int, string)>& fail) {
        CreateWalletRequest request;
        request.version = 2;
        request.password = password;
        CoreModule::CallAPI("wallets-createWallet", request, complete, fail);
    }

void WalletsModule::GetUserWallets(
    const function<void(GetUserWalletsResponse)>& complete,
    const function<void(int, string)>& fail) {
        BaseMigrationRequestData request;
        request.version = 2;
        CoreModule::CallAPI("wallets-getUserWallets", request, complete, fail);
    }