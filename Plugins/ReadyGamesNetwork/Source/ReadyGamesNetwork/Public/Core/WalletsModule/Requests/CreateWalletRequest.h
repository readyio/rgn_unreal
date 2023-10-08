#pragma once

#include "../../../json.hpp"
#include "../../BaseRequest.h"
#include <string>

using json = nlohmann::json;

struct CreateWalletRequest : public BaseRequestBody
{
    std::string password;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(CreateWalletRequest, password);
};
