#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_CreatorSignupResponseData.h"
#include "BP_CreatorSignupRequestData.h"
#include "../VirtualItems/BP_VirtualItem.h"
#include "BP_CreatorSubmitItemResponseData.h"
#include "BP_CreatorSubmitItemRequestData.h"
#include "BP_CreatorData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "../Currency/BP_ClaimCurrencyResponseData.h"
#include "BP_CreatorModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FCreatorModuleFailResponse, int32, code, const FString&, message);


UCLASS()
class READYGAMESNETWORK_API UBP_CreatorModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
