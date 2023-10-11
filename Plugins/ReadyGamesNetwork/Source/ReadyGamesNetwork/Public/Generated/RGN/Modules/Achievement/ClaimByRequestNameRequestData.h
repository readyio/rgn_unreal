#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseMigrationRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    struct ClaimByRequestNameRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string requestName;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(ClaimByRequestNameRequestData, requestName)
    };
}}}