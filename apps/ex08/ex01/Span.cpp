/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:30:54 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/21 10:53:32 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>

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

int Span::shortestSpan()
{
    if (nums_.size() <= 1)
        throw spanException();

    int shortest = std::numeric_limits<int>::max();
    std::set<int>::iterator prev = nums_.begin();
    std::set<int>::iterator current;

    for (current = std::next(prev); current != nums_.end(); ++current)
	{
        int span = *current - *prev;
        if (span < shortest)
            shortest = span;
        prev = current;
    }

    return shortest;
}

int Span::longestSpan()
{
    if (nums_.size() <= 1)
        throw spanException();

    int longest = 0;
    std::set<int>::iterator prev = nums_.begin();
    std::set<int>::iterator current;

    for (current = std::next(prev); current != nums_.end(); ++current)
	{
        int span = *current - *prev;
        if (span > longest)
            longest = span;
        prev = current;
    }

    return longest;
}


const char* Span::spanException::what() const throw()
{
    return "No span can be found with less than 2 numbers.";
} 


Span &	Span::operator=( Span const & right )
{
	if( this != &right )
	{
	 	maxNum_ = right.maxNum_;
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
