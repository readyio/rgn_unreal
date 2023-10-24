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
                auto json_virtualItemId = nlohmann_json_j.at("virtualItemId");
                if (!json_virtualItemId.is_null() && json_virtualItemId.is_string()) {
                    json_virtualItemId.get_to(nlohmann_json_t.virtualItemId);
                }
            }
            if (nlohmann_json_j.contains("newQuantity")) {
                auto json_newQuantity = nlohmann_json_j.at("newQuantity");
                if (!json_newQuantity.is_null() && json_newQuantity.is_number()) {
                    json_newQuantity.get_to(nlohmann_json_t.newQuantity);
                }
            }
        }
    };
}}}