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

        friend void to_json(nlohmann::json& nlohmann_json_j, const OnGameCompleteResult& nlohmann_json_t) {
            nlohmann_json_j["gameProgress"] = nlohmann_json_t.gameProgress;
            nlohmann_json_j["userCurrencies"] = nlohmann_json_t.userCurrencies;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, OnGameCompleteResult& nlohmann_json_t) {
            if (nlohmann_json_j.contains("gameProgress")) {
                nlohmann_json_j.at("gameProgress").get_to(nlohmann_json_t.gameProgress);
            }
            if (nlohmann_json_j.contains("userCurrencies")) {
                nlohmann_json_j.at("userCurrencies").get_to(nlohmann_json_t.userCurrencies);
            }
        }
    };
}}}