/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:30:54 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/25 15:46:46 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <limits>
#include <vector>

/* addNumber() to add a single number/many numbers to the Span. It will be used in order to fill it. Any attempt to add a new element if there are already N elements stored should throw an exception.*/

void Span::addNumber(int num)
{
	if (nums_.size() < maxNum_)
		nums_.insert(num);
	else
		throw maxNumException();
}

void Span::addNumber(std::vector<int> num)
{
	for (int index = 0; index < num.size(); index++)
	{
		if (nums_.size() < maxNum_)
			nums_.insert(num[index]);
		else
			throw maxNumException();
	}
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
        shortest = std::min(shortest, span);
        prev = current;
    }
    return shortest;
}

int Span::longestSpan()
{
    if (nums_.size() <= 1)
        throw spanException();
    int min = *nums_.begin();
    int max = *nums_.rbegin();
    
    return max - min;
}

void Span::printNum()
{
    std::set<int>::iterator prev;

    for (prev = nums_.begin(); prev != nums_.end() ; prev++)
    {
        std::cout << *prev << " " << std::endl;
    }
}

const char* Span::spanException::what() const throw()
{
    return "No span can be found with less than 2 numbers.";
}

const char* Span::maxNumException::what() const throw()
{
    return "Set has reached the max number";
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
