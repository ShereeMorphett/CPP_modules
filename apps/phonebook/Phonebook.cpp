#include "ft/ft.hpp"
#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <iomanip>


const	Contact* Phonebook::getContacts() const
{
    return contacts;
}
	
int     Phonebook::getSize() const
{
    return size;
}

void			Phonebook::addContact()
{
	contacts[size].setAttributes(size);
    size += 1;
}
static void print_right_alligned(std::ostream& os, const std::string &str ,int len)
{

    if (str.length() > len)
        print_right_alligned(os, str.substr(0, len-1) + ".", len);
        else
            os << std::setw(10) << std::right << str;
}

void    Phonebook::printContact(std::ostream& os, int index)
{
    os << "\033[4;36mFirst Name:\033[0m\n" << contacts[index].firstName << std::endl;
    os << "\033[4;36mLast Name:\033[0m\n" << contacts[index].lastName << std::endl;
    os << "\033[4;36mNickname:\033[0m\n" << contacts[index].nickname << std::endl;
    os << "\033[4;36mPhone number:\033[0m\n" << contacts[index].phoneNumber << std::endl;
    os << "\033[4;36mDarkest Secret:\033[0m\n"<< contacts[index].secret << std::endl;
}



static void printContactSummary(std::ostream& os, const Contact& contact, int index)
{
    std::string attribute;

    os << "\033[1;36m|\033[0m" << std::setw(10) << std::right << index + 1;
    os << "\033[1;36m|\033[0m";
    print_right_alligned(os, contact.firstName, 10);
    os << "\033[1;36m|\033[0m";
    print_right_alligned(os, contact.lastName, 10);
    os << "\033[1;36m|\033[0m";
    print_right_alligned(os, contact.nickname, 10);
    os << "\033[1;36m|\033[0m" << "\n";
    return;
}

std::ostream& operator <<(std::ostream& os, const Phonebook& phonebook)
{
    os  << "\033[1;36m\n---------------------------------------------\033[0m" << '\n';
    os  << "\033[1;36m|\033[0m" << std::setw(10) << std::right << "INDEX";
    os  << "\033[1;36m|\033[0m" << std::setw(10) << std::right << "FIRST";
    os  << "\033[1;36m|\033[0m" << std::setw(10) << std::right << "LAST";
    os  << "\033[1;36m|\033[0m" << std::setw(10) << std::right << "NICKNAME";
    os  << "\033[1;36m|\033[0m" << '\n';
    os  << "\033[1;36m---------------------------------------------\033[0m" << '\n';

    for (int i = 0; i < phonebook.getSize(); ++i)
    {  
        printContactSummary(os, phonebook.getContacts()[i], i);
    }

    os << "\033[1;36m\n---------------------------------------------\033[0m" << '\n';
    return os;
}

Phonebook::Phonebook()
{
	// std::cout << "Phonebook Constructor called" << '\n';
    size = 0;
	return ;
};