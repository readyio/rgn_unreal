#pragma once

#include "../../BaseRequest.h"
#include <string>

struct GetUserWalletsRequest : BaseRequestBody
{
    std::string serialize();
};
