#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_EmailSignInModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FEmailSignInModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE(FEmailSignInModuleTryToSignInResponse);
DECLARE_DYNAMIC_DELEGATE(FEmailSignInModuleSendPasswordResetEmailResponse);
DECLARE_DYNAMIC_DELEGATE(FEmailSignInModuleSignOutResponse);

UCLASS()
class READYGAMESNETWORK_API UBP_EmailSignInModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
