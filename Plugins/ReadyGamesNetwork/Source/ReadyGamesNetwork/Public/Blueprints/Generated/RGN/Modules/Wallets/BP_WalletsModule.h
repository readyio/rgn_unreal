#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Wallets/WalletsModule.h"
#include "../../../../../Generated/RGN/Modules/Wallets/IsUserHasBlockchainRequirementResponseData.h"
#include "BP_IsUserHasBlockchainRequirementResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_WalletsModule.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FWalletsModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FWalletsModuleIsUserHasBlockchainRequirementAsyncResponse, bool, response);

UCLASS()
class READYGAMESNETWORK_API UBP_WalletsModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Wallets")
    static void IsUserHasBlockchainRequirementAsync(
        FWalletsModuleIsUserHasBlockchainRequirementAsyncResponse onSuccess,
        FWalletsModuleFailResponse onFail) {
            RGN::Modules::Wallets::WalletsModule::IsUserHasBlockchainRequirementAsync(
                [onSuccess](bool response) {
                    bool bpResponse;
                    bpResponse = response;
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
    }
};
