#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
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

        friend void to_json(nlohmann::json& nlohmann_json_j, const BlockchainInfo& nlohmann_json_t) {
            nlohmann_json_j["purchasedQuantity"] = nlohmann_json_t.purchasedQuantity;
            nlohmann_json_j["totalQuantity"] = nlohmann_json_t.totalQuantity;
            nlohmann_json_j["tokenId"] = nlohmann_json_t.tokenId;
            nlohmann_json_j["walletAddress"] = nlohmann_json_t.walletAddress;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, BlockchainInfo& nlohmann_json_t) {
            if (nlohmann_json_j.contains("purchasedQuantity")) {
                auto json_purchasedQuantity = nlohmann_json_j.at("purchasedQuantity");
                if (!json_purchasedQuantity.is_null() && json_purchasedQuantity.is_number()) {
                    json_purchasedQuantity.get_to(nlohmann_json_t.purchasedQuantity);
                }
            }
            if (nlohmann_json_j.contains("totalQuantity")) {
                auto json_totalQuantity = nlohmann_json_j.at("totalQuantity");
                if (!json_totalQuantity.is_null() && json_totalQuantity.is_number()) {
                    json_totalQuantity.get_to(nlohmann_json_t.totalQuantity);
                }
            }
            if (nlohmann_json_j.contains("tokenId")) {
                auto json_tokenId = nlohmann_json_j.at("tokenId");
                if (!json_tokenId.is_null() && json_tokenId.is_number()) {
                    json_tokenId.get_to(nlohmann_json_t.tokenId);
                }
            }
            if (nlohmann_json_j.contains("walletAddress")) {
                auto json_walletAddress = nlohmann_json_j.at("walletAddress");
                if (!json_walletAddress.is_null() && json_walletAddress.is_string()) {
                    json_walletAddress.get_to(nlohmann_json_t.walletAddress);
                }
            }
        }
    };
}}}