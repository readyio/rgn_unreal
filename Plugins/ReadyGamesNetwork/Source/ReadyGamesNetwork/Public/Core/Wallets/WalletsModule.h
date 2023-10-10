#pragma once

#include "../../GeneratedModels/RGN/Modules/Wallets/CreateWalletResponseData.h"
#include "../../GeneratedModels/RGN/Modules/Wallets/GetUserWalletsResponseData.h"
#include <string>
#include <functional>

using namespace std;
using CreateWalletResponse = RGN::Modules::Wallets::CreateWalletResponseData;
using GetUserWalletsResponse = RGN::Modules::Wallets::GetUserWalletsResponseData;

class WalletsModule {
public:
	static void CreateWallet(const string& password,
		const function<void(CreateWalletResponse)>& complete, const function<void(int, string)>& fail);
	static void GetUserWallets(
		const function<void(GetUserWalletsResponse)>& complete, const function<void(int, string)>& fail);
};