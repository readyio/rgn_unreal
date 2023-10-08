#pragma once

#include "../../../json.hpp"
#include <string>

using json = nlohmann::json;

struct CreateWalletResponse
{
    std::string address;
    bool wallet_created;
    bool success;
    std::string error;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(CreateWalletResponse, address, wallet_created, success, error);
};
