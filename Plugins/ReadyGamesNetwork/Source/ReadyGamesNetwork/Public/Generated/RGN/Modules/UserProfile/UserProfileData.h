#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include "UserData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
    struct UserProfileData : public RGN::Modules::UserProfile::UserData {
        string lastAppPackageName;
        bool invisibleStatus = false;
        vector<RGN::Modules::Currency::Currency> currencies;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(UserProfileData, lastAppPackageName, invisibleStatus, currencies)
    };
}}}