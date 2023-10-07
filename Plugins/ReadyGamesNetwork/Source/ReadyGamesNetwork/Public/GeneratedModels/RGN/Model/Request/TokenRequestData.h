// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Model { namespace Request {
struct TokenRequestData : public RGN::Model::Request::BaseRequestData {
    string idToken;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(TokenRequestData, idToken)
};
}}}