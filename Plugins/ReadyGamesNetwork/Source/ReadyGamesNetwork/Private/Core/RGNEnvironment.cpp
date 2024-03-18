#include "Core/RGNEnvironmentTarget.h"
#include <string>

namespace RGN {
    std::string GetEnvironmentTargetName(RGNEnvironmentTarget target) {
        switch (target) {
            case RGNEnvironmentTarget::NONE:
                return "None";
            case RGNEnvironmentTarget::DEVELOPMENT:
                return "Development";
            case RGNEnvironmentTarget::STAGING:
                return "Staging";
            case RGNEnvironmentTarget::PRODUCTION:
                return "Production";
            default:
                return "Unknown";
        }
    }
}