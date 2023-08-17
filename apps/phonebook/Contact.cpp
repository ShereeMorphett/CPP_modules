#include "ft/ft.hpp"
#include <iostream>
#include "Contact.hpp"
#include <iomanip>


void		Contact::printAttributes()
{
	std::string placeholder = "thing";

		if (placeholder.size() > 9)
	{
		std::cout << "\033[1;36m|\033[0m" << std::setw(10) << std::right << placeholder;
	}
	else
	{
		std::cout << "\033[1;36m|\033[0m" << std::setw(10) << std::right << placeholder;
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