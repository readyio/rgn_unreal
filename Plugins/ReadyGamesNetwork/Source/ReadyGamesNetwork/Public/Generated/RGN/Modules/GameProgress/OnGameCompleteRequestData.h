#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    struct OnGameCompleteRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        vector<RGN::Modules::Currency::Currency> reward;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(OnGameCompleteRequestData, reward)
    };
}}}