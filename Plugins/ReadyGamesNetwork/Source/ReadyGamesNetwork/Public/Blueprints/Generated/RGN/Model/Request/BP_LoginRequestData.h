#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Model/Request/LoginRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "BP_BaseMigrationRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_LoginRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LoginRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Request")
    FString bio;

	static void ConvertToUnrealModel(const RGN::Model::Request::LoginRequestData& source, FBP_LoginRequestData& target) {
		target.bio = FString(source.bio.c_str());
		FBP_BaseMigrationRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_LoginRequestData& source, RGN::Model::Request::LoginRequestData& target) {
		target.bio = string(TCHAR_TO_UTF8(*source.bio));
		FBP_BaseMigrationRequestData::ConvertToCoreModel(source, target);
	}
};
