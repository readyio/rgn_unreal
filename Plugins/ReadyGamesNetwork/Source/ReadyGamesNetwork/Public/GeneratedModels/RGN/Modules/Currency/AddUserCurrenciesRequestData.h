// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include "Currency.h"
#include "../../Model/Request/BaseRequestData.h"
using json = nlohmann::json;
using namespace std;

namespace RGN { namespace Modules { namespace Currency {
struct AddUserCurrenciesRequestData : public RGN::Model::Request::BaseRequestData {
    vector<RGN::Modules::Currency::Currency> currencies;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(AddUserCurrenciesRequestData, currencies)
};
}}}