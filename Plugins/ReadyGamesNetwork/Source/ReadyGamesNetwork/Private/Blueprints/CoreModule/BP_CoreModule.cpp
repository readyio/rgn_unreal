#include "Blueprints/CoreModule/BP_CoreModule.h"
#include "Core/CoreModule/CoreModule.h"
#include "Http/Http.h"

std::vector<FAuthChangeCallback> UBP_CoreModuleFunctions::_authChangeCallbacks = std::vector<FAuthChangeCallback>();

void UBP_CoreModuleFunctions::Configure(FBP_ConfigureData configureData) {
    ConfigureData coreConfigureData;
    coreConfigureData.appId = std::string(TCHAR_TO_UTF8(*configureData.AppId));
    coreConfigureData.environmentTarget = static_cast<EnvironmentTarget>(configureData.EnvironmentTarget);
    CoreModule::Configure(coreConfigureData);

    AuthChangeCallback* _authChangeCallback = new AuthChangeCallback([&](bool isLoggedIn) {
        AsyncTask(ENamedThreads::GameThread, [=]() {
            for (auto callback : _authChangeCallbacks) {
                callback.ExecuteIfBound(isLoggedIn);
            }
        });
    });
    CoreModule::SubscribeToAuthChange(_authChangeCallback);
}

void UBP_CoreModuleFunctions::SubscribeToAuthChange(FAuthChangeCallback callback) {
    _authChangeCallbacks.push_back(callback);
}

void UBP_CoreModuleFunctions::UnsubscribeFromAuthChange(FAuthChangeCallback callback) {
    auto it = std::find(_authChangeCallbacks.begin(), _authChangeCallbacks.end(), callback);
    if (it != _authChangeCallbacks.end()) {
        _authChangeCallbacks.erase(it);
    }
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

bool UBP_CoreModuleFunctions::IsLoggedIn() {
    return CoreModule::IsLoggedIn();
}

FString UBP_CoreModuleFunctions::GetUserToken() {
    return FString(CoreModule::GetUserToken().c_str());
}