#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
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
};
