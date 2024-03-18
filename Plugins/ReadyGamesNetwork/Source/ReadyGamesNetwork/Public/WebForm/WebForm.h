#pragma once

#include "../Utility/FunctionEvent.h"
#include <string>

namespace RGN {
    class WebForm {
    private:
        static Utility::FunctionEvent<void(bool, std::string)> _redirectEvent;
        static void OpenWebForm(std::string idToken, std::string view, std::function<void(bool, std::string)> callback);

    public:
        static void Initialize ();
        static void Update();
        static void OpenSignIn(std::string idToken, std::function<void(bool, std::string)> callback);
        static void OpenCreateWallet(std::string idToken, std::function<void(bool, std::string)> callback);
        static void OnWebFormRedirect(bool canceled, std::string url);
    };
}