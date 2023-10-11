#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include <string>
#include <functional>
using namespace std;

namespace RGN { namespace Modules { namespace SignIn {
    class GuestSignInModule {
    public:
        static void TryToSignInAsync(
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
        static void SignOut(
            const function<void(void)>& compelete,
            const function<void(int httpCode, string error)>& fail) { }
    };
}}}