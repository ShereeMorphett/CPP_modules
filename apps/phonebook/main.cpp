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


	data.size = 1;
	print_phonebook_startup();
	
	std::getline(std::cin, input);
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			std::cout << input << "\n";
			data.contacts[data.size - 1].getFirstName();
		}
		else if (input == "SEARCH")
		{
			data.printContacts();
		}
		std::getline(std::cin, input);
	}
    return 0;
}