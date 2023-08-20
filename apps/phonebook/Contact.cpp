#include "ft/ft.hpp"
#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <limits>

std::string		Contact::getInput(std::string prompt)
{
	std::string	input;

	std::cout << "\033[1;36m" << prompt <<  "\033[0m";
	std::cin >> input;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	input = ft::trim_ws(input);
	return input;
}


std::string		Contact::getPhoneNumber()
{
	std::string	input;

	std::cout << "\033[1;36mPhone Number: \033[0m";
	std::cin >> input;

	if (ft::is_valid_phonenumber(input) == false)
	{
		std::cout << "\033[1;33mInvalid phone number: Input must only contain numbers\033[0m" << std::endl;
		input = getPhoneNumber();
	}

	std::cin.clear();
	return input;
}

void	Contact::setAttributes(int size)
{
	firstName = getInput("First Name: ");
	lastName = getInput("Last Name: ");
	nickname = getInput("Nickname: ");
	phoneNumber = getPhoneNumber();
	secret = getInput("Darkest Secret: ");

}
