// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../VirtualItems/VirtualItem.h"
#include "../../Utility/BaseMigrationRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Creator {
struct CreatorSubmitItemRequestData : public RGN::Utility::BaseMigrationRequestData {
    RGN::Modules::VirtualItems::VirtualItem customizedItem;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(CreatorSubmitItemRequestData, customizedItem)
};
}}}