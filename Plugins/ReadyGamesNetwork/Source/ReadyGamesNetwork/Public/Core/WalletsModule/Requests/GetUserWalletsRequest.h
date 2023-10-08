#pragma once

#include "../../../json.hpp"
#include "../../BaseRequest.h"
#include <string>

using json = nlohmann::json;

struct GetUserWalletsRequest : BaseRequestBody
{

};
