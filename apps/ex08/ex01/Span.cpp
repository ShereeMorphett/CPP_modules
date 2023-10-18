/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:30:54 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/18 13:15:17 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
	Develop a Span class that can store a maximum of N integers. N is an unsigned int variable and will be the only parameter passed to the constructor.
	Of course, you will write your own tests and they will be way more thorough than the ones below.
	Test your Span at least with a minimum of 10 000 numbers. More would be even better.
	
	Last but not least, it would be wonderful to fill your Span using a range of iterators.
	Implement a member function to add many numbers to your Span in one call
*/

/* addNumber() to add a single number to the Span. It will be used in order to fill it. Any attempt to add a new element if there are already N elements stored should throw an exception.*/
void Span::addNumber(int num)
{
	if (nums_.size() < maxNum_)
		nums_.insert(num);
	else
		return ; 
		//THROW EXCEPTION
}
// /* The shortest span (or distance, if you prefer) between all the numbers stored, and return it. If there are no numbers stored, or only one, no span can be found. Thus, throw an exception.*/
int Span::shortestSpan()
{
	int maxDist = 0;
	int currentDist = 0;
	int lastNum = 0;
	std::set<int>::iterator itr;

	for (itr = nums_.begin(); itr != nums_.end(); itr++)
	{
		currentDist = maxDist; ///
		lastNum = *itr;
		std::cout << lastNum << std::endl;
	}


	return maxDist;
}

// /* The longest span (or distance, if you prefer) between all the numbers stored, and return it.	If there are no numbers stored, or only one, no span can be found. Thus, throw an exception.*/
// void Span::longestSpan()
// {}


Span &	Span::operator=( Span const & right )
{
	if( this != &right )
	{
	 	maxNum_ = right.maxNum_;
		//deep copy the set
	}
	return (*this);
}

Span::Span(unsigned int N)
{
	maxNum_ = N;	
}

Span::Span( Span const & src )
{
	*this = src; 
}

Span::~Span()
{}
