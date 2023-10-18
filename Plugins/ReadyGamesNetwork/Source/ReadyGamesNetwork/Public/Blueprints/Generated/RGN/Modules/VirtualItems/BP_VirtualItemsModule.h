#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_VirtualItem.h"
#include "BP_AddVirtualItemResponseData.h"
#include "BP_AddToVirtualItemsRequestData.h"
#include "BP_UpdateVirtualItemsRequestData.h"
#include "BP_VirtualItemsResponseData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "BP_GetAllVirtualItemsByAppIdsRequestData.h"
#include "BP_GetVirtualItemsByIdsRequestData.h"
#include "BP_GetVirtualItemTagsResponse.h"
#include "../../Model/BP_ImageSize.h"
#include "BP_VirtualItemsModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FVirtualItemsModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FAddVirtualItemAsyncResponse, const FBP_VirtualItem&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAddFromCSVAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateVirtualItemAsyncResponse, const FBP_VirtualItem&, response);
DECLARE_DYNAMIC_DELEGATE(FDeleteVirtualItemAsyncResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetVirtualItemsAsyncResponse, const TArray<FBP_VirtualItem>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetVirtualItemsAsyncResponse, const TArray<FBP_VirtualItem>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetVirtualItemsByIdsAsyncResponse, const TArray<FBP_VirtualItem>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetByTagsAsyncResponse, const TArray<FBP_VirtualItem>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetTagsAsyncResponse, const TArray<FString>&, response);
DECLARE_DYNAMIC_DELEGATE(FSetTagsAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FSetNameAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FSetDescriptionAsyncResponse);
DECLARE_DYNAMIC_DELEGATE_OneParam(FGetPropertiesAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSetPropertiesAsyncResponse, const FString&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUploadImageAsyncResponse, const bool&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FDownloadImageAsyncResponse, const TArray<uint8>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_VirtualItemsModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
