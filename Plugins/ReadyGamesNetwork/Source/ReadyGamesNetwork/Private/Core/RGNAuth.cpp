#include "Core/RGNAuth.h"
#include "Core/RGNCore.h"
#include "Core/RGNEnvironmentTarget.h"
#include "Analytics/Analytics.h"
#include "WebForm/WebForm.h"
#include "Os/Os.h"
#include "SharedPrefs/SharedPrefs.h"
#include "Http/Http.h"
#include "Crypto/hmac.h"
#include "Crypto/sha256.h"
#include "json.hpp"

namespace RGN {
    Utility::FunctionEvent<void(bool)> RGNAuth::_authChangeEvent;
    std::string RGNAuth::_userId;
    std::string RGNAuth::_idToken;
    std::string RGNAuth::_refreshToken;

    void RGNAuth::Initialize() {
        _userId = "";
        _idToken = "";
        _refreshToken = "";
        LoadAuthSession();
    }

    Utility::FunctionEvent<void(bool)>::Ref RGNAuth::BindAuthChangeCallback(std::function<void(bool)> callback) {
        return _authChangeEvent.bind(callback);
    }

    void RGNAuth::UnbindAuthChangeCallback(Utility::FunctionEvent<void(bool)>::Ref ref) {
        _authChangeEvent.unbind(ref);
    }

    void RGNAuth::DevSignIn(const std::string& email, const std::string& password, std::function<void(bool)> callback) {
        nlohmann::json requestBody;
        requestBody["email"] = email;
        requestBody["password"] = password;
        requestBody["returnSecureToken"] = true;

        RGNCore::NonAuthInternalCallAPI("user-signInWithEmailPassword", requestBody.dump(),
            [callback](std::string response) {
                nlohmann::json jsonResponse = nlohmann::json::parse(response);
                _userId = jsonResponse.at("userId");
                _idToken = jsonResponse.at("idToken");
                _refreshToken = jsonResponse.at("refreshToken");

                SaveAuthSession();
                NotifyAboutAuthChange();

                if (callback) {
                    callback(true);
                }
            },
            [callback](int httpCode, std::string httpMessage) {
                if (callback) {
                    callback(false);
                }
            }
        );
    }

    void RGNAuth::SignInAnonymously(std::function<void(bool)> callback) {
        nlohmann::json requestBody;
        requestBody["returnSecureToken"] = true;

        RGNCore::NonAuthInternalCallAPI("user-signUpAnonymously", requestBody.dump(),
            [callback](std::string response) {
                nlohmann::json jsonResponse = nlohmann::json::parse(response);
                _userId = jsonResponse.at("userId");
                _idToken = jsonResponse.at("idToken");
                _refreshToken = jsonResponse.at("refreshToken");

                SaveAuthSession();
                NotifyAboutAuthChange();

                if (callback) {
                    callback(true);
                }
            },
            [callback](int httpCode, std::string httpMessage) {
                if (callback) {
                    callback(false);
                }
            }
        );
    }

    void RGNAuth::SignIn(std::function<void(bool)> callback) {
        WebForm::OpenSignIn(_idToken, [callback](bool canceled, std::string refreshToken) {
            if (canceled || refreshToken.empty()) {
                callback(false);
                return;
            }
            RefreshTokens("", refreshToken, callback);
        });
    }

    void RGNAuth::CreateWallet(std::function<void(bool)> callback) {

        WebForm::OpenCreateWallet(_idToken, [callback](bool canceled, std::string refreshToken) {
            if (canceled) {
                callback(false);
                return;
            }
            if (refreshToken.empty()) {
                callback(false);
                return;
            }
            RefreshTokens("", refreshToken, callback);
        });
    }

    void RGNAuth::SignOut() {
        _userId = "";
        _idToken = "";
        _refreshToken = "";
        SaveAuthSession();
        NotifyAboutAuthChange();
    }

    void RGNAuth::RefreshTokens(std::function<void(bool)> callback) {
        RefreshTokens(_idToken, _refreshToken, callback);
    }

    void RGNAuth::RefreshTokens(std::string idToken, std::string refreshToken, std::function<void(bool)> callback) {
        nlohmann::json requestBody;
        requestBody["idToken"] = idToken;
        requestBody["refreshToken"] = refreshToken;

        RGNCore::NonAuthInternalCallAPI("user-refreshTokens", requestBody.dump(),
            [callback](std::string response) {
                nlohmann::json jsonResponse = nlohmann::json::parse(response);
                _userId = jsonResponse.at("userId");
                _idToken = jsonResponse.at("idToken");
                _refreshToken = jsonResponse.at("refreshToken");

                SaveAuthSession();
                NotifyAboutAuthChange();

                if (callback) {
                    callback(true);
                }
            },
            [callback](int httpCode, std::string httpMessage) {
                if (callback) {
                    callback(false);
                }
            }
        );
    }

    bool RGNAuth::IsLoggedIn() {
        return _userId != "" && _idToken != "";
    }

    std::string RGNAuth::GetUserId() {
        return _userId;
    }

    std::string RGNAuth::GetIdToken() {
        return _idToken;
    }

    std::string RGNAuth::GetRefreshToken() {
        return _refreshToken;
    }

    void RGNAuth::LoadAuthSession() {
        std::string saveFileName = "AuthSession" + GetEnvironmentTargetName(RGNCore::GetEnvironmentTarget());
        bool wasNotLoggedIn = !IsLoggedIn();
        string authDataString;
        if (SharedPrefs::Load(saveFileName, authDataString)) {
            nlohmann::json authDataJson = nlohmann::json::parse(authDataString);
            _userId = authDataJson.contains("userId") ? authDataJson["userId"].get<std::string>() : "";
            _idToken = authDataJson.contains("idToken") ? authDataJson["idToken"].get<std::string>() : "";
            _refreshToken = authDataJson.contains("refreshToken") ? authDataJson["refreshToken"].get<std::string>() : "";
        }
        if (wasNotLoggedIn && IsLoggedIn()) {
            NotifyAboutAuthChange();
        }
    }

    void RGNAuth::SaveAuthSession() {
        std::string saveFileName = "AuthSession" + GetEnvironmentTargetName(RGNCore::GetEnvironmentTarget());
        nlohmann::json authDataJson;
        authDataJson["userId"] = _userId;
        authDataJson["idToken"] = _idToken;
        authDataJson["refreshToken"] = _refreshToken;
        SharedPrefs::Save(saveFileName, authDataJson.dump());
    }

    void RGNAuth::NotifyAboutAuthChange() {
        _authChangeEvent.raise(IsLoggedIn());
    }
}