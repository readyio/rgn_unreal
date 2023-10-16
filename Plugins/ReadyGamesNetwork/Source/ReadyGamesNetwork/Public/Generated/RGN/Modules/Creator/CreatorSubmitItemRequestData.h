#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../VirtualItems/VirtualItem.h"
#include "../../Model/Request/BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
    struct CreatorSubmitItemRequestData : public RGN::Model::Request::BaseMigrationRequestData {
        RGN::Modules::VirtualItems::VirtualItem customizedItem;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(CreatorSubmitItemRequestData, customizedItem)
    };
}}}