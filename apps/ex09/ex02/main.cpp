/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:06 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/31 16:24:32 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "Color.hpp"


/*
Here are some additional guidelines on the information you should display line by line on the standard output:
• On the first line you must display an explicit text followed by the unsorted positive integer sequence.
• On the second line you must display an explicit text followed by the sorted positive integer sequence.

• On the third line you must display an explicit text indicating the time used by your algorithm by specifying 
	the first container used to sort the positive integer sequence.

• On the last line you must display an explicit text indicating the time used by your algorithm by specifying 
	the second container used to sort the positive integer sequence.
*/

template<typename T>
void print(T contain) 
{
	for (std::iterator<T> it = contain.begin(); it != contain.begin(); it++)
	{
		// std::cout << it.min << "	" << it.max << std::endl;
		std::cout << it << std::endl;
	}
}

int main(int argc, char **argv)
{
	try
	{
		if (argc == 1)
		{
			throw std::runtime_error("Useage: ./ex02 <a collection of positive ints>");
		}
			
		std::vector<int> validatedInput;
        for (int i = 1; i < argc; ++i)
        {
            int value = std::atoi(argv[i]);
            if (value < 0)
                throw std::runtime_error("Useage: ./ex02 <a collection of positive ints>");
            else
                validatedInput.push_back(value);
		}
		
	//input validation into a placeholder vector
	}
	catch(const std::exception& e)
	{
		std::cout << COLOR_RED << e.what() << COLOR_RED << std::endl;
	}
	
	
	//validate the input (check ints etc)
}