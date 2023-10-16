#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Response/BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    struct GetPlayerLevelResponseData : public RGN::Model::Response::BaseResponseData {
        string playerProgress;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetPlayerLevelResponseData, playerProgress)
    };
}}}