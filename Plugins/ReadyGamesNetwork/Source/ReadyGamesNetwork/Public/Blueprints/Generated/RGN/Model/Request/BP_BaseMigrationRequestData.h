#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_BaseRequestData.h"
#include "BP_BaseMigrationRequestData.generated.h"

/**
 * This class supports multiple versions of an API by appending a "version" parameter to the request data.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BaseMigrationRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    /**
     * Represents the current version of the API implementation on the server.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Request")
    int32 version;
};
