#pragma once

#include <string>

struct CreateWalletResponse
{
    std::string address;
    bool wallet_created;
    bool success;
    std::string error;

    CreateWalletResponse(std::string json);
};
