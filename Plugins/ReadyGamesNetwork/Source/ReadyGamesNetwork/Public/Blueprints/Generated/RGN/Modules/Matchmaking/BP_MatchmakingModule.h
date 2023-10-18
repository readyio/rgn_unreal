#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_GetMatchesResponseData.h"
#include "BP_MatchmakingData.h"
#include "BP_GetMatchResponseData.h"
#include "BP_StartMatchResponseData.h"
#include "BP_MatchmakingModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FMatchmakingModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FGetJoinOpenMatchesAsyncResponse, const TArray<FBP_MatchmakingData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetVoteOpenMatchesAsyncResponse, const TArray<FBP_MatchmakingData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetFinishedMatchesAsyncResponse, const TArray<FBP_MatchmakingData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetFinishedMatchByIdAsyncResponse, const FBP_MatchmakingData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCreateMatchAsyncResponse, const FBP_MatchmakingData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FParticipateInMatchAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStartMatchAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FVoteForMatchAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSubmitMatchScoreAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FFinishMatchAsyncResponse, const FString&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_MatchmakingModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
