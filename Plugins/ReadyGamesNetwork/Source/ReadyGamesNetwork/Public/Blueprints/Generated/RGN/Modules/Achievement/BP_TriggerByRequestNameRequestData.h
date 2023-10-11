#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "BP_TriggerByRequestNameRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_TriggerByRequestNameRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    FString requestName;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Achievement")
    int32 progress;
};
