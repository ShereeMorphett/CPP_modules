/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:06 by smorphet          #+#    #+#             */
/*   Updated: 2023/11/02 15:11:29 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


static void startProgram(std::vector<int>&  validatedInput)
{
	PmergeMe values;
	values.initValues(validatedInput);
	values.vectorSorting();	
	values.listSorting();
	
}
int main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
		{
			throw std::runtime_error("Useage: ./ex02 <a collection of positive ints>");
		}
		std::vector<int> validatedInput;
        for (int i = 1; i < argc; ++i)
        {
			if (isdigit(*argv[i]))
			{
				int value = std::atoi(argv[i]);
				if (value < 0)
					throw std::runtime_error("Useage: ./ex02 <a collection of positive ints>");
				else
					validatedInput.push_back(value);
			}
			else 
				throw std::runtime_error("Useage: ./ex02 <a collection of positive ints>");
		}
		print(validatedInput, "Before: ");
		startProgram(validatedInput);
	}
	catch(const std::exception& e)
	{
		std::cout << COLOR_RED << e.what() << COLOR_RED << std::endl;
	}
	return 0;
}