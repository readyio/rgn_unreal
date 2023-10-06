#pragma once

#include <string>

class RGNWallet {
private:
	std::string address;
public:
	RGNWallet(std::string address);
	const std::string& getAddress();
};