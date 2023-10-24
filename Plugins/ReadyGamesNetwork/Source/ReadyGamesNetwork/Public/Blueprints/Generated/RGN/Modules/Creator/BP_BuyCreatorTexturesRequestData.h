#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Creator/BuyCreatorTexturesRequestData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_BuyCreatorTexturesRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_BuyCreatorTexturesRequestData : public FBP_BaseRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Creator")
    TArray<FString> textureIds;

	static void ConvertToUnrealModel(const RGN::Modules::Creator::BuyCreatorTexturesRequestData& source, FBP_BuyCreatorTexturesRequestData& target) {
		for (const auto& source_textureIds_item : source.textureIds) {
			FString b_source_textureIds_item;
			b_source_textureIds_item = FString(source_textureIds_item.c_str());
			target.textureIds.Add(b_source_textureIds_item);
		}
		FBP_BaseRequestData::ConvertToUnrealModel(source, target);
	}

	static void ConvertToCoreModel(const FBP_BuyCreatorTexturesRequestData& source, RGN::Modules::Creator::BuyCreatorTexturesRequestData& target) {
		for (const auto& source_textureIds_item : source.textureIds) {
			string cpp_source_textureIds_item;
			cpp_source_textureIds_item = string(TCHAR_TO_UTF8(*source_textureIds_item));
			target.textureIds.push_back(cpp_source_textureIds_item);
		}
		FBP_BaseRequestData::ConvertToCoreModel(source, target);
	}
};
