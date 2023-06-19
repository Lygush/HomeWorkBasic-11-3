#include <iostream>
#include <Windows.h>
#include "Bye.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "¬ведите им€: ";
	std::string name{};
	std::cin >> name;
	Leaver l;
	std::cout << l.leaver(name);
}