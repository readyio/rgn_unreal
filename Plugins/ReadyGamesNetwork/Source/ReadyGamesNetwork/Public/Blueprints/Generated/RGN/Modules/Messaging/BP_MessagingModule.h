#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_MessagingModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FMessagingModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FMessagingModuleSubscribeResponse);
DECLARE_DYNAMIC_DELEGATE(FMessagingModuleUnsubscribeResponse);
DECLARE_DYNAMIC_DELEGATE(FMessagingModuleSendMessageByUserIdResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_MessagingModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
