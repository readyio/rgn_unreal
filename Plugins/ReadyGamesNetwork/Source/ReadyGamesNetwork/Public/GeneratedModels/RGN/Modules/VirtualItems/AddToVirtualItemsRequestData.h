// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItem.h"
#include "../../Model/Request/BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
struct AddToVirtualItemsRequestData : public RGN::Model::Request::BaseRequestData {
    RGN::Modules::VirtualItems::VirtualItem virtualItem;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(AddToVirtualItemsRequestData, virtualItem)
};
}}}