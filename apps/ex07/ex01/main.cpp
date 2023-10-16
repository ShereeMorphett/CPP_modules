/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:15:58 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/16 18:27:05 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <string>
#include <iostream>

// Function template for printing element

template<typename T>
void printElement(T element)
{
	std::cout << element << " ";
};

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};


    // Use the iter function with different arrays and the printElement function
    std::cout << "intArray: ";
	::iter<int>(intArray, 5, printElement);
    std::cout << std::endl;

    std::cout << "doubleArray: ";
    ::iter<double>(doubleArray, 5, printElement);
    std::cout << std::endl;

    std::cout << "charArray: ";
    ::iter<char>(charArray, 5, printElement);
    std::cout << std::endl;

    return 0;
}