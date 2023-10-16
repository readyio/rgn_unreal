#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "RGNWallet.h"
#include "../../Model/Response/BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Wallets {
    struct GetUserWalletsResponseData : public RGN::Model::Response::BaseResponseData {
        vector<RGN::Modules::Wallets::RGNWallet> wallets;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetUserWalletsResponseData, wallets)
    };
}}}