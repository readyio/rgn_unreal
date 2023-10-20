#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Wallets {
    struct RGNWallet {
        string address;

        friend void to_json(nlohmann::json& nlohmann_json_j, const RGNWallet& nlohmann_json_t) {
            nlohmann_json_j["address"] = nlohmann_json_t.address;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, RGNWallet& nlohmann_json_t) {
            if (nlohmann_json_j.contains("address")) {
                nlohmann_json_j.at("address").get_to(nlohmann_json_t.address);
            }
        }
    };
}}}