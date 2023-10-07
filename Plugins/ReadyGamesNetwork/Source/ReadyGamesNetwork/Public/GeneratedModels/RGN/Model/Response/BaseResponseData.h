// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Model { namespace Response {
    struct BaseResponseData {
        int32_t status = 0;
        string message;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(BaseResponseData, status, message)
    };
}}}