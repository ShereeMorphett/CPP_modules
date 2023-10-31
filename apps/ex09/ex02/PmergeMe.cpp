/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:09 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/31 16:20:15 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// template<typename T>
// void PmergeMe::print(T contain) // basic printing function?
// {
// 	for (std::iterator<T> it = contain.begin(); its != contain.begin(); it++)
// 	{
// 		std::cout << it.min << "	" << it.max << std::endl;
// 	}
// }

PmergeMe &PmergeMe::operator=(PmergeMe const & right)
{
	if(this != &right)
	{
		listData_ = right.listData_;
		vecData_ = right.vecData_;
	}
	return *this;
}

PmergeMe::PmergeMe()
{}

PmergeMe::PmergeMe( PmergeMe const & src )
{
	*this = src; 
}

PmergeMe::~PmergeMe()
{}