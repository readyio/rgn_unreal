// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "TimeInfo.h"
#include "../../Model/Request/BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Store {
    struct SetTimeRequestData : public RGN::Model::Request::BaseRequestData {
        string offerId;
        RGN::Modules::Store::TimeInfo time;
        NLOHMANN_DEFINE_TYPE_INTRUSIVE(SetTimeRequestData, offerId, time)
    };
}}}