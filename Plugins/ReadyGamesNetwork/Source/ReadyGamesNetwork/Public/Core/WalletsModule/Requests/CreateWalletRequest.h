#pragma once

#include "../../BaseRequest.h"
#include <string>

struct CreateWalletRequest : public BaseRequestBody
{
    std::string password;

    std::string serialize();
};
