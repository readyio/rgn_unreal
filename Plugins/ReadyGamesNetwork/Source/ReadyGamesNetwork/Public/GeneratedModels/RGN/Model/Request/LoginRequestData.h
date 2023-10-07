// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "../../Utility/BaseMigrationRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Model { namespace Request {
struct LoginRequestData : public RGN::Utility::BaseMigrationRequestData {
    string bio;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(LoginRequestData, bio)
};
}}}