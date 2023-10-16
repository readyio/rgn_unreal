#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct GetStoreOfferTagsResponse {
        vector<string> tags;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetStoreOfferTagsResponse, tags)
    };
}}}