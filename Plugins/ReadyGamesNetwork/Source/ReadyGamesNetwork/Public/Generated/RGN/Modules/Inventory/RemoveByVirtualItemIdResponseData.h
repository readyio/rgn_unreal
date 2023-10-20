#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Inventory {
    struct RemoveByVirtualItemIdResponseData {
        string virtualItemId;
        int32_t newQuantity = 0;

        friend void to_json(nlohmann::json& nlohmann_json_j, const RemoveByVirtualItemIdResponseData& nlohmann_json_t) {
            nlohmann_json_j["virtualItemId"] = nlohmann_json_t.virtualItemId;
            nlohmann_json_j["newQuantity"] = nlohmann_json_t.newQuantity;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, RemoveByVirtualItemIdResponseData& nlohmann_json_t) {
            if (nlohmann_json_j.contains("virtualItemId")) {
                nlohmann_json_j.at("virtualItemId").get_to(nlohmann_json_t.virtualItemId);
            }
            if (nlohmann_json_j.contains("newQuantity")) {
                nlohmann_json_j.at("newQuantity").get_to(nlohmann_json_t.newQuantity);
            }
        }
    };
}}}