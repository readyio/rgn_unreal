#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Messaging {
    /**
     * This struct used to get messages from the backend
     */
    struct Message {
        /**
         * Unique id of the message
         */
        string Id;
        /**
         * Payload string to attach data to the message
         * This could be for example Json string
         */
        string Payload;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(Message, Id, Payload)
    };
}}}