#include "../../include/ft/ft.hpp"
#include <iostream>

int main()
{
	std::string str;

	std::getline(std::cin, str);

	while (str != "EXIT")
	{
		if (str == "ADD")
			std::cout << str << "\n";
		else if (str == "SEARCH")
			std::cout << str << "\n";
		std::getline(std::cin, str);
	}
    return 0;
}