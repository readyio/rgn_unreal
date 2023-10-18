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


UCLASS()
class READYGAMESNETWORK_API UBP_AchievementsModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
