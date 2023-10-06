#include "RGNWalletsModule.h"
#include "ReadyGamesNetworkLogger.h"

void RGNWalletsModule::CreateWallet(const std::string& password, const std::function<void(RGNCreateWalletResponse)>& callback) {

}

void RGNWalletsModule::GetUserWallets(const std::function<void(RGNGetUserWalletsResponse)>& callback) {
    HttpHeaders headers;
    headers.add("Content-type", "application/json");

    RGNGetUserWalletsRequestBody requestBody(RGNCoreModule::getAppId());
    std::string requestBodyStr = requestBody.serialize();

    RGNCoreModule::Request(RGNCoreModule::getApiUrl() + "wallets-getUserWallets", HttpMethod::POST, headers, requestBodyStr,
        [callback](HttpResponse response) {
            std::string responseBody = response.getResponseBody();
            int responseCode = response.getResponseCode();

            UE_LOG(LogReadyGamesNetwork, Log, TEXT("%s"), UTF8_TO_TCHAR(responseBody.c_str()));
            UE_LOG(LogReadyGamesNetwork, Log, TEXT("%d"), responseCode);

            RGNGetUserWalletsResponse getUserWalletsResponse(responseCode, responseBody, std::vector<RGNWallet>());
            if (responseCode == 200) {
                getUserWalletsResponse.deserialize(responseBody);
            }
            callback(getUserWalletsResponse);
        });
}