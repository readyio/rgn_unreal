#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct CreatorSignupResponseData {
        string message;
        bool success = false;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(CreatorSignupResponseData, message, success)
    };
}}}