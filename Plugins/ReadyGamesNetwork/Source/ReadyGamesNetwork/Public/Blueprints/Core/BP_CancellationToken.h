#pragma once

#include "CoreMinimal.h"
#include "../../Core/CancellationToken.h"
#include "BP_CancellationToken.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CancellationToken
{
    GENERATED_BODY()

	static void ConvertToUnrealModel(const CancellationToken& source, FBP_CancellationToken& target) {
		
	}

	static void ConvertToCoreModel(const FBP_CancellationToken& source, CancellationToken& target) {
		
	}
};