#pragma once

#include "../json.hpp"
#include <string>

using json = nlohmann::json;

struct BaseRequestBody {
	std::string appId;
	int version;

	NLOHMANN_DEFINE_TYPE_INTRUSIVE(BaseRequestBody, appId, version);
};