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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(OpenSeaAttribute, trait_type, value, display_type)
    };
}}}