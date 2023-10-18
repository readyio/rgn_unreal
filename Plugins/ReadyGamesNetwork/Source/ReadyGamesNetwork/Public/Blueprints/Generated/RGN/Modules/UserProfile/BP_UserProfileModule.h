#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_UserData.h"
#include "BP_GetUserProfileRequestData.h"
#include "BP_SearchUsersRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "../Currency/BP_Currency.h"
#include "BP_GetUserIdByShortUIDRequestData.h"
#include "BP_UpdateUserProfileRequestData.h"
#include "../../Model/BP_ImageSize.h"
#include "BP_SetInvisibleStatusRequestData.h"
#include "BP_GetUserStatusResponseData.h"
#include "BP_GetUserStatusRequestData.h"
#include "BP_UserProfileModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FUserProfileModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FGetProfileAsyncResponse, const FBP_UserData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetProfileAsyncResponse, const FBP_UserData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetFullUserProfileAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetFullUserProfileAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSearchUsersAsyncResponse, const TArray<FBP_UserData>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserCurrenciesAsyncResponse, const TArray<FBP_Currency>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserIdByShortUIDAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSetDisplayNameAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSetBioAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSetDisplayNameAndBioAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUploadAvatarImageAsyncResponse, const bool&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FDownloadAvatarImageAsyncResponse, const TArray<uint8>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FChangeAdminStatusByEmailAsyncResponse, const TMap<FString, FString>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FChangeAdminStatusByUserIdAsyncResponse, const TMap<FString, FString>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserCustomClaimsByUserIdAsyncResponse, const TMap<FString, FString>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserCustomClaimsByEmailAsyncResponse, const TMap<FString, FString>&, response);
DECLARE_DYNAMIC_DELEGATE(FSetInvisibleStatusAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FPingAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FSuspendAsyncResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetUserStateAsyncResponse, const FBP_GetUserStatusResponseData&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_UserProfileModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
