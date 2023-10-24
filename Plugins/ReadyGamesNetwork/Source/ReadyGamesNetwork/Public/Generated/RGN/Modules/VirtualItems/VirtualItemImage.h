#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/ImageUrl.h"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct VirtualItemImage : public RGN::Model::ImageUrl {

        friend void to_json(nlohmann::json& nlohmann_json_j, const VirtualItemImage& nlohmann_json_t) {
            nlohmann_json_j["source"] = nlohmann_json_t.source;
            nlohmann_json_j["large"] = nlohmann_json_t.large;
            nlohmann_json_j["medium"] = nlohmann_json_t.medium;
            nlohmann_json_j["small"] = nlohmann_json_t.small;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, VirtualItemImage& nlohmann_json_t) {
            if (nlohmann_json_j.contains("source")) {
                auto json_source = nlohmann_json_j.at("source");
                if (!json_source.is_null() && json_source.is_string()) {
                    json_source.get_to(nlohmann_json_t.source);
                }
            }
            if (nlohmann_json_j.contains("large")) {
                auto json_large = nlohmann_json_j.at("large");
                if (!json_large.is_null() && json_large.is_string()) {
                    json_large.get_to(nlohmann_json_t.large);
                }
            }
            if (nlohmann_json_j.contains("medium")) {
                auto json_medium = nlohmann_json_j.at("medium");
                if (!json_medium.is_null() && json_medium.is_string()) {
                    json_medium.get_to(nlohmann_json_t.medium);
                }
            }
            if (nlohmann_json_j.contains("small")) {
                auto json_small = nlohmann_json_j.at("small");
                if (!json_small.is_null() && json_small.is_string()) {
                    json_small.get_to(nlohmann_json_t.small);
                }
            }
        }
    };
}}}