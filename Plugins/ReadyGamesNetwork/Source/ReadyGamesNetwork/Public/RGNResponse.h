#pragma once

#include <string>

class RGNResponse {
protected:
	int code;
	std::string rawBody;
public:
	RGNResponse(int code, std::string rawBody);
	int getCode();
	const std::string& getRawBody();
};