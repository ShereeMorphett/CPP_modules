#include "ft/ft.hpp"
#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <iomanip>


void			addContacts()
{
	 
	return ;
}


void	Phonebook::printContacts()
{

    std::cout << "\033[1;36m\n---------------------------------------------\033[0m" << '\n';
    std::cout << "\033[1;36m|\033[0m" << std::setw(10) << std::right << "INDEX";
    std::cout << "\033[1;36m|\033[0m" << std::setw(10) << std::right << "FIRST";
    std::cout << "\033[1;36m|\033[0m" << std::setw(10) << std::right << "LAST";
    std::cout << "\033[1;36m|\033[0m" << std::setw(10) << std::right << "NICKNAME";
    std::cout << "\033[1;36m|\033[0m" << '\n';
    std::cout << "\033[1;36m---------------------------------------------\033[0m" << '\n';

    for (int i = 0; i < Phonebook::size - 1; ++i)
	{  
		contacts[i].printAttributes();
    }

    std::cout << "\033[1;36m\n---------------------------------------------\033[0m" << '\n';

	return;
}

Phonebook::Phonebook(void)
{
	// std::cout << "Phonebook Constructor called" << '\n';
	return ;
};

Phonebook::~Phonebook(void)
{
	// std::cout << "Phonebook Destructor called" << '\n';
	return ;
};