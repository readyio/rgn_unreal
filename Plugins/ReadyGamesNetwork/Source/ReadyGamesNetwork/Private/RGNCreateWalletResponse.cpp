#include "RGNCreateWalletResponse.h"

RGNCreateWalletResponse::RGNCreateWalletResponse(int code, std::string rawBody,
	std::string address, bool walletCreated, bool success, std::string error) : RGNResponse(code, rawBody) {
	this->address = address;
	this->walletCreated = walletCreated;
	this->success = success;
	this->error = error;
}

const std::string& RGNCreateWalletResponse::getAddress() {
	return this->address;
}

bool RGNCreateWalletResponse::getWalletCreated() {
	return this->walletCreated;
}

bool RGNCreateWalletResponse::getSuccess() {
	return this->success;
}

const std::string& RGNCreateWalletResponse::getError() {
	return this->error;
}