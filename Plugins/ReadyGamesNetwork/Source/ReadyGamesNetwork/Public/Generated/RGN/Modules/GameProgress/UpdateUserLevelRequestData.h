#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../Currency/Currency.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    struct UpdateUserLevelRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string playerProgress;
        vector<RGN::Modules::Currency::Currency> reward;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(UpdateUserLevelRequestData, playerProgress, reward)
    };
}}}