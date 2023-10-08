#pragma once

#include "../../../json.hpp"
#include <string>

using json = nlohmann::json;

struct Wallet
{
    std::string address;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Wallet, address)
};
