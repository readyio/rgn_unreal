#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_AnalyticsModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FAnalyticsModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FAnalyticsModuleLogEventAsyncResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_AnalyticsModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Analytics")
    static void LogEventAsync(
        const FString& eventName,
        const FString& eventParameters,
        const FBP_CancellationToken& cancellationToken,
        FAnalyticsModuleLogEventAsyncResponse onSuccess, FAnalyticsModuleFailResponse onFail) {
             // TODO
    }
};
