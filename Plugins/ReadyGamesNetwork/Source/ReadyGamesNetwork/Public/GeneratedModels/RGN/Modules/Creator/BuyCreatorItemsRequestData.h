#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct BuyCreatorItemsRequestData : public RGN::Model::Request::BaseRequestData {
        vector<string> itemIds;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(BuyCreatorItemsRequestData, itemIds)
    };
}}}