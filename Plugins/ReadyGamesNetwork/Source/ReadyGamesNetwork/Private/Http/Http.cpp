#include "Http/Http.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include <map>

namespace RGN {
	std::map<int32_t, HttpListener*> listeners;

	FString getMethodString(HttpMethod method) {
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
		const std::function<void(HttpResponse)>& callback) {
		TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
		Request->OnProcessRequestComplete().BindLambda(
			[callback](FHttpRequestPtr Unused, FHttpResponsePtr UnrealHttpResponse, bool bSucceeded) {
				IHttpRequest* req = Unused.Get();
				EHttpRequestStatus::Type status = req->GetStatus();
				if (status == EHttpRequestStatus::Type::Succeeded) {
					int responseCode = UnrealHttpResponse->GetResponseCode();
					FString responseFStr = UnrealHttpResponse->GetContentAsString();
					std::string responseStr = std::string(TCHAR_TO_UTF8(*responseFStr));
					callback(HttpResponse(responseStr, responseCode));
				} else {
					int responseCode = static_cast<int>(status);
					std::string responseStr;
					switch (status) {
						case EHttpRequestStatus::Type::Failed_ConnectionError:
							responseStr = "Failed connection error.";
							break;
						default:
							responseStr = "Failed.";
							break;
					}
					callback(HttpResponse(responseStr, responseCode));
				}
			}
		);
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

	bool Http::WaitForInRequest(int32_t port, const std::function<void(std::string)>& callback, int32_t& boundedToPort) {
		auto it = listeners.find(port);
		if (it != listeners.end()) {
			return false;
		}
		HttpListener* listener = new HttpListener();
		int32_t listenerPort;
		bool listenerStartedSuccessfully = listener->startListen(port, callback, listenerPort);
		boundedToPort = listenerPort;
		if (!listenerStartedSuccessfully) {
			delete listener;
			return false;
		}
		listeners[boundedToPort] = listener;
		return true;
	}

	void Http::CancelWaitForInRequest(int32_t boundedToPort) {
		auto it = listeners.find(boundedToPort);
		if (it == listeners.end()) {
			return;
		}
		HttpListener* listener = it->second;
		listener->stopListen();
	}

	void Http::Update() {
		for (auto it = listeners.begin(); it != listeners.end();) {
			HttpListener* listener = it->second;
			if (!listener || !listener->isListening()) {
				it = listeners.erase(it);
				if (listener) {
					delete listener;
				}
				continue;
			}
			listener->poll();
			++it;
		}
	}
}