#include "BP_RGNCreateWalletResponse.h"

void UBP_RGNCreateWalletResponse::Raise(RGNCreateWalletResponse response) {
	FBP_RGNCreateWalletResponseData ResponseData;
	ResponseData.Address = FString(response.getAddress().c_str());
	ResponseData.WalletCreated = response.getWalletCreated();
	ResponseData.Success = response.getSuccess();
	ResponseData.Error = FString(response.getError().c_str());
	ResponseEvent.ExecuteIfBound(ResponseData);
}

void UBP_RGNCreateWalletResponse::OnResponse(FRGNCreateWalletResponse Event)
{
	ResponseEvent = Event;
}