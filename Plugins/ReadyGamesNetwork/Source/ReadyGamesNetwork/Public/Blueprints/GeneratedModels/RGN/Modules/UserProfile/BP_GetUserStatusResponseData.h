#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_UserStatus.h"
#include "../../Model/Response/BP_BaseResponseData.h"
#include "BP_GetUserStatusResponseData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_GetUserStatusResponseData : public FBP_BaseResponseData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    EBP_UserStatus userStatus;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    FString lastAppPackageName;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    int64 lastActivityTS;
};
