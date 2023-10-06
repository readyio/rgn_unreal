#include "RGNRequestBody.h"

RGNRequestBody::RGNRequestBody(const std::string& appId) {
	RGNRequestBody(appId, 2);
}

RGNRequestBody::RGNRequestBody(const std::string& appId, int version) {
	this->appId = appId;
	this->version = version;
}

RGNRequestBody::~RGNRequestBody() {

}