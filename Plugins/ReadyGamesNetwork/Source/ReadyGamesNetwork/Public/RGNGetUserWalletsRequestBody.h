#pragma once

#include "RGNRequestBody.h"
#include <string>

class RGNGetUserWalletsRequestBody : public RGNRequestBody {
public:
	RGNGetUserWalletsRequestBody(const std::string& appId);
	~RGNGetUserWalletsRequestBody();
	std::string serialize();
};