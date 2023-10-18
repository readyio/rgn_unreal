#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_AnalyticsModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FAnalyticsModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FLogEventAsyncResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_AnalyticsModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
