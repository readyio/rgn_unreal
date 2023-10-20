#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Messaging/MessagingModule.h"
#include "../../../../../Generated/RGN/Modules/Messaging/IMessageReceiver.h"
#include "BP_IMessageReceiver.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_MessagingModule.generated.h"

using namespace std;

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
            string cpp_topic;
            RGN::Modules::Messaging::IMessageReceiver cpp_messageReceiver;
			cpp_topic = string(TCHAR_TO_UTF8(*topic));
			FBP_IMessageReceiver::ConvertToCoreModel(messageReceiver, cpp_messageReceiver);
            RGN::Modules::Messaging::MessagingModule::Subscribe(
                cpp_topic,
                cpp_messageReceiver
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Messaging")
    static void Unsubscribe(
        const FString& topic,
        const FBP_IMessageReceiver& messageReceiver,
        FMessagingModuleUnsubscribeResponse onSuccess, FMessagingModuleFailResponse onFail) {
            string cpp_topic;
            RGN::Modules::Messaging::IMessageReceiver cpp_messageReceiver;
			cpp_topic = string(TCHAR_TO_UTF8(*topic));
			FBP_IMessageReceiver::ConvertToCoreModel(messageReceiver, cpp_messageReceiver);
            RGN::Modules::Messaging::MessagingModule::Unsubscribe(
                cpp_topic,
                cpp_messageReceiver
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Messaging")
    static void SendMessageByUserId(
        const FString& appId,
        const FString& userId,
        const FString& payload,
        const FString& title,
        const FString& text,
        FMessagingModuleSendMessageByUserIdResponse onSuccess, FMessagingModuleFailResponse onFail) {
            string cpp_appId;
            string cpp_userId;
            string cpp_payload;
            string cpp_title;
            string cpp_text;
			cpp_appId = string(TCHAR_TO_UTF8(*appId));
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
			cpp_payload = string(TCHAR_TO_UTF8(*payload));
			cpp_title = string(TCHAR_TO_UTF8(*title));
			cpp_text = string(TCHAR_TO_UTF8(*text));
            RGN::Modules::Messaging::MessagingModule::SendMessageByUserId(
                cpp_appId,
                cpp_userId,
                cpp_payload,
                cpp_title,
                cpp_text,
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
};
