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
    /**
     * Asynchronously logs an analytic event with provided event name into RGN analytics backend
     * This method will retry logging the event up to 7 times
     * @param eventName - The analytics event name
     * @param eventParameters - Optional event parameters to store with the event
     * @param cancellationToken - Optional parameter to enable cancellation of the task.
     * Default value is an unset CancellationToken.
     * @throw: Thrown when eventName is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Analytics", meta=(AutoCreateRefTerm="eventParameters, cancellationToken"))
    static void LogEventAsync(
        FAnalyticsModuleLogEventAsyncResponse onSuccess,
        FAnalyticsModuleFailResponse onFail,
        const FString& eventName,
        const FString& eventParameters = "",
        const FBP_CancellationToken& cancellationToken = FBP_CancellationToken()) {
            string cpp_eventName;
            string cpp_eventParameters;
            CancellationToken cpp_cancellationToken;
            cpp_eventName = string(TCHAR_TO_UTF8(*eventName));
            cpp_eventParameters = string(TCHAR_TO_UTF8(*eventParameters));
            FBP_CancellationToken::ConvertToCoreModel(cancellationToken, cpp_cancellationToken);
            RGN::Modules::Analytics::AnalyticsModule::LogEventAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                },
                cpp_eventName,
                cpp_eventParameters,
                cpp_cancellationToken);
    }
};
