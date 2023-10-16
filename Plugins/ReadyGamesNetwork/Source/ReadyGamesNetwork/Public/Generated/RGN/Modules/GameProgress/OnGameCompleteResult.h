#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "GameProgress.h"
#include "../Currency/UserCurrencyData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace GameProgress {
    struct OnGameCompleteResult {
        RGN::Modules::GameProgress::GameProgress gameProgress;
        RGN::Modules::Currency::UserCurrencyData userCurrencies;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(OnGameCompleteResult, gameProgress, userCurrencies)
    };
}}}