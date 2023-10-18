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

DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleGetJoinOpenMatchesAsyncResponse, const TArray<FBP_MatchmakingData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleGetVoteOpenMatchesAsyncResponse, const TArray<FBP_MatchmakingData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleGetFinishedMatchesAsyncResponse, const TArray<FBP_MatchmakingData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleGetFinishedMatchByIdAsyncResponse, const FBP_MatchmakingData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleCreateMatchAsyncResponse, const FBP_MatchmakingData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleParticipateInMatchAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleStartMatchAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleVoteForMatchAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleSubmitMatchScoreAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakingModuleFinishMatchAsyncResponse, const FString&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_MatchmakingModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
