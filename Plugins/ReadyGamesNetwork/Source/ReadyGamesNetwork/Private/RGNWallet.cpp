#include "RGNWallet.h"

RGNWallet::RGNWallet(std::string address) {
	this->address = address;
}

const std::string& RGNWallet::getAddress() {
	return this->address;
}