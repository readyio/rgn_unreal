#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Leaderboard {
    /**
     * Availability information
     */
    struct IsStoreOfferAvailableResponseData {
        /**
         * Indicates if the store offer is available.
         */
        bool isAvailable = false;
        /**
         * The reason why the store offer is not available.
         */
        string reason;

        friend void to_json(nlohmann::json& nlohmann_json_j, const IsStoreOfferAvailableResponseData& nlohmann_json_t) {
            nlohmann_json_j["isAvailable"] = nlohmann_json_t.isAvailable;
            nlohmann_json_j["reason"] = nlohmann_json_t.reason;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, IsStoreOfferAvailableResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("isAvailable")) {
                auto json_isAvailable = nlohmann_json_j.at("isAvailable");
                if (!json_isAvailable.is_null() && json_isAvailable.is_boolean()) {
                    json_isAvailable.get_to(nlohmann_json_t.isAvailable);
                }
            }
            if (nlohmann_json_j.contains("reason")) {
                auto json_reason = nlohmann_json_j.at("reason");
                if (!json_reason.is_null() && json_reason.is_string()) {
                    json_reason.get_to(nlohmann_json_t.reason);
                }
            }
        }
    };
}}}