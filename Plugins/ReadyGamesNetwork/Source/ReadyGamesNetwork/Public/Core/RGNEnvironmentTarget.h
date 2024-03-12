#pragma once

#include <string>

enum class RGNEnvironmentTarget : uint8 {
    NONE = 0,
	DEVELOPMENT = 1,
	STAGING = 2,
    PRODUCTION = 3
};

std::string GetEnvironmentTargetName(RGNEnvironmentTarget target);