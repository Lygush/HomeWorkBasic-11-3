#pragma once
#include <string>

#ifndef BYELIB
#define BYELIB_API __declspec(dllexport)
#else 
#define BYELIB_API __declspec(dllimport)
#endif // !BYELIB


class Leaver {
public :
	BYELIB_API std::string leaver(std::string);
};