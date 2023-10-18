#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_RGNCoinEconomy.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "BP_PurchaseRGNCoinRequestData.h"
#include "BP_Currency.h"
#include "BP_CurrencyProductsData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "BP_PurchaseCurrencyProductRequestData.h"
#include "BP_AddUserCurrenciesResponseData.h"
#include "BP_CurrencyModule.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FCurrencyModuleFailResponse, int32, code, const FString&, message);


UCLASS()
class READYGAMESNETWORK_API UBP_CurrencyModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
