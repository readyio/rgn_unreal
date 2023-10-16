#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "UserData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    struct SearchUsersResultData {
        vector<RGN::Modules::UserProfile::UserData> queryResult;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(SearchUsersResultData, queryResult)
    };
}}}