#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct MaterialInfo {
        string materialToReplace;
        string baseColor;
        string baseTextureId;

        friend void to_json(nlohmann::json& nlohmann_json_j, const MaterialInfo& nlohmann_json_t) {
            nlohmann_json_j["materialToReplace"] = nlohmann_json_t.materialToReplace;
            nlohmann_json_j["baseColor"] = nlohmann_json_t.baseColor;
            nlohmann_json_j["baseTextureId"] = nlohmann_json_t.baseTextureId;
        }

        friend void from_json(const nlohmann::json& nlohmann_json_j, MaterialInfo& nlohmann_json_t) {
            if (nlohmann_json_j.contains("materialToReplace")) {
                auto json_materialToReplace = nlohmann_json_j.at("materialToReplace");
                if (!json_materialToReplace.is_null() && json_materialToReplace.is_string()) {
                    json_materialToReplace.get_to(nlohmann_json_t.materialToReplace);
                }
            }
            if (nlohmann_json_j.contains("baseColor")) {
                auto json_baseColor = nlohmann_json_j.at("baseColor");
                if (!json_baseColor.is_null() && json_baseColor.is_string()) {
                    json_baseColor.get_to(nlohmann_json_t.baseColor);
                }
            }
            if (nlohmann_json_j.contains("baseTextureId")) {
                auto json_baseTextureId = nlohmann_json_j.at("baseTextureId");
                if (!json_baseTextureId.is_null() && json_baseTextureId.is_string()) {
                    json_baseTextureId.get_to(nlohmann_json_t.baseTextureId);
                }
            }
        }
    };
}}}