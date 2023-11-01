/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:06 by smorphet          #+#    #+#             */
/*   Updated: 2023/11/01 17:05:46 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


/*
Here are some additional guidelines on the information you should display line by line on the standard output:
• On the first line you must display an explicit text followed by the unsorted positive integer sequence.
• On the second line you must display an explicit text followed by the sorted positive integer sequence.

• On the third line you must display an explicit text indicating the time used by your algorithm by specifying 
	the first container used to sort the positive integer sequence.

• On the last line you must display an explicit text indicating the time used by your algorithm by specifying 
	the second container used to sort the positive integer sequence.

		The Ford-Johnson merge-insertion sort is a three-step algorithm, let 𝑛
	be the number of elements to sort:

	Split the collection in 𝑛/2
	pairs of 2
	elements and order these elements pairwise. If the number of elements is odd, the last element of the collection isn't paired with any element.

	Recursively sort the pairs of elements by their highest value. If the number of elements is odd, the last element is not considered a highest value and is left at the end of the collection. 
	Consider that the highest values form a sorted list that we will call the main chain while the rest of the elements will be known as pend elements. Tag the elements of the main chain with the names 𝑎1,𝑎2,𝑎3,...,𝑎𝑛/2
	then tag the pend elements with the names 𝑏1,𝑏2,𝑏3,...,𝑏𝑛/2
	. For every 𝑘
	, we have the relation 𝑏𝑘≤𝑎𝑘
	.

	Insert the pend elements into the main chain. We know that the first pend element 𝑏1
	is lesser than 𝑎1
	; we consider it to be part of the main chain which then becomes {𝑏1,𝑎1,𝑎2,𝑎3,...,𝑎𝑛/2}
	. Now, we need to insert the other pend elements into the main chain in a way that ensures that the size of the insertion area is a power of 2
	minus 1
	as often as possible. Basically, we will insert 𝑏3
	in {𝑏1,𝑎1,𝑎2}
	(we know that it is less than 𝑎3
	), then we will insert 𝑏2
	into {𝑏1,𝑎1,𝑏3}
	no matter where 𝑏3
	was inserted. Note that during these insertions, the size of the insertion area is always at most 3.

	The value of the next pend element 𝑏𝑘
	to insert into the main chain while minimizing the number of comparisons actually corresponds to the next Jacobsthal number. We inserted the element 3
	first, so the next will be 5
	then 11
	then 21
	, etc...

	To sum up, the insertion order of the first pend elements into the main chain is as follows: 𝑏1,𝑏3,𝑏2,𝑏5,𝑏4,𝑏11,𝑏10,𝑏9,𝑏8,𝑏7,𝑏6,...
	.
*/



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