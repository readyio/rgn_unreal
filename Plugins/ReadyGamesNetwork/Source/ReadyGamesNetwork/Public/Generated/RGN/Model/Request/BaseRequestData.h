#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../../../Core/RGNCore.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Request {
    struct BaseRequestData {
        string appPackageName = RGNCore::GetAppId();
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(BaseRequestData, appPackageName)
    };
}}}