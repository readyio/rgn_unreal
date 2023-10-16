#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct RGNCoinEconomyProduct {
        string uid;
        float priceInUSD = 0;
        int32_t quantity = 0;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(RGNCoinEconomyProduct, uid, priceInUSD, quantity)
    };
}}}