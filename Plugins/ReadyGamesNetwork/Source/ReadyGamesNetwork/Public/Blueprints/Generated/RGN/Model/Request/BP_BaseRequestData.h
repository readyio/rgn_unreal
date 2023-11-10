#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_BaseRequestData.generated.h"

/**
 * Base class for request data that is sent to a server.
 * It includes common data that is required for all requests.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BaseRequestData {
    GENERATED_BODY()

    /**
     * The package name of the app making the request. This is typically used for identification purposes.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Request")
    FString appPackageName;

	static void ConvertToUnrealModel(const RGN::Model::Request::BaseRequestData& source, FBP_BaseRequestData& target) {
        target.appPackageName = FString(source.appPackageName.c_str());
	}

	static void ConvertToCoreModel(const FBP_BaseRequestData& source, RGN::Model::Request::BaseRequestData& target) {
        target.appPackageName = string(TCHAR_TO_UTF8(*source.appPackageName));
	}
};
