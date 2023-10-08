#include "Core/WalletsModule/Responses/CreateWalletResponse.h"

CreateWalletResponse::CreateWalletResponse(std::string json) {
    // TODO: 
    address = "fake_address";
    wallet_created = false;
    success = true;
    error = "";
}