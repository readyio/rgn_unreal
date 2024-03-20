#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../Generated/RGN/Model/RequirementData.h"
#include "../../../../Generated/RGN/Model/Requirement.h"
#include "BP_Requirement.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_RequirementData.generated.h"

/**
 * A class that represents a leaderboard join or store offer purchase requirements on Ready Games Network.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_RequirementData {
    GENERATED_BODY()

    /**
     * The operation to check the F:RGN.Model.RequirementData.requirements with.
     * Available operations are:
     * `and` - the user must meet all of the requirements.
     * `or` - the user must meet at least one of the requirements.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | RequirementData")
    FString operation;
    /**
     * The list of requirements.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | RequirementData")
    TArray<FBP_Requirement> requirements;

	static void ConvertToUnrealModel(const RGN::Model::RequirementData& source, FBP_RequirementData& target) {
        target.operation = FString(UTF8_TO_TCHAR(source.operation.c_str()));
        for (const auto& source_requirements_item : source.requirements) {
            FBP_Requirement b_source_requirements_item;
            FBP_Requirement::ConvertToUnrealModel(source_requirements_item, b_source_requirements_item);
            target.requirements.Add(b_source_requirements_item);
        }
	}

	static void ConvertToCoreModel(const FBP_RequirementData& source, RGN::Model::RequirementData& target) {
        target.operation = string(TCHAR_TO_UTF8(*source.operation));
        for (const auto& source_requirements_item : source.requirements) {
            RGN::Model::Requirement cpp_source_requirements_item;
            FBP_Requirement::ConvertToCoreModel(source_requirements_item, cpp_source_requirements_item);
            target.requirements.push_back(cpp_source_requirements_item);
        }
	}
};
