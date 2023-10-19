#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_MatchmakingModule_Admin.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FMatchmakingModule_AdminFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FMatchmakingModuleAdminDeleteMatchesByAppIdAsyncResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_MatchmakingModule_Admin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Matchmaking")
    static void DeleteMatchesByAppIdAsync(
        const FString& appIdToRemoveTheMatchesFor,
        FMatchmakingModuleAdminDeleteMatchesByAppIdAsyncResponse onSuccess, FMatchmakingModule_AdminFailResponse onFail) {
             // TODO
    }
};
