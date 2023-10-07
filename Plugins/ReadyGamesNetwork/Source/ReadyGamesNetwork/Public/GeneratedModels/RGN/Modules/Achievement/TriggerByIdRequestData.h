// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Utility/BaseMigrationRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Achievement {
struct TriggerByIdRequestData : public RGN::Utility::BaseMigrationRequestData {
    string id;
    int32_t progress;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(TriggerByIdRequestData, id, progress)
};
}}}