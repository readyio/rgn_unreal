#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct AddressableInfo {
        vector<string> appIds;
        string addressableId;

        friend void to_json(nlohmann::json& nlohmann_json_j, const AddressableInfo& nlohmann_json_t) {
            nlohmann_json_j["appIds"] = nlohmann_json_t.appIds;
            nlohmann_json_j["addressableId"] = nlohmann_json_t.addressableId;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, AddressableInfo& nlohmann_json_t) {
            if (nlohmann_json_j.contains("appIds")) {
                auto json_appIds = nlohmann_json_j.at("appIds");
                if (!json_appIds.is_null() && json_appIds.is_array()) {
                    json_appIds.get_to(nlohmann_json_t.appIds);
                }
            }
            if (nlohmann_json_j.contains("addressableId")) {
                auto json_addressableId = nlohmann_json_j.at("addressableId");
                if (!json_addressableId.is_null() && json_addressableId.is_string()) {
                    json_addressableId.get_to(nlohmann_json_t.addressableId);
                }
            }
        }
    };
}}}