#include "Impl/Core/BP_RGNCore.h"
#include "Core/RGNCore.h"
#include "Core/RGNConfigureData.h"
#include "Core/RGNAuth.h"
#include "Http/Http.h"
#include "ReadyGamesNetworkSettings.h"

std::vector<FRGNAuthChangeCallback> UBP_RGNCore::_authCallbacks = std::vector<FRGNAuthChangeCallback>();

void UBP_RGNCore::Initialize(FRGNInitializeCallback onInitialize) {
    UReadyGamesNetworkSettings* Settings = GetMutableDefault<UReadyGamesNetworkSettings>();

    RGN::RGNConfigureData coreConfigureData;
    coreConfigureData.appId = std::string(TCHAR_TO_UTF8(*Settings->ProjectId));
    coreConfigureData.apiKey = std::string(TCHAR_TO_UTF8(*Settings->ApiKey));
    coreConfigureData.environmentTarget = static_cast<RGN::RGNEnvironmentTarget>(Settings->EnvironmentTarget.GetValue());
    coreConfigureData.autoGuestLogin = Settings->bAutoGuestLogin;
    coreConfigureData.useFunctionsEmulator = Settings->bUseFunctionsEmulator;
    coreConfigureData.emulatorHost = std::string(TCHAR_TO_UTF8(*Settings->EmulatorHost));
    coreConfigureData.emulatorPort = std::string(TCHAR_TO_UTF8(*Settings->EmulatorPort));

    RGN::RGNCore::Initialize(coreConfigureData);
    RGN::RGNAuth::BindAuthChangeCallback([&](bool isLoggedIn) {
        for (auto callback : _authCallbacks) {
            callback.ExecuteIfBound(isLoggedIn);
        }
    });

    if (coreConfigureData.autoGuestLogin && !IsLoggedIn()) {
        RGN::RGNAuth::SignInAnonymously([onInitialize](bool isLoggedIn) {
            onInitialize.ExecuteIfBound();
        });
    } else {
        onInitialize.ExecuteIfBound();
    }
}

void UBP_RGNCore::Update() {
    RGN::RGNCore::Update();
}

void UBP_RGNCore::BindAuthChangeCallback(FRGNAuthChangeCallback onAuthChange) {
    _authCallbacks.push_back(onAuthChange);
}

void UBP_RGNCore::UnbindAuthChangeCallback(FRGNAuthChangeCallback onAuthChange) {
    auto it = std::find(_authCallbacks.begin(), _authCallbacks.end(), onAuthChange);
    if (it != _authCallbacks.end()) {
        _authCallbacks.erase(it);
    }
}

void UBP_RGNCore::DevSignIn(const FString& email, const FString& password, FRGNSignInCallback onSignIn) {
    RGN::RGNAuth::DevSignIn(
        std::string(TCHAR_TO_UTF8(*email)),
        std::string(TCHAR_TO_UTF8(*password)),
        [onSignIn](bool success) {
            onSignIn.ExecuteIfBound(success);
        }
    );
}

void UBP_RGNCore::SignIn(FRGNSignInCallback onSignIn) {
    RGN::RGNAuth::SignIn([onSignIn](bool isLoggedIn) {
        onSignIn.ExecuteIfBound(isLoggedIn);
    });
}

void UBP_RGNCore::SignInAnonymously(FRGNSignInCallback onSignIn) {
    RGN::RGNAuth::SignInAnonymously([onSignIn](bool isLoggedIn) {
        onSignIn.ExecuteIfBound(isLoggedIn);
    });
}

void UBP_RGNCore::SignOut() {
    RGN::RGNAuth::SignOut();
}

void UBP_RGNCore::CreateWallet(FRGNCreateWalletCallback onCreateWallet) {
    RGN::RGNAuth::CreateWallet([onCreateWallet](bool canceled) {
        onCreateWallet.ExecuteIfBound(canceled);
    });
}

bool UBP_RGNCore::IsLoggedIn() {
    return RGN::RGNAuth::IsLoggedIn();
}

FString UBP_RGNCore::GetUserId() {
    return FString(UTF8_TO_TCHAR(RGN::RGNAuth::GetUserId().c_str()));
}

FString UBP_RGNCore::GetIdToken() {
    return FString(UTF8_TO_TCHAR(RGN::RGNAuth::GetIdToken().c_str()));
}