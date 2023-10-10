#pragma once

#include "CoreMinimal.h"
#include "BP_RGNEnvironmentTarget.h"
#include "BP_RGNConfigureData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RGNConfigureData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Core")
    FString AppId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Core")
    EBP_RGNEnvironmentTarget EnvironmentTarget;
};