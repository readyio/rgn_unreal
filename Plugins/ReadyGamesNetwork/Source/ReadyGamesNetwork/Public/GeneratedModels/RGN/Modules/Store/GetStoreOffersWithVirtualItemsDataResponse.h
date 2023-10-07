// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "StoreOffer.h"
#include "../VirtualItems/VirtualItem.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct GetStoreOffersWithVirtualItemsDataResponse {
        vector<RGN::Modules::Store::StoreOffer> offers;
        vector<RGN::Modules::VirtualItems::VirtualItem> virtualItems;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetStoreOffersWithVirtualItemsDataResponse, offers, virtualItems)
    };
}}}