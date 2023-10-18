#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_LeaderboardData.h"
#include "BP_GetLeaderboardsResponse.h"
#include "BP_GetLeaderboardIdsResponseData.h"
#include "BP_SetScoreResponseData.h"
#include "BP_LeaderboardEntry.h"
#include "BP_GetLeaderboardEntriesResponseData.h"
#include "BP_LeaderboardModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FLeaderboardModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FGetLeaderboardByIdAsyncResponse, const FBP_LeaderboardData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetLeaderboardByRequestNameAsyncResponse, const FBP_LeaderboardData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetLeaderboardByRequestNamesAsyncResponse, const TArray<FBP_LeaderboardData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetLeaderboardIdsAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSetScoreAsyncResponse, const int32&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAddScoreAsyncResponse, const int32&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserEntryAsyncResponse, const FBP_LeaderboardEntry&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetEntriesAsyncResponse, const TArray<FBP_LeaderboardEntry>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_LeaderboardModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
