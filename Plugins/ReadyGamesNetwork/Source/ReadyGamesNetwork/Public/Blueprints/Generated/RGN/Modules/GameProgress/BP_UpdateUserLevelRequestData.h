#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../Currency/BP_Currency.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "BP_UpdateUserLevelRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UpdateUserLevelRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    T playerProgress;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | GameProgress")
    TArray<FBP_Currency> reward;
};
