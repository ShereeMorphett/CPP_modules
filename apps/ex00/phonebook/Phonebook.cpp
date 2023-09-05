/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:23:34 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/24 14:33:34 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>


const	Contact* Phonebook::GetContacts() const
{
    return contacts;
}
	
int     Phonebook::GetSize() const
{
    return size;
}

void			Phonebook::AddContact()
{
		if (size >= 8)
	{
		std::string	input;
		std::cout << "\033[1;33m Warning: You are about to overwrite contacts at index: " << size % 8 + 1 << "	confirm(Y/N):	\033[0m";
		std::cin >> input;
		if (input == "Y")
		{
			std::cin.clear();
			contacts[size % 8].setAttributes();
			size += 1;
		}
		std::cin.clear();
	}
	else
	{
		contacts[size].setAttributes();
		size += 1;
	}
}
static void print_right_alligned(std::ostream& os, const std::string &str , size_t len)
{

    if (str.length() > len)
        print_right_alligned(os, str.substr(0, len-1) + ".", len);
        else
            os << std::setw(10) << std::right << str;
}

void    Phonebook::PrintContact(std::ostream& os, int index)
{
    os << "\033[4;36mFirst Name:\033[0m\n" << contacts[index].getFirstName() << std::endl;
    os << "\033[4;36mLast Name:\033[0m\n" << contacts[index].getLastName() << std::endl;
    os << "\033[4;36mNickname:\033[0m\n" << contacts[index].getNickname() << std::endl;
    os << "\033[4;36mPhone number:\033[0m\n" << contacts[index].getPhoneNumber() << std::endl;
    os << "\033[4;36mDarkest Secret:\033[0m\n"<< contacts[index].getSecret() << std::endl;
}

static void PrintContactSummary(std::ostream& os, const Contact& contact, int index)
{
    std::string attribute;
	
    os << "\033[1;36m|\033[0m" << std::setw(10) << std::right << index + 1;
    os << "\033[1;36m|\033[0m";
    print_right_alligned(os, contact.getFirstName(), 10);
    os << "\033[1;36m|\033[0m";
    print_right_alligned(os, contact.getLastName(), 10);
    os << "\033[1;36m|\033[0m";
    print_right_alligned(os, contact.getNickname(), 10);
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

	int i = 0;
	int size = phonebook.GetSize();
	if (size > 8)
		size = 8;
	while (i < size)
	{
        PrintContactSummary(os, phonebook.GetContacts()[i], i);
		i++;
	}
    os << "\033[1;36m\n---------------------------------------------\033[0m" << '\n';
    return os;
}

Phonebook::Phonebook()
{
    size = 0;
	return ;
};