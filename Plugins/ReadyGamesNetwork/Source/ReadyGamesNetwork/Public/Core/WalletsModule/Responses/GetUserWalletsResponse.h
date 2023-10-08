#pragma once

#include "../Classes/Wallet.h"
#include <string>
#include <vector>

struct GetUserWalletsResponse
{
    std::vector<Wallet> wallets;

    GetUserWalletsResponse(std::string json);
};
