#include "Blueprints/WalletsModule/BP_WalletsModule.h"
#include "Core/WalletsModule/WalletsModule.h"
#include "Http/Http.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "json.hpp"

using json = nlohmann::json;

void UBP_WalletsModule::CreateWallet(const FString& password,
    FCreateWalletSuccessResponse successEvent, FWalletsFailResponse failEvent) {
        WalletsModule::CreateWallet(std::string(TCHAR_TO_UTF8(*password)),
            [successEvent](CreateWalletResponse response) {
                json responseJson = response;
                FString responseJsonString = FString(responseJson.dump().c_str());
                FBP_CreateWalletResponse bpResponse;
                FJsonObjectConverter::JsonObjectStringToUStruct<FBP_CreateWalletResponse>(responseJsonString, &bpResponse, 0, 0);

                AsyncTask(ENamedThreads::GameThread, [=]()
                {
                    successEvent.ExecuteIfBound(bpResponse);
                });
            },
            [failEvent](int code, std::string message) {

                AsyncTask(ENamedThreads::GameThread, [=]()
                {
                    failEvent.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
            }
        );
    }

void UBP_WalletsModule::GetUserWallets(
    FGetUserWalletsSuccessResponse successEvent, FWalletsFailResponse failEvent) {
        WalletsModule::GetUserWallets(
            [successEvent](GetUserWalletsResponse response) {
                json responseJson = response;
                FString responseJsonString = FString(responseJson.dump().c_str());
                FBP_GetUserWalletsResponse bpResponse;
                FJsonObjectConverter::JsonObjectStringToUStruct<FBP_GetUserWalletsResponse>(responseJsonString, &bpResponse, 0, 0);

                AsyncTask(ENamedThreads::GameThread, [=]()
                {
                    successEvent.ExecuteIfBound(bpResponse);
                });
            },
            [failEvent](int code, std::string message) {
                AsyncTask(ENamedThreads::GameThread, [=]()
                {
                    failEvent.ExecuteIfBound(static_cast<int32>(code), FString(message.c_str()));
                });
            }
        );
    }