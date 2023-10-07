// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Model { namespace Request {
struct LinkWithProviderRequestData : public RGN::Model::Request::BaseRequestData {
    bool useMaster = false;
    string idToken;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(LinkWithProviderRequestData, useMaster, idToken)
};
}}}