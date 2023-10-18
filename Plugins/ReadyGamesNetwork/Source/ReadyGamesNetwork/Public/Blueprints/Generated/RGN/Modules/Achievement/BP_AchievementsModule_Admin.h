#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_AchievementData.h"
#include "BP_AchievementsModule_Admin.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FAchievementsModule_AdminFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FAddAchievementAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateAchievementAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE(FDeleteAchievementAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FAddLoginDaysInRowAchievementAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FAddLoginDaysInRowAchievementAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FDeleteLoginDaysInRowGameConstRecordAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FAddPlayerProgressAchievementAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FAddPlayerProgressAchievementAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FDeletePlayerProgressAchievementAsyncResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_AchievementsModule_Admin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
