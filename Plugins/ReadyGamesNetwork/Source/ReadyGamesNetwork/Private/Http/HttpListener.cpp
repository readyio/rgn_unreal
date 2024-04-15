#include "Http/HttpListener.h"

namespace RGN {
	HttpListener::HttpListener() : pImpl(std::make_unique<HttpListenerImpl>()) {}
	HttpListener::HttpListener(const HttpListener& other) : pImpl(std::make_unique<HttpListenerImpl>(*other.pImpl)) {}
	HttpListener::HttpListener(HttpListener&& other) noexcept : pImpl(std::move(other.pImpl)) {}
	HttpListener::~HttpListener() = default;
	HttpListener& HttpListener::operator=(const HttpListener& other) {
		if (this != &other) {
			pImpl = std::make_unique<HttpListenerImpl>(*other.pImpl);
		}
		return *this;
	}
	HttpListener& HttpListener::operator=(HttpListener&& other) noexcept {
		if (this != &other) {
			pImpl = std::move(other.pImpl);
		}
		return *this;
	}

	bool HttpListener::isListening() {
		return pImpl->isListening();
	}

	int32_t HttpListener::getPort() {
		return pImpl->getPort();
	}

	bool HttpListener::startListen(int32_t port, const std::function<void(std::string)>& callback, int32_t& boundedToPort) {
		return pImpl->startListen(port, callback, boundedToPort);
	}

	bool HttpListener::stopListen() {
		return pImpl->stopListen();
	}

	void HttpListener::poll() {
		return pImpl->poll();
	}
}