/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:15:58 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/17 09:17:52 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include "Color.hpp"
#include <string>
#include <iostream>

// Function template for printing element

template<typename T>
void printElement(T element)
{
	std::cout << element << " ";
};

template<typename T>
void increaseElement(T element)
{
	element++;
};

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	std::string strArray[] = {"This", "is", "printing", "the", "things"};

	std::cout << COLOR_GREEN << "\nTesting string array" << COLOR_RESET << std::endl;
	std::cout << "strArray: ";
    ::iter(strArray, 5, printElement);
    std::cout << std::endl;

	std::cout << COLOR_GREEN << "\nTesting int array" << COLOR_RESET << std::endl;
    std::cout << "intArray: ";
	::iter(intArray, 5, printElement);
    std::cout << std::endl;
	::iter(intArray, 5, increaseElement);
    std::cout << std::endl;
	std::cout << "intArray after increaseElement: ";
	::iter(intArray, 5, printElement);
    std::cout << std::endl;

	std::cout << COLOR_GREEN << "\nTesting double array" << COLOR_RESET << std::endl;
    std::cout << "doubleArray: ";
    ::iter(doubleArray, 5, printElement);
    std::cout << std::endl;
	::iter(doubleArray, 5, increaseElement);
    std::cout << std::endl;
	std::cout << "doubleArray after increaseElement: ";
	::iter(doubleArray, 5, printElement);
    std::cout << std::endl;

	std::cout << COLOR_GREEN << "\nTesting char array" << COLOR_RESET << std::endl;
    std::cout << "charArray: ";
    ::iter(charArray, 5, printElement);
    std::cout << std::endl;
	::iter(charArray, 5, increaseElement);
    std::cout << std::endl;
	std::cout << "charArray after increaseElement: ";
    ::iter(charArray, 5, printElement);
    std::cout << std::endl;
	
    return 0;
}