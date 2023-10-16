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
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(MaterialInfo, materialToReplace, baseColor, baseTextureId)
    };
}}}