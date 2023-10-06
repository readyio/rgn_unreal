#include "BP_RGNWalletsModuleFunctions.h"
#include "ReadyGamesNetworkLogger.h"
#include "RGNWalletsModule.h"
#include "HttpAdapter.h"

UBP_RGNCreateWalletResponse* UBP_RGNWalletsModuleFunctions::CreateWallet(const FString& password) {
    UBP_RGNCreateWalletResponse* uresponse = NewObject<UBP_RGNCreateWalletResponse>();
    RGNWalletsModule::CreateWallet(std::string(TCHAR_TO_UTF8(*password)), [uresponse](RGNCreateWalletResponse response) {
        uresponse->Raise(response);
    });
    return uresponse;
}

UBP_RGNGetUserWalletsResponse* UBP_RGNWalletsModuleFunctions::GetUserWallets() {
    UBP_RGNGetUserWalletsResponse* uresponse = NewObject<UBP_RGNGetUserWalletsResponse>();
    RGNWalletsModule::GetUserWallets([uresponse](RGNGetUserWalletsResponse response){
        uresponse->Raise(response);
    });
    return uresponse;
}