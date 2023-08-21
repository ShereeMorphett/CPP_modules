#include "ft/ft.hpp"
#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <limits>

std::string		Contact::GetInput(std::string prompt)
{
	std::string	input;

	std::cout << "\033[1;36m" << prompt <<  "\033[0m";
	std::cin >> input;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	input = ft::TrimWs(input);
	return input;
}


std::string		Contact::GetPhoneNumber()
{
	std::string	input;

	std::cout << "\033[1;36mPhone Number: \033[0m";
	std::cin >> input;

	if (ft::isValidPhonenumber(input) == false)
	{
		std::cout << "\033[1;33mInvalid phone number: Input must only contain numbers\033[0m" << std::endl;
		input = GetPhoneNumber();
	}

	std::cin.clear();
	return input;
}

void	Contact::SetAttributes(int size)
{
	FirstName = GetInput("First Name: ");
	LastName = GetInput("Last Name: ");
	Nickname = GetInput("Nickname: ");
	PhoneNumber = GetPhoneNumber();
	Secret = GetInput("Darkest Secret: ");

}
