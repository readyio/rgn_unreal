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
                nlohmann_json_j.at("source").get_to(nlohmann_json_t.source);
            }
            if (nlohmann_json_j.contains("large")) {
                nlohmann_json_j.at("large").get_to(nlohmann_json_t.large);
            }
            if (nlohmann_json_j.contains("medium")) {
                nlohmann_json_j.at("medium").get_to(nlohmann_json_t.medium);
            }
            if (nlohmann_json_j.contains("small")) {
                nlohmann_json_j.at("small").get_to(nlohmann_json_t.small);
            }
        }
    };
}}}