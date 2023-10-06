#pragma once

#include "RGNResponse.h"
#include <string>

class RGNCreateWalletResponse : public RGNResponse {
private:
	std::string address;
	bool walletCreated;
	bool success;
	std::string error;
public:
	RGNCreateWalletResponse(int code, std::string rawBody,
		std::string address, bool walletCreateed, bool success, std::string error);
	const std::string& getAddress();
	bool getWalletCreated();
	bool getSuccess();
	const std::string& getError();
};