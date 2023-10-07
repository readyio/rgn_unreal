// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct BlockchainInfo {
        int64_t purchasedQuantity = 0;
        int64_t totalQuantity = 0;
        int64_t tokenId = 0;
        string walletAddress;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(BlockchainInfo, purchasedQuantity, totalQuantity, tokenId, walletAddress)
    };
}}}