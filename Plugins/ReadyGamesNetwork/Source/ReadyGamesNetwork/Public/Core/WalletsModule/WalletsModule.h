#pragma once

#include "Responses/CreateWalletResponse.h"
#include "Responses/GetUserWalletsResponse.h"
#include <string>
#include <functional>

class WalletsModule {
public:
	static void CreateWallet(const std::string& password,
		const std::function<void(CreateWalletResponse)>& complete, const std::function<void(int, std::string)>& fail);
	static void GetUserWallets(
		const std::function<void(GetUserWalletsResponse)>& complete, const std::function<void(int, std::string)>& fail);
};