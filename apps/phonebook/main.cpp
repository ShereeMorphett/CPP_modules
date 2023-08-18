#include "ft/ft.hpp"
#include <iostream>
#include "Phonebook.hpp"


void print_phonebook_startup(void)
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
return ;
}


int main()
{
	std::string input;
	Phonebook data;
	data.size = 0;
	print_phonebook_startup();
	std::cout << "\033[1;36m\nADD/SEARCH/EXIT: \033[0m";
	std::cin >> input;
	std::cin.clear();
	std::cin.ignore(INT_MAX,'\n'); 
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			if (data.size >= 8)
			{
				std::cout << "\033[1;33m Warning: You are about to overwrite contacts at index: " << "insert index being over written here" << "confirm: Y/N\033[0m";
				std::cin >> input;
				if (input == "Y")
					data.addContacts();
				std::cin.clear();
				std::cin.ignore(INT_MAX,'\n');
			}
			else
			{
				data.size += 1;
				data.addContacts();
			}
		}
		else if (input == "SEARCH")
		{
			data.printContacts();
		}
		std::cout << "\033[1;36m\nADD/SEARCH/EXIT: \033[0m";
		std::cin >> input;
		std::cin.clear();
		std::cin.ignore(INT_MAX,'\n'); 
	}
    return 0;
}