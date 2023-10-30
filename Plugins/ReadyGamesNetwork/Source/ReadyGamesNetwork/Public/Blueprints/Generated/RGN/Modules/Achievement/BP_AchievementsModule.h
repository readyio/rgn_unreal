#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementsModule.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetAchievementsResponse.h"
#include "BP_GetAchievementsResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementData.h"
#include "BP_AchievementData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetAchievementsWithUserDataResponse.h"
#include "BP_GetAchievementsWithUserDataResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/AchievementWithUserData.h"
#include "BP_AchievementWithUserData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/TriggerAndClaimResponse.h"
#include "BP_TriggerAndClaimResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/TriggerByIdRequestData.h"
#include "BP_TriggerByIdRequestData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/TriggerByRequestNameRequestData.h"
#include "BP_TriggerByRequestNameRequestData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/ClaimByIdRequestData.h"
#include "BP_ClaimByIdRequestData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/ClaimByRequestNameRequestData.h"
#include "BP_ClaimByRequestNameRequestData.h"
#include "../../../../../Generated/RGN/Modules/Achievement/GetUserAchievementsResponse.h"
#include "BP_GetUserAchievementsResponse.h"
#include "../../../../../Generated/RGN/Modules/Achievement/UserAchievement.h"
#include "BP_UserAchievement.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_AchievementsModule.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FAchievementsModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetByIdsAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetByAppIdsAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetForCurrentAppAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetByAppIdsWithUserDataAsyncResponse, const TArray<FBP_AchievementWithUserData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetForCurrentAppWithUserDataAsyncResponse, const TArray<FBP_AchievementWithUserData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetByRequestNameAsyncResponse, const FBP_AchievementData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetByRequestNamesAsyncResponse, const TArray<FBP_AchievementData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleTriggerByIdAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleTriggerByRequestNameAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleClaimByIdAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleClaimByRequestNameAsyncResponse, const FBP_TriggerAndClaimResponse&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAchievementsModuleGetUserAchievementsAsyncResponse, const TArray<FBP_UserAchievement>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_AchievementsModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetByIdsAsync(
        const TArray<FString>& ids,
        FAchievementsModuleGetByIdsAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            vector<string> cpp_ids;
			for (const auto& ids_item : ids) {
				string cpp_ids_item;
				cpp_ids_item = string(TCHAR_TO_UTF8(*ids_item));
				cpp_ids.push_back(cpp_ids_item);
			}
            RGN::Modules::Achievement::AchievementsModule::GetByIdsAsync(
                cpp_ids,
                [onSuccess](vector<RGN::Modules::Achievement::AchievementData> response) {
                    TArray<FBP_AchievementData> bpResponse;
					for (const auto& response_item : response) {
						FBP_AchievementData b_response_item;
						FBP_AchievementData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetByAppIdsAsync(
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter,
        FAchievementsModuleGetByAppIdsAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            string cpp_startAfter;
			for (const auto& appIds_item : appIds) {
				string cpp_appIds_item;
				cpp_appIds_item = string(TCHAR_TO_UTF8(*appIds_item));
				cpp_appIds.push_back(cpp_appIds_item);
			}
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            RGN::Modules::Achievement::AchievementsModule::GetByAppIdsAsync(
                cpp_appIds,
                cpp_limit,
                cpp_startAfter,
                [onSuccess](vector<RGN::Modules::Achievement::AchievementData> response) {
                    TArray<FBP_AchievementData> bpResponse;
					for (const auto& response_item : response) {
						FBP_AchievementData b_response_item;
						FBP_AchievementData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Asynchronously retrieves a list of achievements for the current application from the Ready Games Network (RGN).
     * @param limit - An integer indicating the maximum number of achievements to retrieve.
     * @param startAfter - An optional parameter representing an achievement id after which to
     * start retrieving the achievements. The default is an empty string.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
     * of T:RGN.Modules.Achievement.AchievementData objects representing the achievements that match the current application identifier,
     * limit and other optional parameters.
     * @throw: Thrown when the provided limit value is zero.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetForCurrentAppAsync(
        int32 limit,
        const FString& startAfter,
        FAchievementsModuleGetForCurrentAppAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            RGN::Modules::Achievement::AchievementsModule::GetForCurrentAppAsync(
                cpp_limit,
                cpp_startAfter,
                [onSuccess](vector<RGN::Modules::Achievement::AchievementData> response) {
                    TArray<FBP_AchievementData> bpResponse;
					for (const auto& response_item : response) {
						FBP_AchievementData b_response_item;
						FBP_AchievementData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetByAppIdsWithUserDataAsync(
        const TArray<FString>& appIds,
        int32 limit,
        const FString& startAfter,
        bool withHistory,
        FAchievementsModuleGetByAppIdsWithUserDataAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            vector<string> cpp_appIds;
            int32_t cpp_limit;
            string cpp_startAfter;
            bool cpp_withHistory;
			for (const auto& appIds_item : appIds) {
				string cpp_appIds_item;
				cpp_appIds_item = string(TCHAR_TO_UTF8(*appIds_item));
				cpp_appIds.push_back(cpp_appIds_item);
			}
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
			cpp_withHistory = withHistory;
            RGN::Modules::Achievement::AchievementsModule::GetByAppIdsWithUserDataAsync(
                cpp_appIds,
                cpp_limit,
                cpp_startAfter,
                cpp_withHistory,
                [onSuccess](vector<RGN::Modules::Achievement::AchievementWithUserData> response) {
                    TArray<FBP_AchievementWithUserData> bpResponse;
					for (const auto& response_item : response) {
						FBP_AchievementWithUserData b_response_item;
						FBP_AchievementWithUserData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Asynchronously retrieves a list of achievements for the current application from the Ready Games Network (RGN).
     * The user achievement data is also returned in case user made any progress with the given achievement
     * @param limit - An integer indicating the maximum number of achievements to retrieve.
     * @param startAfter - An optional parameter representing an achievement id after which to
     * start retrieving the achievements. The default is an empty string.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns a list
     * of T:RGN.Modules.Achievement.AchievementWithUserData objects representing the achievements that match the current application identifier,
     * limit and other optional parameters.
     * @throw: Thrown when the provided limit value is zero.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetForCurrentAppWithUserDataAsync(
        int32 limit,
        const FString& startAfter,
        FAchievementsModuleGetForCurrentAppWithUserDataAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            int32_t cpp_limit;
            string cpp_startAfter;
			cpp_limit = limit;
			cpp_startAfter = string(TCHAR_TO_UTF8(*startAfter));
            RGN::Modules::Achievement::AchievementsModule::GetForCurrentAppWithUserDataAsync(
                cpp_limit,
                cpp_startAfter,
                [onSuccess](vector<RGN::Modules::Achievement::AchievementWithUserData> response) {
                    TArray<FBP_AchievementWithUserData> bpResponse;
					for (const auto& response_item : response) {
						FBP_AchievementWithUserData b_response_item;
						FBP_AchievementWithUserData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Asynchronously retrieves a achievement from the Ready Games Network (RGN)
     * based on the provided achievement request name.
     * @param requestName - Request name to filter achievements.
     * @return A Task representing the asynchronous operation. The Result property of the Task returns a list of
     * T:RGN.Modules.Achievement.AchievementData objects representing the achievement that match the specified identifiers.
     * @throw: Thrown when the provided request name is null or empty.
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetByRequestNameAsync(
        const FString& requestName,
        FAchievementsModuleGetByRequestNameAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            string cpp_requestName;
			cpp_requestName = string(TCHAR_TO_UTF8(*requestName));
            RGN::Modules::Achievement::AchievementsModule::GetByRequestNameAsync(
                cpp_requestName,
                [onSuccess](RGN::Modules::Achievement::AchievementData response) {
                    FBP_AchievementData bpResponse;
					FBP_AchievementData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetByRequestNamesAsync(
        const TArray<FString>& requestNames,
        FAchievementsModuleGetByRequestNamesAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            vector<string> cpp_requestNames;
			for (const auto& requestNames_item : requestNames) {
				string cpp_requestNames_item;
				cpp_requestNames_item = string(TCHAR_TO_UTF8(*requestNames_item));
				cpp_requestNames.push_back(cpp_requestNames_item);
			}
            RGN::Modules::Achievement::AchievementsModule::GetByRequestNamesAsync(
                cpp_requestNames,
                [onSuccess](vector<RGN::Modules::Achievement::AchievementData> response) {
                    TArray<FBP_AchievementData> bpResponse;
					for (const auto& response_item : response) {
						FBP_AchievementData b_response_item;
						FBP_AchievementData::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Triggers the achievement by id to make achievement progress
     * @param id - The achievement id to trigger
     * @param progress - The achievement trigger progress delta
     * @return Trigger and Claim response data
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void TriggerByIdAsync(
        const FString& id,
        int32 progress,
        FAchievementsModuleTriggerByIdAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            string cpp_id;
            int32_t cpp_progress;
			cpp_id = string(TCHAR_TO_UTF8(*id));
			cpp_progress = progress;
            RGN::Modules::Achievement::AchievementsModule::TriggerByIdAsync(
                cpp_id,
                cpp_progress,
                [onSuccess](RGN::Modules::Achievement::TriggerAndClaimResponse response) {
                    FBP_TriggerAndClaimResponse bpResponse;
					FBP_TriggerAndClaimResponse::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Triggers the achievement by request name to make achievement progress
     * @param requestName - The achievement request name to trigger
     * @param progress - The achievement trigger progress delta
     * @return Trigger and Claim response data
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void TriggerByRequestNameAsync(
        const FString& requestName,
        int32 progress,
        FAchievementsModuleTriggerByRequestNameAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            string cpp_requestName;
            int32_t cpp_progress;
			cpp_requestName = string(TCHAR_TO_UTF8(*requestName));
			cpp_progress = progress;
            RGN::Modules::Achievement::AchievementsModule::TriggerByRequestNameAsync(
                cpp_requestName,
                cpp_progress,
                [onSuccess](RGN::Modules::Achievement::TriggerAndClaimResponse response) {
                    FBP_TriggerAndClaimResponse bpResponse;
					FBP_TriggerAndClaimResponse::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Claim the achievement to give rewards to the user
     * For more information about the rewards see T:RGN.Modules.Achievement.AchievementData class
     * @param achievementId - The achievement id to trigger
     * @return Trigger and Claim response data
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void ClaimByIdAsync(
        const FString& achievementId,
        FAchievementsModuleClaimByIdAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            string cpp_achievementId;
			cpp_achievementId = string(TCHAR_TO_UTF8(*achievementId));
            RGN::Modules::Achievement::AchievementsModule::ClaimByIdAsync(
                cpp_achievementId,
                [onSuccess](RGN::Modules::Achievement::TriggerAndClaimResponse response) {
                    FBP_TriggerAndClaimResponse bpResponse;
					FBP_TriggerAndClaimResponse::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Claim the achievement to give rewards to the user
     * For more information about the rewards see T:RGN.Modules.Achievement.AchievementData class
     * @param requestName - The achievement id to trigger
     * @return Trigger and Claim response data
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void ClaimByRequestNameAsync(
        const FString& requestName,
        FAchievementsModuleClaimByRequestNameAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            string cpp_requestName;
			cpp_requestName = string(TCHAR_TO_UTF8(*requestName));
            RGN::Modules::Achievement::AchievementsModule::ClaimByRequestNameAsync(
                cpp_requestName,
                [onSuccess](RGN::Modules::Achievement::TriggerAndClaimResponse response) {
                    FBP_TriggerAndClaimResponse bpResponse;
					FBP_TriggerAndClaimResponse::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Gets current user competed achievements
     * If the userId is provided, then it returns the comleted achievements for provided userId
     * Supports pagination queries in case the startAfter and limit are provided
     * @param userId - User id to return the completed achievements
     * @param startAfter - The time stamp to start the query after F:RGN.Modules.Achievement.UserAchievement.lastCompleteTime
     * @param limit - Maximal number of documents to return
     * @return Requested amount of completed achievements
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Achievement")
    static void GetUserAchievementsAsync(
        const FString& userId,
        int64 startAfter,
        int32 limit,
        FAchievementsModuleGetUserAchievementsAsyncResponse onSuccess, FAchievementsModuleFailResponse onFail) {
            string cpp_userId;
            int64_t cpp_startAfter;
            int32_t cpp_limit;
			cpp_userId = string(TCHAR_TO_UTF8(*userId));
			cpp_startAfter = startAfter;
			cpp_limit = limit;
            RGN::Modules::Achievement::AchievementsModule::GetUserAchievementsAsync(
                cpp_userId,
                cpp_startAfter,
                cpp_limit,
                [onSuccess](vector<RGN::Modules::Achievement::UserAchievement> response) {
                    TArray<FBP_UserAchievement> bpResponse;
					for (const auto& response_item : response) {
						FBP_UserAchievement b_response_item;
						FBP_UserAchievement::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
};
