#include "ft/ft.hpp"
#include <iostream>
#include "Contact.hpp"
#include <iomanip>



std::string		Contact::getInput(std::string prompt)
{
	std::string	input;

	std::cout << "\033[1;36m" << prompt <<  "\033[0m";
	std::cin >> input;
	std::cin.clear();
	std::cin.ignore(INT_MAX,'\n'); 
	return input;
}

std::string		Contact::getPhoneNumber()
{
	std::string	input;

	std::cout << "\033[1;36mPhone Number: \033[0m";
	std::cin >> input;
	std::cin.clear();
	std::cin.ignore(INT_MAX,'\n'); 

	if (ft::is_valid_phonenumber(input) == false)
	{
		std::cout << "\033[1;33mInvalid phone number: Input must only contain numbers\033[0m" << std::endl;
		input = getPhoneNumber();
	}
	return input;
}

void	Contact::setAttributes()
{
	first_name = getInput("First Name: ");
	last_name = getInput("Last Name: ");
	nickname = getInput("Nickname: ");
	phone_number = getPhoneNumber();
	secret = getInput("Darkest Secret: ");
	return ;
}

void		Contact::printAttributes()
{
	std::string attribute;


	if (first_name.size() > 9)
	{
		std::cout << "\033[1;36m|\033[0m" << std::setw(10) << std::right << first_name;
	}
	else
	{
		std::cout << "\033[1;36m|\033[0m" << std::setw(10) << std::right << first_name;
	}

	return;
}


Contact::Contact(void)
{
	// std::cout << "Contact Constructor called" << '\n';
	return ;
};

Contact::~Contact(void)
{
	// std::cout << "Contact Destructor called" << '\n';
	return ;
};