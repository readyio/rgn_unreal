#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../Currency/BP_Currency.h"
#include "BP_OnGameCompleteResult.h"
#include "BP_OnGameCompleteRequestData.h"
#include "BP_GameProgress.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "BP_AddUserLevelRequestData.h"
#include "BP_UpdateUserLevelRequestData.h"
#include "BP_GameProgressModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FGameProgressModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGameCompleteAsyncResponse, const FBP_OnGameCompleteResult&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetGameProgressAsyncResponse, const FBP_GameProgress&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAddUserProgressAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateUserProgressAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserProgressAsyncResponse, const FString&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_GameProgressModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
