#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Model { namespace Response {
    struct RefreshTokensResponseData {
        string userId;
        string idToken;
        string refreshToken;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(RefreshTokensResponseData, userId, idToken, refreshToken)
    };
}}}