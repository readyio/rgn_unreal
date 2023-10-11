#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../Currency/BP_Currency.h"
#include "BP_UserData.h"
#include "BP_UserProfileData.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_UserProfileData : public FBP_UserData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    FString lastAppPackageName;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    bool invisibleStatus;
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | UserProfile")
    TArray<FBP_Currency> currencies;
};
