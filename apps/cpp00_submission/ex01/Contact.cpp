/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:23:08 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/24 14:41:26 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include <iomanip>


std::string	TrimWs(std::string input)
{
	int start = 0;
    int end = input.length();

    while (start < end && std::isspace(input[start]))
        ++start;
    while (end > start && std::isspace(input[end - 1]))
        --end;

    return input.substr(start, end - start);
}

bool isValidPhonenumber(std::string str)
{
	std::string::iterator it;

	for (it = str.begin(); it != str.end(); it++) 
	{
		if(!std::isdigit(*it))
			return false;
	}
	return true;
}


std::string Contact::getInput(std::string prompt) const
{

    std::string input;
	bool valid = false;
	
	std::cout << "\033[1;36m" << prompt << "\033[0m" << std::flush;

	while (!valid)
	{
		std::getline(std::cin, input);
		if (std::cin.eof() == 1)
		{
			std::cout << "\033[1;33m\nGood-Bye! \033[0m" << std::endl;
			exit (0);
		}
		if (!input.empty())
			valid = true;
		std::cin.sync();
	}

	TrimWs(input);
	return (input);
}

std::string		Contact::setPhoneNumber()
{
	std::string	input;

	bool valid = false;
	std::cout << "\033[1;36mPhonenumber: " << "\033[0m" << std::flush;
	while (!valid)
	{
		std::getline(std::cin, input);
		if (std::cin.eof() == 1)
		{
			std::cout << "\033[1;33m" << "\nGood-Bye!" << "\033[0m" << std::endl;
			exit (0);
		}
		if (!input.empty())
			valid = true;
		std::cin.sync();
	}
	if (isValidPhonenumber(input) == false)
	{
		std::cout << "\033[1;33mInvalid phone number: Input must only contain numbers\033[0m" << std::endl;
		input = setPhoneNumber();
	}
	TrimWs(input);
	return input;
}

void	Contact::setAttributes()
{
	firstName = getInput("First Name: ");
	lastName = getInput("Last Name: ");
	nickname = getInput("Nickname: ");
	phoneNumber = setPhoneNumber();
	secret = getInput("Darkest Secret: ");
}

std::string		Contact::getFirstName()  const
{
	return firstName;
}

std::string		Contact::getLastName()  const
{
	return	lastName;
}

std::string		Contact::getNickname()  const
{
	return nickname;	
}

std::string		Contact::getPhoneNumber()  const
{
	return phoneNumber;
}

std::string		Contact::getSecret()  const
{
	return secret;
}