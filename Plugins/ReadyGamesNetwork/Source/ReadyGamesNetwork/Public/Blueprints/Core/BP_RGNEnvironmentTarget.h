#pragma once

#include "CoreMinimal.h"
#include "BP_RGNEnvironmentTarget.generated.h"

UENUM(BlueprintType)
enum class EBP_RGNEnvironmentTarget : uint8
{
    None,
    Development,
    Staging,
    Production
};