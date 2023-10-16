#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Request {
    struct RefreshTokensRequestData : public RGN::Model::Request::BaseRequestData {
        string refreshToken;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(RefreshTokensRequestData, refreshToken)
    };
}}}