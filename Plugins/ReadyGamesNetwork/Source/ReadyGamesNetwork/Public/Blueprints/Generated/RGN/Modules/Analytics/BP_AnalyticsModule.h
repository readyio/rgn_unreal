#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../Core/BP_CancellationToken.h"
#include "../../../../../Core/CancellationToken.h"
#include "../../../../../Generated/RGN/Modules/Analytics/AnalyticsModule.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_AnalyticsModule.generated.h"

using namespace std;

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
            string cpp_eventName;
            string cpp_eventParameters;
            CancellationToken cpp_cancellationToken;
			cpp_eventName = string(TCHAR_TO_UTF8(*eventName));
			cpp_eventParameters = string(TCHAR_TO_UTF8(*eventParameters));
			FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            // TODO
    }
};
