#pragma once

#include "../Utility/FunctionEvent.h"
#include <string>
#include <functional>

namespace RGN {
    class RGNAuth {
    private:
        static Utility::FunctionEvent<void(bool)> _authChangeEvent;
        static bool _autoGuestLogin;
        static std::string _userId;
        static std::string _idToken;
        static std::string _refreshToken;

        static void LoadAuthSession();
        static void SaveAuthSession();
        static void OnAuthChange();

    public:
        static void Initialize(bool autoGuestLogin);

        static Utility::FunctionEvent<void(bool)>::Ref BindAuthChangeCallback(std::function<void(bool)> callback);
        static void UnbindAuthChangeCallback(Utility::FunctionEvent<void(bool)>::Ref ref);

        static void DevSignIn(const std::string &email, const std::string &password, std::function<void(bool)> callback);
        static void SignInAnonymously(std::function<void(bool)> callback);
        static void SignIn(std::function<void(bool)> callback);
        static void CreateWallet(std::function<void(bool)> callback);
        static void SignOut();
        static void RefreshTokens(std::function<void(bool)> callback);
        static void RefreshTokens(std::string idToken, std::string refreshToken, std::function<void(bool)> callback);

        static bool IsLoggedIn();
        static std::string GetUserId();
        static std::string GetIdToken();
        static std::string GetRefreshToken();
    };
}