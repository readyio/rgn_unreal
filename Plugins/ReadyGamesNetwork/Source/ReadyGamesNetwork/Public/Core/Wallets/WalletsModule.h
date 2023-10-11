#pragma once

#include "../../Generated/RGN/Modules/Wallets/IsUserHavePrimaryWalletResponseData.h"
#include "../../Generated/RGN/Modules/Wallets/CreateWalletResponseData.h"
#include "../../Generated/RGN/Modules/Wallets/GetUserWalletsResponseData.h"
#include <string>
#include <functional>

using namespace std;
using IsUserHavePrimaryWalletResponseData = RGN::Modules::Wallets::IsUserHavePrimaryWalletResponseData;
using CreateWalletResponseData = RGN::Modules::Wallets::CreateWalletResponseData;
using GetUserWalletsResponseData = RGN::Modules::Wallets::GetUserWalletsResponseData;

class WalletsModule {
public:
	static void IsUserHavePrimaryWalletAsync(
		const function<void(IsUserHavePrimaryWalletResponseData)>& complete, const function<void(int, string)>& fail);
	static void CreateWallet(const string& password,
		const function<void(CreateWalletResponseData)>& complete, const function<void(int, string)>& fail);
	static void GetUserWallets(
		const function<void(GetUserWalletsResponseData)>& complete, const function<void(int, string)>& fail);
};