#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Messaging/Message.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_Message.generated.h"

/**
 * This struct used to get messages from the backend
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_Message {
    GENERATED_BODY()

    /**
     * Unique id of the message
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Messaging")
    FString Id;
    /**
     * Payload string to attach data to the message
     * This could be for example Json string
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Messaging")
    FString Payload;

	static void ConvertToUnrealModel(const RGN::Modules::Messaging::Message& source, FBP_Message& target) {
		target.Id = FString(source.Id.c_str());
		target.Payload = FString(source.Payload.c_str());
	}

	static void ConvertToCoreModel(const FBP_Message& source, RGN::Modules::Messaging::Message& target) {
		target.Id = string(TCHAR_TO_UTF8(*source.Id));
		target.Payload = string(TCHAR_TO_UTF8(*source.Payload));
	}
};
