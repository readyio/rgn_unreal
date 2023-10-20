#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/SignIn/GuestSignInModule.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_GuestSignInModule.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FGuestSignInModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FGuestSignInModuleTryToSignInAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FGuestSignInModuleSignOutResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_GuestSignInModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | SignIn")
    static void TryToSignInAsync(
        FGuestSignInModuleTryToSignInAsyncResponse onSuccess, FGuestSignInModuleFailResponse onFail) {
            RGN::Modules::SignIn::GuestSignInModule::TryToSignInAsync(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | SignIn")
    static void SignOut(
        FGuestSignInModuleSignOutResponse onSuccess, FGuestSignInModuleFailResponse onFail) {
            RGN::Modules::SignIn::GuestSignInModule::SignOut(
            );
    }
};
