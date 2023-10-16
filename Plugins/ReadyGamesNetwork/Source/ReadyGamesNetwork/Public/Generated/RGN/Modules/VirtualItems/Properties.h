#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    /**
     * Represents properties associated with a virtual item within the Ready Games Network (RGN).
     */
    struct Properties {
        /**
         * List of application identifiers where the properties are used.
         */
        vector<string> appIds;
        /**
         * Game-specific properties in JSON format.
         */
        string json;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(Properties, appIds, json)
    };
}}}