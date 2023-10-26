#include "Blueprints/Core/BP_RGNCore.h"
#include "Core/RGNCore.h"
#include "Core/RGNConfigureData.h"
#include "Http/Http.h"
#include "ReadyGamesNetworkSettings.h"

std::vector<FRGNAuthChangeCallback> UBP_RGNCore::_authCallbacks = std::vector<FRGNAuthChangeCallback>();

void UBP_RGNCore::Initialize() {
    UReadyGamesNetworkSettings* Settings = GetMutableDefault<UReadyGamesNetworkSettings>();

    RGNConfigureData coreConfigureData;
    coreConfigureData.appId = std::string(TCHAR_TO_UTF8(*Settings->ProjectId));
    coreConfigureData.environmentTarget = static_cast<RGNEnvironmentTarget>(Settings->EnvironmentTarget.GetValue());
    coreConfigureData.useFunctionsEmulator = Settings->bUseFunctionsEmulator;
    coreConfigureData.emulatorHost = std::string(TCHAR_TO_UTF8(*Settings->EmulatorHost));
    coreConfigureData.emulatorPort = std::string(TCHAR_TO_UTF8(*Settings->EmulatorPort));

    RGNCore::Initialize(coreConfigureData);

    RGNAuthCallback* authCallback = new RGNAuthCallback([&](bool isLoggedIn) {
        for (auto callback : _authCallbacks) {
            callback.ExecuteIfBound(isLoggedIn);
        }
    });
    RGNCore::SubscribeToAuthCallback(authCallback);
}

void UBP_RGNCore::SubscribeToAuthCallback(FRGNAuthChangeCallback onAuthChange) {
    _authCallbacks.push_back(onAuthChange);
}

void UBP_RGNCore::UnsubscribeFromAuthCallback(FRGNAuthChangeCallback onAuthChange) {
    auto it = std::find(_authCallbacks.begin(), _authCallbacks.end(), onAuthChange);
    if (it != _authCallbacks.end()) {
        _authCallbacks.erase(it);
    }
}

void UBP_RGNCore::DevSignIn(const FString& email, const FString& password, FRGNSignInCallback onSignIn) {
    RGNCore::DevSignIn(
        std::string(TCHAR_TO_UTF8(*email)),
        std::string(TCHAR_TO_UTF8(*password)),
        [onSignIn](bool isLoggedIn) {
            onSignIn.ExecuteIfBound(isLoggedIn);
        }
    );
}

void UBP_RGNCore::SignIn(FRGNSignInCallback onSignIn) {
    RGNCore::SignIn([onSignIn](bool isLoggedIn) {
        onSignIn.ExecuteIfBound(isLoggedIn);
    });
}

void UBP_RGNCore::SignInAnonymously(FRGNSignInCallback onSignIn) {
    RGNCore::SignInAnonymously([onSignIn](bool isLoggedIn) {
        onSignIn.ExecuteIfBound(isLoggedIn);
    });
}

void UBP_RGNCore::SignOut() {
    RGNCore::SignOut();
}

bool UBP_RGNCore::IsLoggedIn() {
    return RGNCore::IsLoggedIn();
}

FString UBP_RGNCore::GetUserId() {
    return FString(RGNCore::GetUserId().c_str());
}

FString UBP_RGNCore::GetUserToken() {
    return FString(RGNCore::GetUserToken().c_str());
}