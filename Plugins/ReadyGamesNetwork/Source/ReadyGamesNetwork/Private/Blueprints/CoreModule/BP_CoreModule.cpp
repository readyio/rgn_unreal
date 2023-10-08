#include "Blueprints/CoreModule/BP_CoreModule.h"
#include "Core/CoreModule/CoreModule.h"
#include "Http/Http.h"

std::vector<FSignInCallback> UBP_CoreModuleFunctions::_signInCallbacks = std::vector<FSignInCallback>();

void UBP_CoreModuleFunctions::Configure(FBP_ConfigureData configureData) {
    ConfigureData coreConfigureData;
    coreConfigureData.appId = std::string(TCHAR_TO_UTF8(*configureData.AppId));
    coreConfigureData.environmentTarget = static_cast<EnvironmentTarget>(configureData.EnvironmentTarget);
    CoreModule::Configure(coreConfigureData);
}

void UBP_CoreModuleFunctions::SubscribeToOnSignIn(FSignInCallback callback) {
    _signInCallbacks.push_back(callback);
}

void UBP_CoreModuleFunctions::UnsubscribeFromOnSignIn(FSignInCallback callback) {
    auto it = std::find(_signInCallbacks.begin(), _signInCallbacks.end(), callback);
    if (it != _signInCallbacks.end()) {
        _signInCallbacks.erase(it);
    }
}

void UBP_CoreModuleFunctions::DevSignIn(const FString& email, const FString& password) {
    SignInCallback* signInCallback = new SignInCallback([&](bool isLoggedIn) {
        for (auto callback : _signInCallbacks) {
            callback.ExecuteIfBound(isLoggedIn);
        }
        CoreModule::UnsubscribeFromOnSignIn(signInCallback);
    });
    CoreModule::SubscribeToOnSignIn(signInCallback);
    CoreModule::DevSignIn(std::string(TCHAR_TO_UTF8(*email)), std::string(TCHAR_TO_UTF8(*password)));
}

void UBP_CoreModuleFunctions::SignIn() {
    CoreModule::SignIn();
}

void UBP_CoreModuleFunctions::SignOut() {
    CoreModule::SignOut();
}