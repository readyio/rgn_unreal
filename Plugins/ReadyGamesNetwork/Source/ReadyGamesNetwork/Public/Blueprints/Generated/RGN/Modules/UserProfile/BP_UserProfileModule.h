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


UCLASS()
class READYGAMESNETWORK_API UBP_UserProfileModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
