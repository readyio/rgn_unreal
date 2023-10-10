#include "Blueprints/Core/BP_RGNCore.h"
#include "Core/RGNCore.h"
#include "Core/RGNConfigureData.h"
#include "Http/Http.h"

std::vector<FRGNAuthCallback> UBP_RGNCore::_authCallbacks = std::vector<FRGNAuthCallback>();

void UBP_RGNCore::Configure(FBP_RGNConfigureData configureData) {
    RGNConfigureData coreConfigureData;
    coreConfigureData.appId = std::string(TCHAR_TO_UTF8(*configureData.AppId));
    coreConfigureData.environmentTarget = static_cast<RGNEnvironmentTarget>(configureData.EnvironmentTarget);
    RGNCore::Configure(coreConfigureData);

    RGNAuthCallback* authCallback = new RGNAuthCallback([&](bool isLoggedIn) {
        AsyncTask(ENamedThreads::GameThread, [=]() {
            for (auto callback : _authCallbacks) {
                callback.ExecuteIfBound(isLoggedIn);
            }
        });
    });
    RGNCore::SubscribeToAuthCallback(authCallback);
}

void UBP_RGNCore::SubscribeToAuthCallback(FRGNAuthCallback callback) {
    _authCallbacks.push_back(callback);
}

void UBP_RGNCore::UnsubscribeFromAuthCallback(FRGNAuthCallback callback) {
    auto it = std::find(_authCallbacks.begin(), _authCallbacks.end(), callback);
    if (it != _authCallbacks.end()) {
        _authCallbacks.erase(it);
    }
}

void UBP_RGNCore::DevSignIn(const FString& email, const FString& password) {
    RGNCore::DevSignIn(std::string(TCHAR_TO_UTF8(*email)), std::string(TCHAR_TO_UTF8(*password)));
}

void UBP_RGNCore::SignIn() {
    RGNCore::SignIn();
}

void UBP_RGNCore::SignOut() {
    RGNCore::SignOut();
}

bool UBP_RGNCore::IsLoggedIn() {
    return RGNCore::IsLoggedIn();
}

FString UBP_RGNCore::GetUserToken() {
    return FString(RGNCore::GetUserToken().c_str());
}