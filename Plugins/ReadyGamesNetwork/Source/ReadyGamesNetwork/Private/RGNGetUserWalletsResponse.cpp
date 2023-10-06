#include "RGNGetUserWalletsResponse.h"

#ifdef READY_GAMES_SDK_UNREAL
#include "Json.h"
#elif READY_GAMES_SDK_GODOT

#endif

RGNGetUserWalletsResponse::RGNGetUserWalletsResponse(int code, std::string rawBody,
	std::vector<RGNWallet> wallets) : RGNResponse(code, rawBody) {
	this->wallets = wallets;
}

std::vector<RGNWallet>& RGNGetUserWalletsResponse::getWallets() {
	return this->wallets;
}

void RGNGetUserWalletsResponse::deserialize(std::string json) {
#ifdef READY_GAMES_SDK_UNREAL
    FString JsonString(json.c_str());
    TSharedPtr<FJsonObject> JsonObject;
    TSharedPtr<FJsonObject> ResponseJsonObject;
    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);

    if (FJsonSerializer::Deserialize(JsonReader, JsonObject))
    {
        FString ResponseJsonString;
        if (JsonObject->TryGetStringField("response", ResponseJsonString))
        {
            TSharedRef<TJsonReader<TCHAR>> ResponseJsonReader = TJsonReaderFactory<TCHAR>::Create(ResponseJsonString);

            if (FJsonSerializer::Deserialize(ResponseJsonReader, ResponseJsonObject))
            {
                const TArray<TSharedPtr<FJsonValue>>* WalletsJsonArray;
                if (ResponseJsonObject->TryGetArrayField("wallets", WalletsJsonArray))
                {
                    for (const TSharedPtr<FJsonValue>& WalletJson : *WalletsJsonArray) 
                    {
                        TSharedPtr<FJsonObject> WalletJsonObject = WalletJson->AsObject();

                        FString WalletAddress;
                        if (WalletJsonObject->TryGetStringField("address", WalletAddress))
                        {
                            std::string WalletAddressStr = std::string(TCHAR_TO_UTF8(*WalletAddress));
                            RGNWallet Wallet(WalletAddressStr);
                            wallets.push_back(Wallet);
                        }
                    }
                }
            }
        }
    }
#elif READY_GAMES_SDK_GODOT

#endif
}