#include "Blueprints/CoreModule/BP_CoreModule.h"
#include "Core/CoreModule/CoreModule.h"
#include "Http/Http.h"

void UBP_CoreModuleFunctions::Configure(FBP_ConfigureData configureData) {
    ConfigureData coreConfigureData;
    coreConfigureData.appId = std::string(TCHAR_TO_UTF8(*configureData.AppId));
    coreConfigureData.environmentTarget = static_cast<EnvironmentTarget>(configureData.EnvironmentTarget);
    CoreModule::Configure(coreConfigureData);
}

void UBP_CoreModuleFunctions::DevSignIn(const FString& email, const FString& password) {
    CoreModule::DevSignIn(std::string(TCHAR_TO_UTF8(*email)), std::string(TCHAR_TO_UTF8(*password)));
}

void UBP_CoreModuleFunctions::SignIn() {
    CoreModule::SignIn();
}

void UBP_CoreModuleFunctions::SignOut() {
    CoreModule::SignOut();
}