#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_GetAchievementsResponse.h"
#include "BP_AchievementData.h"
#include "BP_GetAchievementsWithUserDataResponse.h"
#include "BP_AchievementWithUserData.h"
#include "BP_TriggerAndClaimResponse.h"
#include "BP_TriggerByIdRequestData.h"
#include "BP_TriggerByRequestNameRequestData.h"
#include "BP_ClaimByIdRequestData.h"
#include "BP_ClaimByRequestNameRequestData.h"
#include "BP_GetUserAchievementsResponse.h"
#include "BP_UserAchievement.h"
#include "BP_AchievementsModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FAchievementsModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByIdsAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByAppIdsAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetForCurrentAppAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByAppIdsWithUserDataAsyncResponse, const TArray<FBP_AchievementWithUserData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetForCurrentAppWithUserDataAsyncResponse, const TArray<FBP_AchievementWithUserData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByRequestNameAsyncResponse, const FBP_AchievementData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByRequestNamesAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FTriggerByIdAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FTriggerByRequestNameAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FClaimByIdAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FClaimByRequestNameAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserAchievementsAsyncResponse, const TArray<FBP_UserAchievement>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_AchievementsModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
