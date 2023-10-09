#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../BP_ConfigureData.h"
#include "../../Core/CoreModule/AuthChangeCallback.h"
#include <vector>
#include "BP_CoreModule.generated.h"

// Delegate for signIn event
DECLARE_DYNAMIC_DELEGATE_OneParam(FAuthChangeCallback, bool, isLoggedIn);

UCLASS()
class READYGAMESNETWORK_API UBP_CoreModuleFunctions : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void Configure(FBP_ConfigureData configureData);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SubscribeToAuthChange(FAuthChangeCallback callback);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void UnsubscribeFromAuthChange(FAuthChangeCallback callback);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void DevSignIn(const FString& email, const FString& password);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SignIn();
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SignOut();
    UFUNCTION(BlueprintPure, Category = "ReadyGamesNetwork | Core")
    static bool IsLoggedIn();
    UFUNCTION(BlueprintPure, Category = "ReadyGamesNetwork | Core")
    static FString GetUserToken();

private:
    static std::vector<FAuthChangeCallback> _authChangeCallbacks;
};
