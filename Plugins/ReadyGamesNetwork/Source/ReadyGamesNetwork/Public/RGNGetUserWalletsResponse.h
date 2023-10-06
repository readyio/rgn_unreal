#pragma once

#include "RGNResponse.h"
#include "RGNWallet.h"
#include <vector>

class RGNGetUserWalletsResponse : public RGNResponse {
private:
	std::vector<RGNWallet> wallets;
public:
	RGNGetUserWalletsResponse(int code, std::string rawBody, std::vector<RGNWallet> wallets);
	std::vector<RGNWallet>& getWallets();
	void deserialize(std::string json);
};