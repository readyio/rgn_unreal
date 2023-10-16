#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    struct SearchUsersRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string nicknameQuery;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(SearchUsersRequestData, nicknameQuery)
    };
}}}