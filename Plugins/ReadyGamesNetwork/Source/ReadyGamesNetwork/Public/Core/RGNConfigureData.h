#pragma once

#include "RGNEnvironmentTarget.h"
#include <string>

using namespace std;

struct RGNConfigureData {
    string appId;
    RGNEnvironmentTarget environmentTarget;
    bool useFunctionsEmulator;
    string emulatorHost;
    string emulatorPort;
};