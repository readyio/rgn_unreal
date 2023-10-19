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
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Messaging")
    static void Subscribe(
        const FString& topic,
        const FBP_IMessageReceiver& messageReceiver,
        FMessagingModuleSubscribeResponse onSuccess, FMessagingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Messaging")
    static void Unsubscribe(
        const FString& topic,
        const FBP_IMessageReceiver& messageReceiver,
        FMessagingModuleUnsubscribeResponse onSuccess, FMessagingModuleFailResponse onFail) {
             // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Messaging")
    static void SendMessageByUserId(
        const FString& appId,
        const FString& userId,
        const FString& payload,
        const FString& title,
        const FString& text,
        FMessagingModuleSendMessageByUserIdResponse onSuccess, FMessagingModuleFailResponse onFail) {
             // TODO
    }
};
