#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Request/BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
    struct PurchaseRGNCoinRequestData : public RGN::Model::Request::BaseRequestData {
        string iapUUID;
        string requestId;
        string iapTransactionId;
        string iapReceipt;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(PurchaseRGNCoinRequestData, iapUUID, requestId, iapTransactionId, iapReceipt)
    };
}}}