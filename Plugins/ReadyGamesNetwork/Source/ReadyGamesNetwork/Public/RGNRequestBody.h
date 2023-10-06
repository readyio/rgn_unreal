#pragma once

#include <string>

class RGNRequestBody {
protected:
	std::string appId;
	int version;
public:
	RGNRequestBody(const std::string& appId);
	RGNRequestBody(const std::string& appId, int version);
	~RGNRequestBody();
};