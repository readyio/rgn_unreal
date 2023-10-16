#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "../../../../json.hpp"
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace SignIn {
    class EmailSignInModule {
    public:
        static void TryToSignIn(
            const function<void(void)>& complete,
            const function<void(int httpCode, string error)>& fail) {
            };
        static void SendPasswordResetEmail(string email) {
            };
        static void SignOut() {
            };
    };
}}}