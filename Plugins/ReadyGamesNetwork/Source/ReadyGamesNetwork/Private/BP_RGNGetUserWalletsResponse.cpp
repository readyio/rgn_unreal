#include "BP_RGNGetUserWalletsResponse.h"
#include "BP_RGNWallet.h"

void UBP_RGNGetUserWalletsResponse::Raise(RGNGetUserWalletsResponse response) {
	FBP_RGNGetUserWalletsResponseData ResponseData;
	for (RGNWallet& wallet : response.getWallets()) {
		FBP_RGNWallet Wallet;
		Wallet.Address = FString(wallet.getAddress().c_str());
		ResponseData.Wallets.Add(Wallet);
	}
	ResponseEvent.ExecuteIfBound(ResponseData);
}

void UBP_RGNGetUserWalletsResponse::OnResponse(FRGNGetUserWalletsResponse Event)
{
	ResponseEvent = Event;
}