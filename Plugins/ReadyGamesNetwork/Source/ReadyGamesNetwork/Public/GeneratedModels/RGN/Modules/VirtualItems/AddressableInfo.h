// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace VirtualItems {
    struct AddressableInfo {
        vector<string> appIds;
        string addressableId;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(AddressableInfo, appIds, addressableId)
    };
}}}