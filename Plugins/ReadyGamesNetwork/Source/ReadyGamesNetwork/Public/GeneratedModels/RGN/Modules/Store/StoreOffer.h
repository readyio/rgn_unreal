// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "TimeInfo.h"
#include "../VirtualItems/Properties.h"
#include "../VirtualItems/PriceInfo.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Store {
struct StoreOffer {
    string id;
    string name;
    string description;
    vector<string> appIds;
    vector<string> tags;
    string imageUrl;
    int64_t createdAt;
    int64_t updatedAt;
    string createdBy;
    string updatedBy;
    RGN::Modules::Store::TimeInfo time;
    vector<RGN::Modules::VirtualItems::Properties> properties;
    vector<string> itemIds;
    vector<RGN::Modules::VirtualItems::PriceInfo> prices;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(StoreOffer, id, name, description, appIds, tags, imageUrl, createdAt, updatedAt, createdBy, updatedBy, time, properties, itemIds, prices)
};
}}}