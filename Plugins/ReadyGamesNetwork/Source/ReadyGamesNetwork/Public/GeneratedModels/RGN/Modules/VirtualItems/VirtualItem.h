// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "VirtualItemImage.h"
#include "AddressableInfo.h"
#include "Properties.h"
#include "PriceInfo.h"
#include "BlockchainInfo.h"
#include "MaterialInfo.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
struct VirtualItem {
    string id;
    string name;
    string description;
    RGN::Modules::VirtualItems::VirtualItemImage image;
    int64_t createdAt;
    int64_t updatedAt;
    string createdBy;
    string updatedBy;
    bool isStackable;
    bool isNFT;
    vector<string> appIds;
    vector<string> tags;
    vector<string> childs;
    vector<RGN::Modules::VirtualItems::AddressableInfo> addressableIds;
    vector<RGN::Modules::VirtualItems::Properties> properties;
    vector<RGN::Modules::VirtualItems::PriceInfo> prices;
    int64_t totalQuantity;
    RGN::Modules::VirtualItems::BlockchainInfo blockchain;
    vector<string> compatibleItemIds;
    vector<RGN::Modules::VirtualItems::MaterialInfo> materialInfos;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(VirtualItem, id, name, description, image, createdAt, updatedAt, createdBy, updatedBy, isStackable, isNFT, appIds, tags, childs, addressableIds, properties, prices, totalQuantity, blockchain, compatibleItemIds, materialInfos)
};
}}}