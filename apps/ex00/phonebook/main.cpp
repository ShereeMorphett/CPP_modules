/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:23:26 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/24 14:41:44 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "Phonebook.hpp"


static void PrintPhonebookStartup()
{
	std::cout << "\033[;1;4;35m\n~~~My Awesome Phonebook!!~~~\033[49m\n" << std::endl;
	std::cout << "\033[1;36m\nHow to use:\033[0m\n" <<  std::endl;
	std::cout << "\033[4;36mADD:\033[0m\n save a new contact" <<  std::endl;
	std::cout << "\033[4;36mSEARCH:\033[0m\n display a specific contact" <<  std::endl;
	std::cout << "\033[4;36mEXIT:\033[0m\n All contacts will be lost when exiting!" <<  std::endl;
	
	return ;
}

int main()
{
	std::string input;
	Phonebook data;
	PrintPhonebookStartup();
	std::cout << "\033[1;36m\nADD/SEARCH/EXIT: \033[0m";
	std::cin >> input;
	std::cin.clear();

	while (input != "EXIT")
	{
		if (input == "ADD")
				data.AddContact();
		else if (input == "SEARCH")
		{
			std::cout << data;
			std::cout << "\033[1;36m\nSELECT INDEX: \033[0m";
			int index;
			std::cin >> index;
			if (index > data.GetSize())
				std::cout << "\033[1;33mInvalid index!\033[0m";
			else
				data.PrintContact(std::cout, index - 1);
		}
		std::cout << "\033[1;36m\nADD/SEARCH/EXIT: \033[0m";
		std::cin >> input;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
    return 0;
}