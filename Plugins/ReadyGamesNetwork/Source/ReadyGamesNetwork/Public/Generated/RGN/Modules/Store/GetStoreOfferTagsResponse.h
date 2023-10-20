#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct GetStoreOfferTagsResponse {
        vector<string> tags;

        friend void to_json(nlohmann::json& nlohmann_json_j, const GetStoreOfferTagsResponse& nlohmann_json_t) {
            nlohmann_json_j["tags"] = nlohmann_json_t.tags;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, GetStoreOfferTagsResponse& nlohmann_json_t) {
            if (nlohmann_json_j.contains("tags")) {
                nlohmann_json_j.at("tags").get_to(nlohmann_json_t.tags);
            }
        }
    };
}}}