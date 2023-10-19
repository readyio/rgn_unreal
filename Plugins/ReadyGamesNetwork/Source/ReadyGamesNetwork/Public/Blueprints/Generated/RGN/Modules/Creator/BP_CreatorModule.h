#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorModule.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSignupResponseData.h"
#include "BP_CreatorSignupResponseData.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSignupRequestData.h"
#include "BP_CreatorSignupRequestData.h"
#include "../../../../../Generated/RGN/Modules/VirtualItems/VirtualItem.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSubmitItemResponseData.h"
#include "BP_CreatorSubmitItemResponseData.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorSubmitItemRequestData.h"
#include "BP_CreatorSubmitItemRequestData.h"
#include "../../../../../Generated/RGN/Modules/Creator/CreatorData.h"
#include "BP_CreatorData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "../../../../../Generated/RGN/Modules/Currency/ClaimCurrencyResponseData.h"
#include "../Currency/BP_ClaimCurrencyResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_CreatorModule.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FCreatorModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FCreatorModuleBecomeACreatorAsyncResponse, const FBP_CreatorSignupResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCreatorModuleSubmitItemAsyncResponse, const FBP_CreatorSubmitItemResponseData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCreatorModuleGetCreatorDataAsyncResponse, const FBP_CreatorData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCreatorModuleClaimCurrenciesAsyncResponse, const FBP_ClaimCurrencyResponseData&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_CreatorModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Creator")
    static void BecomeACreatorAsync(
        const FString& brandName,
        FCreatorModuleBecomeACreatorAsyncResponse onSuccess, FCreatorModuleFailResponse onFail) {
            string cpp_brandName;
			cpp_brandName = string(TCHAR_TO_UTF8(*brandName));
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Creator")
    static void SubmitItemAsync(
        const FBP_VirtualItem& customizedItem,
        FCreatorModuleSubmitItemAsyncResponse onSuccess, FCreatorModuleFailResponse onFail) {
            RGN::Modules::VirtualItems::VirtualItem cpp_customizedItem;
			FBP_VirtualItem::ConvertToCoreModel(customizedItem, cpp_customizedItem);
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Creator")
    static void GetCreatorDataAsync(
        FCreatorModuleGetCreatorDataAsyncResponse onSuccess, FCreatorModuleFailResponse onFail) {
            // TODO
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Creator")
    static void ClaimCurrenciesAsync(
        FCreatorModuleClaimCurrenciesAsyncResponse onSuccess, FCreatorModuleFailResponse onFail) {
            // TODO
    }
};
