#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Model { namespace Request {
    struct LoginRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        string bio;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(LoginRequestData, bio)
    };
}}}