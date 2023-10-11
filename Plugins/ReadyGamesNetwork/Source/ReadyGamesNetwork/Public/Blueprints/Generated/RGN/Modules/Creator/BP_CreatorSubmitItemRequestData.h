#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "BP_CreatorSubmitItemRequestData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CreatorSubmitItemRequestData : public FBP_BaseMigrationRequestData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Creator")
    FBP_VirtualItem customizedItem;
};
