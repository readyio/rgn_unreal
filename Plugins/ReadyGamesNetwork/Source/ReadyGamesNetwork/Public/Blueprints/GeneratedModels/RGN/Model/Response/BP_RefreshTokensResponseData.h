#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_RefreshTokensResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RefreshTokensResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Response")
    FString userId;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Response")
    FString idToken;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Response")
    FString refreshToken;
};
