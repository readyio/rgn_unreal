#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    /**
     * Blockchain Information for minted Virtual Items
     */
    struct BlockchainInfo {
        /**
         * How many time this item was purchased
         */
        int64_t purchasedQuantity = 0;
        /**
         * Maximal count of virtual items to sell
         */
        int64_t totalQuantity = 0;
        /**
         * The Id of the NFT liked to this virtual item
         */
        int64_t tokenId = 0;
        /**
         * The address of the original minter of the NFT
         */
        string walletAddress;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(BlockchainInfo, purchasedQuantity, totalQuantity, tokenId, walletAddress)
    };
}}}