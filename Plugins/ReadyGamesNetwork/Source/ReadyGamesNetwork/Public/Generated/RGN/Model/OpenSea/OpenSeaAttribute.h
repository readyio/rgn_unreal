#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace OpenSea {
    struct OpenSeaAttribute {
        /**
         * Name of the trait
         */
        string trait_type;
        /**
         * Value of the trait
         */
        string value = nullptr;
        /**
         * Indicating how you would like it to be displayed
         */
        string display_type;

        friend void to_json(nlohmann::json& nlohmann_json_j, const OpenSeaAttribute& nlohmann_json_t) {
            nlohmann_json_j["trait_type"] = nlohmann_json_t.trait_type;
            nlohmann_json_j["value"] = nlohmann_json_t.value;
            nlohmann_json_j["display_type"] = nlohmann_json_t.display_type;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, OpenSeaAttribute& nlohmann_json_t) {
            if (nlohmann_json_j.contains("trait_type")) {
                auto json_trait_type = nlohmann_json_j.at("trait_type");
                if (!json_trait_type.is_null() && json_trait_type.is_string()) {
                    json_trait_type.get_to(nlohmann_json_t.trait_type);
                }
            }
            if (nlohmann_json_j.contains("value")) {
                auto json_value = nlohmann_json_j.at("value");
                if (!json_value.is_null()) {
                    json_value.get_to(nlohmann_json_t.value);
                }
            }
            if (nlohmann_json_j.contains("display_type")) {
                auto json_display_type = nlohmann_json_j.at("display_type");
                if (!json_display_type.is_null() && json_display_type.is_string()) {
                    json_display_type.get_to(nlohmann_json_t.display_type);
                }
            }
        }
    };
}}}