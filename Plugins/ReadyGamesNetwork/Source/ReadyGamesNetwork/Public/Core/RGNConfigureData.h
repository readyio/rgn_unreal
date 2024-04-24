#pragma once

#include "RGNEnvironmentTarget.h"
#include <string>

using namespace std;

namespace RGN {
    struct RGNConfigureData {
        string appId;
        string apiKey;
        RGNEnvironmentTarget environmentTarget;
        bool autoGuestLogin;
        bool useFunctionsEmulator;
        string emulatorHost;
        string emulatorPort;
    };
}