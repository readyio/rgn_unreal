#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../json.hpp"
#include "Requirement.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model {
    /**
     * A class that represents a leaderboard join or store offer purchase requirements on Ready Games Network.
     */
    struct RequirementData {
        /**
         * The operation to check the F:RGN.Model.RequirementData.requirements with.
         * Available operations are:
         * `and` - the user must meet all of the requirements.
         * `or` - the user must meet at least one of the requirements.
         */
        string operation;
        /**
         * The list of requirements.
         */
        vector<RGN::Model::Requirement> requirements;

        friend void to_json(nlohmann::json& nlohmann_json_j, const RequirementData& nlohmann_json_t) {
            nlohmann_json_j["operation"] = nlohmann_json_t.operation;
            nlohmann_json_j["requirements"] = nlohmann_json_t.requirements;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, RequirementData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("operation")) {
                auto json_operation = nlohmann_json_j.at("operation");
                if (!json_operation.is_null() && json_operation.is_string()) {
                    json_operation.get_to(nlohmann_json_t.operation);
                }
            }
            if (nlohmann_json_j.contains("requirements")) {
                auto json_requirements = nlohmann_json_j.at("requirements");
                if (!json_requirements.is_null() && json_requirements.is_array()) {
                    json_requirements.get_to(nlohmann_json_t.requirements);
                }
            }
        }
    };
}}