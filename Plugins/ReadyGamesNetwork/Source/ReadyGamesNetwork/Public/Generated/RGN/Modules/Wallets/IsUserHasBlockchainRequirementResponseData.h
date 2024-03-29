#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Response/BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Wallets {
    struct IsUserHasBlockchainRequirementResponseData : public RGN::Model::Response::BaseResponseData {
        bool hasBlockchainRequirement = false;

        friend void to_json(nlohmann::json& nlohmann_json_j, const IsUserHasBlockchainRequirementResponseData& nlohmann_json_t) {
            nlohmann_json_j["status"] = nlohmann_json_t.status;
            nlohmann_json_j["message"] = nlohmann_json_t.message;
            nlohmann_json_j["hasBlockchainRequirement"] = nlohmann_json_t.hasBlockchainRequirement;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, IsUserHasBlockchainRequirementResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("status")) {
                auto json_status = nlohmann_json_j.at("status");
                if (!json_status.is_null() && json_status.is_number()) {
                    json_status.get_to(nlohmann_json_t.status);
                }
            }
            if (nlohmann_json_j.contains("message")) {
                auto json_message = nlohmann_json_j.at("message");
                if (!json_message.is_null() && json_message.is_string()) {
                    json_message.get_to(nlohmann_json_t.message);
                }
            }
            if (nlohmann_json_j.contains("hasBlockchainRequirement")) {
                auto json_hasBlockchainRequirement = nlohmann_json_j.at("hasBlockchainRequirement");
                if (!json_hasBlockchainRequirement.is_null() && json_hasBlockchainRequirement.is_boolean()) {
                    json_hasBlockchainRequirement.get_to(nlohmann_json_t.hasBlockchainRequirement);
                }
            }
        }
    };
}}}