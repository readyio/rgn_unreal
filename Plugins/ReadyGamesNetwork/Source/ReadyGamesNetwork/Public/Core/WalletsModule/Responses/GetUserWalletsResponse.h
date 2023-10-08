#pragma once

#include "../../../json.hpp"
#include "../Classes/Wallet.h"
#include <string>
#include <vector>

using json = nlohmann::json;

struct GetUserWalletsResponse
{
    std::vector<Wallet> wallets;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetUserWalletsResponse, wallets);
};
