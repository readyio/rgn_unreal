#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../VirtualItems/PriceInfo.h"
#include "../../Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct SetPricesRequestData : public RGN::Model::Request::BaseRequestData {
        string offerId;
        vector<RGN::Modules::VirtualItems::PriceInfo> prices;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(SetPricesRequestData, offerId, prices)
    };
}}}