#include "Core/WalletsModule/WalletsModule.h"
#include "Core/WalletsModule/Requests/CreateWalletRequest.h"
#include "Core/WalletsModule/Requests/GetUserWalletsRequest.h"
#include "Core/CoreModule/CoreModule.h"

void WalletsModule::CreateWallet(const std::string& password,
    const std::function<void(CreateWalletResponse)>& complete,
    const std::function<void(int, std::string)>& fail) {
        CreateWalletRequest request;
        request.version = 2;
        request.password = password;
        CoreModule::CallAPI("wallets-createWallet", request, complete, fail);
    }

void WalletsModule::GetUserWallets(
    const std::function<void(GetUserWalletsResponse)>& complete,
    const std::function<void(int, std::string)>& fail) {
        GetUserWalletsRequest request;
        request.version = 2;
        CoreModule::CallAPI("wallets-getUserWallets", request, complete, fail);
    }