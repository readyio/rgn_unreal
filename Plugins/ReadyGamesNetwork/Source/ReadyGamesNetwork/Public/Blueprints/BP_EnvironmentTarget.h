#pragma once

#include "CoreMinimal.h"
#include "BP_EnvironmentTarget.generated.h"

UENUM(BlueprintType)
enum class EBP_EnvironmentTarget : uint8
{
    None,
    Development,
    Staging,
    Production
};