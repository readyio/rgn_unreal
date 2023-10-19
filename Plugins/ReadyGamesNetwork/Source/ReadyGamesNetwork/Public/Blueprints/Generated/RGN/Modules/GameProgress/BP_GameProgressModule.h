#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/GameProgressModule.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "../Currency/BP_Currency.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/OnGameCompleteResult.h"
#include "BP_OnGameCompleteResult.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/OnGameCompleteRequestData.h"
#include "BP_OnGameCompleteRequestData.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/GameProgress.h"
#include "BP_GameProgress.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/AddUserLevelRequestData.h"
#include "BP_AddUserLevelRequestData.h"
#include "../../../../../Generated/RGN/Modules/GameProgress/UpdateUserLevelRequestData.h"
#include "BP_UpdateUserLevelRequestData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_GameProgressModule.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FGameProgressModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FGameProgressModuleOnGameCompleteAsyncResponse, const FBP_OnGameCompleteResult&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGameProgressModuleGetGameProgressAsyncResponse, const FBP_GameProgress&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGameProgressModuleAddUserProgressAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGameProgressModuleUpdateUserProgressAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGameProgressModuleGetUserProgressAsyncResponse, const FString&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_GameProgressModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | GameProgress")
    static void OnGameCompleteAsync(
        const TArray<FBP_Currency>& reward,
        FGameProgressModuleOnGameCompleteAsyncResponse onSuccess, FGameProgressModuleFailResponse onFail) {
            vector<RGN::Modules::Currency::Currency> cpp_reward;
			for (const auto& reward_item : reward) {
				RGN::Modules::Currency::Currency cpp_reward_item;
				FBP_Currency::ConvertToCoreModel(reward_item, cpp_reward_item);
				cpp_reward.push_back(cpp_reward_item);
			}
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | GameProgress")
    static void GetGameProgressAsync(
        FGameProgressModuleGetGameProgressAsyncResponse onSuccess, FGameProgressModuleFailResponse onFail) {
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | GameProgress")
    static void AddUserProgressAsync(
        const FString& userProgressJson,
        FGameProgressModuleAddUserProgressAsyncResponse onSuccess, FGameProgressModuleFailResponse onFail) {
            string cpp_userProgressJson;
			cpp_userProgressJson = string(TCHAR_TO_UTF8(*userProgressJson));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | GameProgress")
    static void UpdateUserProgressAsync(
        const FString& userProgressJson,
        const TArray<FBP_Currency>& reward,
        FGameProgressModuleUpdateUserProgressAsyncResponse onSuccess, FGameProgressModuleFailResponse onFail) {
            string cpp_userProgressJson;
            vector<RGN::Modules::Currency::Currency> cpp_reward;
			cpp_userProgressJson = string(TCHAR_TO_UTF8(*userProgressJson));
			for (const auto& reward_item : reward) {
				RGN::Modules::Currency::Currency cpp_reward_item;
				FBP_Currency::ConvertToCoreModel(reward_item, cpp_reward_item);
				cpp_reward.push_back(cpp_reward_item);
			}
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | GameProgress")
    static void GetUserProgressAsync(
        FGameProgressModuleGetUserProgressAsyncResponse onSuccess, FGameProgressModuleFailResponse onFail) {
            // TODO
    }
};
