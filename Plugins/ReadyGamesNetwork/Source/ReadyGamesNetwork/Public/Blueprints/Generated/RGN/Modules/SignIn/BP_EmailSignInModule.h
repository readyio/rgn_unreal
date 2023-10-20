#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/SignIn/EmailSignInModule.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_EmailSignInModule.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FEmailSignInModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FEmailSignInModuleTryToSignInResponse);
DECLARE_DYNAMIC_DELEGATE(FEmailSignInModuleSendPasswordResetEmailResponse);
DECLARE_DYNAMIC_DELEGATE(FEmailSignInModuleSignOutResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_EmailSignInModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | SignIn")
    static void TryToSignIn(
        FEmailSignInModuleTryToSignInResponse onSuccess, FEmailSignInModuleFailResponse onFail) {
            RGN::Modules::SignIn::EmailSignInModule::TryToSignIn(
                [onSuccess]() {
                    onSuccess.ExecuteIfBound();
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | SignIn")
    static void SendPasswordResetEmail(
        const FString& email,
        FEmailSignInModuleSendPasswordResetEmailResponse onSuccess, FEmailSignInModuleFailResponse onFail) {
            string cpp_email;
			cpp_email = string(TCHAR_TO_UTF8(*email));
            RGN::Modules::SignIn::EmailSignInModule::SendPasswordResetEmail(
                cpp_email            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | SignIn")
    static void SignOut(
        FEmailSignInModuleSignOutResponse onSuccess, FEmailSignInModuleFailResponse onFail) {
            RGN::Modules::SignIn::EmailSignInModule::SignOut(
            );
    }
};
