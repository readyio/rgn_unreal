#include "BP_RGNCoreModuleFunctions.h"
#include "ReadyGamesNetworkLogger.h"
#include "RGNCoreModule.h"
#include "HttpAdapter.h"

void UBP_RGNCoreModuleFunctions::Configure(const FString& appId) {
    std::string appIdStr(TCHAR_TO_UTF8(*appId));
    RGNCoreModule::Configure(appIdStr);
}

void UBP_RGNCoreModuleFunctions::SignIn() {
    RGNCoreModule::SignIn();
}

void UBP_RGNCoreModuleFunctions::SignOut() {
    RGNCoreModule::SignOut();
}