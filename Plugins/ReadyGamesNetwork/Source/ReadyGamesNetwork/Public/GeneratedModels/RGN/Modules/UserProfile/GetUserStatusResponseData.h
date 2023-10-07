// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Model/Response/BaseResponseData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace UserProfile {
struct GetUserStatusResponseData : public RGN::Model::Response::BaseResponseData {
    RGN::Modules::UserProfile::UserStatus userStatus;
    string lastAppPackageName;
    int64_t lastActivityTS = 0;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(GetUserStatusResponseData, userStatus, lastAppPackageName, lastActivityTS)
};
}}}