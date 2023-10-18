#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_GuestSignInModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FGuestSignInModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FTryToSignInAsyncResponse);
DECLARE_DYNAMIC_DELEGATE(FSignOutResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_GuestSignInModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
