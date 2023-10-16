#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "StoreOffer.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct GetStoreOffersResponse {
        vector<RGN::Modules::Store::StoreOffer> offers;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetStoreOffersResponse, offers)
    };
}}}