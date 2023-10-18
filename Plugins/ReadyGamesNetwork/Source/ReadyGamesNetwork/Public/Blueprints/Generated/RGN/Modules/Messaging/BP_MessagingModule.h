#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_MessagingModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FMessagingModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FSubscribeResponse);
DECLARE_DYNAMIC_DELEGATE(FUnsubscribeResponse);
DECLARE_DYNAMIC_DELEGATE(FSendMessageByUserIdResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_MessagingModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
