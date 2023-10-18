#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_LeaderboardData.h"
#include "BP_LeaderboardModule_Admin.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FLeaderboardModule_AdminFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FAddLeaderboardAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateLeaderboardAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE(FDeleteLeaderboardAsyncResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_LeaderboardModule_Admin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
