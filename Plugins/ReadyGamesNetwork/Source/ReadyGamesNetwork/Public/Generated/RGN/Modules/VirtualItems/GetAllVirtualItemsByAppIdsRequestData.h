#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct GetAllVirtualItemsByAppIdsRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        vector<string> appIds;
        int32_t limit = 0;
        string startAfter;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetAllVirtualItemsByAppIdsRequestData, appIds, limit, startAfter)
    };
}}}