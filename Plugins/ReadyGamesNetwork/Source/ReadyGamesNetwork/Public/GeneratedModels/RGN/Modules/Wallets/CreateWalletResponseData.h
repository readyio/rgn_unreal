#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Wallets {
    struct CreateWalletResponseData {
        string address;
        bool wallet_created = false;
        bool success = false;
        string error;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(CreateWalletResponseData, address, wallet_created, success, error)
    };
}}}