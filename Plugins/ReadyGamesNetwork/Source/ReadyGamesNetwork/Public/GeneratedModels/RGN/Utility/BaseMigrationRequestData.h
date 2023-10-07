// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../json.hpp"
#include "../Model/Request/BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Utility {
struct BaseMigrationRequestData : public RGN::Model::Request::BaseRequestData {
    int32_t version = 0;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(BaseMigrationRequestData, version)
};
}}