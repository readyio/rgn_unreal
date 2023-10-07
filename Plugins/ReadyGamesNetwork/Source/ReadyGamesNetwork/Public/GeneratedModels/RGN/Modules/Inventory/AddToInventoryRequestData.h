// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "InventoryData.h"
#include "../../Model/Request/BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
struct AddToInventoryRequestData : public RGN::Model::Request::BaseRequestData {
    vector<RGN::Modules::Inventory::InventoryData> inventoryDatas;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(AddToInventoryRequestData, inventoryDatas)
};
}}}