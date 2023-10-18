#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "BP_BaseMigrationRequestData.generated.h"

/**
 * This class supports multiple versions of an API by appending a "version" parameter to the request data.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BaseMigrationRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    /**
     * Represents the current version of the API implementation on the server.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Request")
    int32 version;

	static void ConvertToUnrealModel(const RGN::Model::Request::BaseMigrationRequestData& source, FBP_BaseMigrationRequestData& target) {
		target.version = source.version;
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_BaseMigrationRequestData& source, RGN::Model::Request::BaseMigrationRequestData& target) {
		target.version = source.version;
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
