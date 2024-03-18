#pragma once

#include <string>

namespace RGN {
	class HttpResponse {
	private:
		std::string _responseBody;
		int _responseCode;

	public:
		HttpResponse(const std::string& responseBody, int responseCode)
			: _responseBody(responseBody), _responseCode(responseCode) {}
		const std::string& getResponseBody() const;
		int getResponseCode() const;
	};
}