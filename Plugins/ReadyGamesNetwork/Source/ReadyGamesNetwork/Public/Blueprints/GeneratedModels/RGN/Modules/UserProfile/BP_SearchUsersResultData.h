#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_UserData.h"
#include "BP_SearchUsersResultData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_SearchUsersResultData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    TArray<FBP_UserData> queryResult;
};
