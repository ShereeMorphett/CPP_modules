/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:09 by smorphet          #+#    #+#             */
/*   Updated: 2023/11/01 17:12:15 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sys/time.h>
#include <iomanip>

/// Printing & timer functions /////
template<typename T>
void print(T contain, std::string heading) 
{
	std::cout << COLOR_MAGENTA << heading << " " << COLOR_RESET; 
    for (typename T::iterator it = contain.begin(); it != contain.end(); it++)
    {
        std::cout << *it << " ";
    }
	std::cout << std::endl;
}

template<typename T>
void PmergeMe::printPairs(T container)
{
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        std::cout << "Min: " << it->min << "	" << "Max: " << it->max << std::endl;
    }
}

// void PmergeMe::validateSorted()
//{}


///initialization and sorting
void PmergeMe::initValues(std::vector<int>& validatedInput)
{
	inputSize = validatedInput.size();
	for (int index = 0; index < validatedInput.size(); index++)
    {
		Pairs temp;

		if (index + 1 < validatedInput.size())
		{
			temp.max  = validatedInput[index];
			temp.min = validatedInput[index + 1];
			if (temp.max < temp.min && temp.max != EMPTY)
				std::swap(temp.max, temp.min);
			index++;
			listData_.push_back(temp);
			vecData_.push_back(temp);
		}
		else
		{
			temp.max = EMPTY;
			temp.min = validatedInput[index];
			if (temp.max < temp.min && temp.max != EMPTY)
				std::swap(temp.max, temp.min);
			listData_.push_back(temp);
			vecData_.push_back(temp);
			break;
		}
    }

	gettimeofday(&vecBegin, 0);
	listData_.sort();
	gettimeofday(&listBegin, 0);
	std::sort(vecData_.begin(), vecData_.end());
}


template<typename T>
void PmergeMe::binarySearch(int toPlace, T& container)
{
	//binary search this
    for (typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        if (toPlace <= *it)
        {
            container.insert(it, toPlace);
            return;
        }
    }
    container.push_back(toPlace);
}

void PmergeMe::listSorting()
{
	for (typename std::list<Pairs>::iterator it = listData_.begin(); it != listData_.end(); it++)
    {
		if (it->max != EMPTY)
			sortedList_.push_back(it->max);
    }
	
	//Jacobsthal number iteration moves by these NOT the value
	//set value to empty once pushed, calculate the next jacobsthal number as long and it is not bigger than .size() if bigger than size then work backwards
	// 0, 1, 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691.
	// save previous iterator num, up date curent and work back.
	
	for (typename std::list<Pairs>::iterator it = listData_.begin(); it != listData_.end(); it++)
    {
		if (it->max != EMPTY)
			binarySearch(it->min, sortedList_);
    }

	gettimeofday(&listEnd, 0);
    long seconds = listEnd.tv_sec - listBegin.tv_sec;
    long microseconds = listEnd.tv_usec - listBegin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;
	//print(sortedList_, "Sorted List:");
	std::cout << "Time to process a range of " << inputSize << " elements with std::list : " << elapsed << "us\n" << std::endl;
}

void PmergeMe::vectorSorting()
{
	for (typename std::vector<Pairs>::iterator it = vecData_.begin(); it != vecData_.end(); it++)
    {
		if (it->max != EMPTY)
			sortedVec_.push_back(it->max);
    }
	
	//Jacobsthal number iteration moves by these NOT the value/////
	for (typename std::vector<Pairs>::iterator it = vecData_.begin(); it != vecData_.end(); it++)
    {
		if (it->max != EMPTY)
			binarySearch(it->min, sortedVec_);
    }
	
	print(sortedVec_, "After:");
	gettimeofday(&vecEnd, 0);
    long seconds = vecEnd.tv_sec - vecBegin.tv_sec;
    long microseconds = vecEnd.tv_usec - vecBegin.tv_usec;
    float elapsed = seconds + microseconds*1e-6;
	std::cout << "Time to process a range of " << inputSize << " elements with std::vector : " << std::fixed << std::setprecision(5) << elapsed << "us\n" << std::endl;
}

bool Pairs::operator< (const Pairs& right) const
{
	return max < right.max;
}

///basic constructors etc///

PmergeMe &PmergeMe::operator=(PmergeMe const & right)
{
	if(this != &right)
	{
		listData_ = right.listData_;
		vecData_ = right.vecData_;
		sortedList_ = right.sortedList_;
		sortedVec_ = right.sortedVec_;
	}
	return *this;
}

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe( PmergeMe const & src )
{
	*this = src; 
}

PmergeMe::~PmergeMe()
{}