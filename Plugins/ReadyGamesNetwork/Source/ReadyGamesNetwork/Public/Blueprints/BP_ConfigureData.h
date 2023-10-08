#pragma once

#include "CoreMinimal.h"
#include "BP_EnvironmentTarget.h"
#include "BP_ConfigureData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_ConfigureData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Wallets")
    FString AppId;
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Wallets")
    EBP_EnvironmentTarget EnvironmentTarget;
};