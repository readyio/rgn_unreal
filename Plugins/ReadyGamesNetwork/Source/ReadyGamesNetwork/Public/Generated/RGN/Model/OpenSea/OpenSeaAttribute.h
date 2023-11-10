#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace OpenSea {
    /**
     * Represents an attribute for an item on OpenSea, typically a trait associated with a collectible or NFT.
     */
    struct OpenSeaAttribute {
        /**
         * The name of the trait that this attribute represents.
         */
        string trait_type;
        /**
         * The value of the trait. This can be a string, number, or any other type of object.
         */
        string value = nullptr;
        /**
         * A string specifying how the trait should be displayed. 
         * Could be used to indicate whether the trait is a date, a percentage, etc.
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