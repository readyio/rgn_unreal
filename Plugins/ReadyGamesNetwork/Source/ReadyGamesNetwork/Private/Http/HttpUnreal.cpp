#ifdef READY_GAMES_SDK_UNREAL

#include "Http/Http.h"
#include "ReadyGamesNetwork.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"

static FString getMethodString(HttpMethod method) {
	switch (method) {
	case HttpMethod::GET:
		return TEXT("GET");
	case HttpMethod::POST:
		return TEXT("POST");
	default:
		return TEXT("GET");
	}
}

void Http::Request(std::string url, HttpMethod method, HttpHeaders& headers, std::string body,
	const std::function<void(HttpResponse)>& callback)
{
	TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindLambda(
		[callback](FHttpRequestPtr Unused, FHttpResponsePtr UnrealHttpResponse, bool bSucceeded)
		{
			FString responseFStr = UnrealHttpResponse->GetContentAsString();
			std::string responseStr = std::string(TCHAR_TO_UTF8(*responseFStr));
			int responseCode = UnrealHttpResponse->GetResponseCode();

			HttpResponse response(responseStr, responseCode);

			callback(response);
		});
	Request->SetURL(FString(url.c_str()));
	Request->SetVerb(getMethodString(method));
	Request->SetContentAsString((body.c_str()));
	
	std::vector<std::string> headerKeys = headers.keys();
	for (const auto& headerKey : headerKeys) {
		std::string headerValue = headers.get(headerKey);
		Request->SetHeader(FString(headerKey.c_str()), FString(headerValue.c_str()));
	}

	Request->ProcessRequest();
}

#endif