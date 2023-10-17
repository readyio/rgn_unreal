#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct GetVirtualItemsByIdsRequestData : public RGN::Model::Request::BaseRequestData {
        vector<string> ids;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetVirtualItemsByIdsRequestData, ids)
    };
}}}