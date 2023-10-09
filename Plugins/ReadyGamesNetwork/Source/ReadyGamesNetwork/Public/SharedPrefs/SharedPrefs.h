#pragma once

#include <string>

class SharedPrefs {
public:
	static bool Load(std::string name, std::string& target);
	static void Save(std::string name, std::string content);
};