#pragma once

#include "../json.hpp"
#include <string>

using namespace std;
using json = nlohmann::json;

struct BaseRequest {
	string appId;
	int version;
	NLOHMANN_DEFINE_TYPE_INTRUSIVE(BaseRequest, appId, version);
};