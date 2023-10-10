#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_BaseRequestData.h"
#include "BP_RefreshTokensRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RefreshTokensRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Request")
    FString refreshToken;
};
