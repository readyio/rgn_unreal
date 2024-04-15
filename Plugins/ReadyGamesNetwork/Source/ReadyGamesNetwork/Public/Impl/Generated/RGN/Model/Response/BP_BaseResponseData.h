#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/Response/BaseResponseData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_BaseResponseData.generated.h"

/**
 * Represents the base class for response data received from a server.
 * It contains common properties that are expected in all responses.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BaseResponseData {
    GENERATED_BODY()

    /**
     * The status code of the response, typically indicating success or failure of the request.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Response")
    int32 status;
    /**
     * A message providing additional information about the response, such as an error message or a status update.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Response")
    FString message;

	static void ConvertToUnrealModel(const RGN::Model::Response::BaseResponseData& source, FBP_BaseResponseData& target) {
        target.status = source.status;
        target.message = FString(UTF8_TO_TCHAR(source.message.c_str()));
	}

	static void ConvertToCoreModel(const FBP_BaseResponseData& source, RGN::Model::Response::BaseResponseData& target) {
        target.status = source.status;
        target.message = string(TCHAR_TO_UTF8(*source.message));
	}
};
