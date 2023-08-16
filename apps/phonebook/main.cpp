#include "ft/ft.hpp"
#include <iostream>


void print_phonebook_startup()
{
	std::cout << R"(
______ _                      _                 _    
| ___ \ |                    | |               | |   
| |_/ / |__   ___  _ __   ___| |__   ___   ___ | | __
|  __/| '_ \ / _ \| '_ \ / _ \ '_ \ / _ \ / _ \| |/ /
| |   | | | | (_) | | | |  __/ |_) | (_) | (_) |   < 
\_|   |_| |_|\___/|_| |_|\___|_.__/ \___/ \___/|_|\_\
                                                    )" << '\n';

std::cout << "\033[1;36m\nHow to use:\033[0m\n" << '\n';
std::cout << "\033[4;36mADD:\033[0m\n save a new contact" << '\n';
std::cout << "\033[4;36mSEARCH:\033[0m\n display a specific contact" << '\n';
std::cout << "\033[4;36mEXIT:\033[0m\n All contacts will be lost when exiting!" << '\n';

}


int main()
{
	std::string str;

	print_phonebook_startup();
	std::getline(std::cin, str);
	while (str != "EXIT")
	{
		std::cout << "\033[1;31mbold red text\033[0m\n";
		if (str == "ADD")
			std::cout << str << "\n";
		else if (str == "SEARCH")
			std::cout << str << "\n";
		std::getline(std::cin, str);
	}
    return 0;
}