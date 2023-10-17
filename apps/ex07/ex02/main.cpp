/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:15:58 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/17 11:48:10 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Color.hpp"
#include <iostream>
#include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }

int main()
{
    try
	{
    	std::cout << COLOR_GREEN << "Test construction with no parameter- empty array" << COLOR_RESET << std::endl;
        Array<int> emptyArray;
        std::cout << "Empty Array Size: " << emptyArray.size() << std::endl;

		std::cout << COLOR_GREEN << "Test construction with a parameter - array of n elements" << COLOR_RESET << std::endl;
        unsigned int n = 5;
        Array<int> array(n);
        std::cout << "Array of Size " << n << ": ";
        for (unsigned int i = 0; i < n; i++)
		{
            array[i] = i; 
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;

		std::cout << COLOR_GREEN << "Test copy constructor and assignment operator" << COLOR_RESET << std::endl;

        Array<int> copiedArray = array;
        Array<int> assignedArray;
        assignedArray = array;

        std::cout << "Copied Array: ";
        for (unsigned int i = 0; i < n; i++)
		{
            std::cout << copiedArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Assigned Array: ";
        for (unsigned int i = 0; i < n; i++)
		{
            std::cout << assignedArray[i] << " ";
        }
        std::cout << std::endl;
		
		std::cout << "Out of bounds!: ";
		std::cout << assignedArray[15] << " ";
        
    }
	catch (std::exception &e)
	{
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
