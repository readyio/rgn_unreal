#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseMigrationRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
    struct ClaimByIdRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string id;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(ClaimByIdRequestData, id)
    };
}}}