// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Response/BaseResponseData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Wallets {
    struct IsUserHavePrimaryWalletResponseData : public RGN::Model::Response::BaseResponseData {
        bool isUserHavePrimaryWallet = false;
        string address;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(IsUserHavePrimaryWalletResponseData, isUserHavePrimaryWallet, address)
    };
}}}