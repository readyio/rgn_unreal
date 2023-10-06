#pragma once

#include "RGNCoreModule.h"
#include "RGNResponse.h"
#include "RGNCreateWalletRequestBody.h"
#include "RGNGetUserWalletsRequestBody.h"
#include "RGNCreateWalletResponse.h"
#include "RGNGetUserWalletsResponse.h"
#include <string>
#include <functional>

class RGNWalletsModule {
public:
	static void CreateWallet(const std::string& password, const std::function<void(RGNCreateWalletResponse)>& callback);
	static void GetUserWallets(const std::function<void(RGNGetUserWalletsResponse)>& callback);
};