#include "RGNResponse.h"

RGNResponse::RGNResponse(int code, std::string rawBody) {
	this->code = code;
	this->rawBody = rawBody;
}

int RGNResponse::getCode() {
	return this->code;
}

const std::string& RGNResponse::getRawBody() {
	return this->rawBody;
}