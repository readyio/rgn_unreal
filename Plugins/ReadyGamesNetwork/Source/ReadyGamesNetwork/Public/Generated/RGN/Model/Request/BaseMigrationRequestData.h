#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Model { namespace Request {
    /**
     * This class supports multiple versions of an API by appending a "version" parameter to the request data.
     */
    struct BaseMigrationRequestData : public RGN::Model::Request::BaseRequestData {
        /**
         * Represents the current version of the API implementation on the server.
         */
        int32_t version = 2;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(BaseMigrationRequestData, version)
    };
}}}