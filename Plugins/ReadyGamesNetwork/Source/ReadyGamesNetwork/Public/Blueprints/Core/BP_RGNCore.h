#pragma once

#include <vector>
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_RGNConfigureData.h"
#include "BP_RGNCore.generated.h"

// Delegate for signIn event
DECLARE_DYNAMIC_DELEGATE_OneParam(FRGNSignInCallback, bool, isLoggedIn);
DECLARE_DYNAMIC_DELEGATE_OneParam(FRGNAuthChangeCallback, bool, isLoggedIn);

UCLASS()
class READYGAMESNETWORK_API UBP_RGNCore : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void Configure(FBP_RGNConfigureData configureData);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SubscribeToAuthCallback(FRGNAuthChangeCallback onAuthChange);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void UnsubscribeFromAuthCallback(FRGNAuthChangeCallback onAuthChange);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void DevSignIn(const FString& email, const FString& password, FRGNSignInCallback onSignIn);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SignIn(FRGNSignInCallback onSignIn);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SignInAnonymously(FRGNSignInCallback onSignIn);
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Core")
    static void SignOut();
    UFUNCTION(BlueprintPure, Category = "ReadyGamesNetwork | Core")
    static bool IsLoggedIn();
    UFUNCTION(BlueprintPure, Category = "ReadyGamesNetwork | Core")
    static FString GetUserId();
    UFUNCTION(BlueprintPure, Category = "ReadyGamesNetwork | Core")
    static FString GetUserToken();

private:
    static std::vector<FRGNAuthChangeCallback> _authCallbacks;
};
