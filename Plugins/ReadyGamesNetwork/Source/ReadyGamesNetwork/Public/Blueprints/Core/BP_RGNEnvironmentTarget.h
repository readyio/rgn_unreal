#pragma once

#include "CoreMinimal.h"
#include "BP_RGNEnvironmentTarget.generated.h"

UENUM(BlueprintType)
enum class EBP_RGNEnvironmentTarget : uint8
{
    None = 0,
    Development = 1,
    Staging = 2,
    Production = 3
};