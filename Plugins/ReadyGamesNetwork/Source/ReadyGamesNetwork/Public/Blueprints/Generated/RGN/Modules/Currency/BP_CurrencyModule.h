#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/Currency/CurrencyModule.h"
#include "../../../../../Generated/RGN/Modules/Currency/RGNCoinEconomy.h"
#include "BP_RGNCoinEconomy.h"
#include "../../../../../Generated/RGN/Model/Request/BaseRequestData.h"
#include "../../Model/Request/BP_BaseRequestData.h"
#include "../../../../../Generated/RGN/Modules/Currency/Currency.h"
#include "BP_Currency.h"
#include "../../../../../Generated/RGN/Modules/Currency/PurchaseRGNCoinRequestData.h"
#include "BP_PurchaseRGNCoinRequestData.h"
#include "../../../../../Generated/RGN/Modules/Currency/CurrencyProductsData.h"
#include "BP_CurrencyProductsData.h"
#include "../../../../../Generated/RGN/Model/Request/BaseMigrationRequestData.h"
#include "../../Model/Request/BP_BaseMigrationRequestData.h"
#include "../../../../../Generated/RGN/Modules/Currency/PurchaseCurrencyProductRequestData.h"
#include "BP_PurchaseCurrencyProductRequestData.h"
#include "../../../../../Generated/RGN/Modules/Currency/AddUserCurrenciesResponseData.h"
#include "BP_AddUserCurrenciesResponseData.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_CurrencyModule.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FCurrencyModuleFailResponse, int32, code, const FString&, message);

DECLARE_DYNAMIC_DELEGATE_OneParam(FCurrencyModuleGetRGNCoinEconomyAsyncResponse, const FBP_RGNCoinEconomy&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCurrencyModulePurchaseRGNCoinAsyncResponse, const TArray<FBP_Currency>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCurrencyModuleGetInAppPurchaseCurrencyDataAsyncResponse, const FBP_CurrencyProductsData&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCurrencyModulePurchaseCurrencyProductAsyncResponse, const TArray<FBP_Currency>&, response);
DECLARE_DYNAMIC_DELEGATE_OneParam(FCurrencyModuleAddUserCurrenciesAsyncResponse, const TArray<FBP_Currency>&, response);

UCLASS()
class READYGAMESNETWORK_API UBP_CurrencyModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Currency")
    static void GetRGNCoinEconomyAsync(
        FCurrencyModuleGetRGNCoinEconomyAsyncResponse onSuccess, FCurrencyModuleFailResponse onFail) {
            RGN::Modules::Currency::CurrencyModule::GetRGNCoinEconomyAsync(
                [onSuccess](RGN::Modules::Currency::RGNCoinEconomy response) {
                    FBP_RGNCoinEconomy bpResponse;
					FBP_RGNCoinEconomy::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Adds the rgn-coin currency to the user in
     * in-app purchase plugin callback after verifying the reciept locally
     * 1. Start in-app purchase process
     * 2. Wait for user purchase
     * 3. Verify the reciept after successful purchase
     * 4. Cann this method with the appropriate in-app item id (M:RGN.Modules.Currency.CurrencyModule.GetRGNCoinEconomyAsync)
     * @param iapUUID - Unique id of the rgn-coin pack that was returned by the M:RGN.Modules.Currency.CurrencyModule.GetRGNCoinEconomyAsync method
     * @param iapTransactionId - The transaction id of the in-app purchase
     * @param iapReceipt - The receipt of the in-app purchase
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Currency")
    static void PurchaseRGNCoinAsync(
        const FString& iapUUID,
        const FString& iapTransactionId,
        const FString& iapReceipt,
        FCurrencyModulePurchaseRGNCoinAsyncResponse onSuccess, FCurrencyModuleFailResponse onFail) {
            string cpp_iapUUID;
            string cpp_iapTransactionId;
            string cpp_iapReceipt;
			cpp_iapUUID = string(TCHAR_TO_UTF8(*iapUUID));
			cpp_iapTransactionId = string(TCHAR_TO_UTF8(*iapTransactionId));
			cpp_iapReceipt = string(TCHAR_TO_UTF8(*iapReceipt));
            RGN::Modules::Currency::CurrencyModule::PurchaseRGNCoinAsync(
                cpp_iapUUID,
                cpp_iapTransactionId,
                cpp_iapReceipt,
                [onSuccess](vector<RGN::Modules::Currency::Currency> response) {
                    TArray<FBP_Currency> bpResponse;
					for (const auto& response_item : response) {
						FBP_Currency b_response_item;
						FBP_Currency::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Currency")
    static void GetInAppPurchaseCurrencyDataAsync(
        FCurrencyModuleGetInAppPurchaseCurrencyDataAsyncResponse onSuccess, FCurrencyModuleFailResponse onFail) {
            RGN::Modules::Currency::CurrencyModule::GetInAppPurchaseCurrencyDataAsync(
                [onSuccess](RGN::Modules::Currency::CurrencyProductsData response) {
                    FBP_CurrencyProductsData bpResponse;
					FBP_CurrencyProductsData::ConvertToUnrealModel(response, bpResponse);
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    /**
     * Adds any project specific currency to the users profile.
     * You can also use this method without going to the in-app purchase process if you want to give the player a currencies
     */
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Currency")
    static void PurchaseCurrencyProductAsync(
        const FString& productId,
        FCurrencyModulePurchaseCurrencyProductAsyncResponse onSuccess, FCurrencyModuleFailResponse onFail) {
            string cpp_productId;
			cpp_productId = string(TCHAR_TO_UTF8(*productId));
            RGN::Modules::Currency::CurrencyModule::PurchaseCurrencyProductAsync(
                cpp_productId,
                [onSuccess](vector<RGN::Modules::Currency::Currency> response) {
                    TArray<FBP_Currency> bpResponse;
					for (const auto& response_item : response) {
						FBP_Currency b_response_item;
						FBP_Currency::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
    UFUNCTION(BlueprintCallable, Category = "ReadyGamesNetwork | Currency")
    static void AddUserCurrenciesAsync(
        const TArray<FBP_Currency>& currencies,
        FCurrencyModuleAddUserCurrenciesAsyncResponse onSuccess, FCurrencyModuleFailResponse onFail) {
            vector<RGN::Modules::Currency::Currency> cpp_currencies;
			for (const auto& currencies_item : currencies) {
				RGN::Modules::Currency::Currency cpp_currencies_item;
				FBP_Currency::ConvertToCoreModel(currencies_item, cpp_currencies_item);
				cpp_currencies.push_back(cpp_currencies_item);
			}
            RGN::Modules::Currency::CurrencyModule::AddUserCurrenciesAsync(
                cpp_currencies,
                [onSuccess](vector<RGN::Modules::Currency::Currency> response) {
                    TArray<FBP_Currency> bpResponse;
					for (const auto& response_item : response) {
						FBP_Currency b_response_item;
						FBP_Currency::ConvertToUnrealModel(response_item, b_response_item);
						bpResponse.Add(b_response_item);
					}
                    onSuccess.ExecuteIfBound(bpResponse);
                },
                [onFail](int code, std::string message) {
                     onFail.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                }
            );
    }
};
