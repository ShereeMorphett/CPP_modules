/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:09 by smorphet          #+#    #+#             */
/*   Updated: 2023/11/10 16:56:46 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>

template<typename T>
void print(T contain, const std::string& heading) 
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
int Jacobsthal(int last)
{
    if (last == 0)
        return 1;  // Special case for the first Jacobsthal number
    if (last == 1)
        return 3;  // Special case for the second Jacobsthal number
    return last + 2 * Jacobsthal(last - 1);
}


void PmergeMe::initValues(std::vector<int>& validatedInput)
{
	inputSize = validatedInput.size();
	gettimeofday(&listBegin, 0);
	gettimeofday(&vecBegin, 0);
	for (size_t index = 0; index < validatedInput.size(); index++)
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

	insertionSortRecursive(listData_);
	std::cout << "list pairs" << std::endl;
	printPairs(listData_);
	recursiveMaxSort(vecData_, static_cast<size_t>(0), vecData_.size() - 1);
}


void PmergeMe::insertionSortRecursive(std::list<Pairs>& arr)
{
    if (arr.size() <= 1)
        return;

    Pairs last = arr.back();
    arr.pop_back();

    insertionSortRecursive(arr);
    auto it = arr.end();
    while (it != arr.begin() && (std::prev(it)->max) > last.max)
	{
        it = std::prev(it);
    }

    arr.insert(it, last);
}




void PmergeMe::recursiveMaxSort(std::vector<Pairs>& data, size_t left, size_t right)
{
    if (left < right)
    {
        size_t mid = left + (right - left) / 2;

        recursiveMaxSort(data, left, mid);
        recursiveMaxSort(data, mid + 1, right);
        std::inplace_merge(data.begin() + left, data.begin() + mid + 1, data.begin() + right + 1, Pairs());
    }
}

void PmergeMe::vecBinarySearch(int toPlace, int toPlaceMax ,std::vector<int>& container)
{
    std::vector<int>::iterator low = container.begin();
    std::vector<int>::iterator high = container.begin();
	
	if (toPlaceMax != EMPTY)
	{
		while (toPlaceMax >= *high)
			high++;
	}
	else
		high = container.end();
	while (low != high)
	{
        std::vector<int>::iterator mid = low + std::distance(low, high) / 2;
        if (toPlace < *mid) 
		{
            high = mid;
        } 
		else 
		{
            low = mid + 1;
        }
    }
    container.insert(low, toPlace);
}

void PmergeMe::listBinarySearch(int toPlace, int toPlaceMax, std::list<int>& container)
{
	std::list<int>::iterator low = container.begin();
	std::list<int>::iterator high = container.begin();
	
	if (toPlaceMax != EMPTY)
	{
		while (toPlaceMax > *high)
			high++;
	}
	else
		high = container.end();
	while (low != high)
	{
		std::list<int>::iterator mid = low;
		std::advance(mid, std::distance(low, high) / 2);
		if (toPlace < *mid)
		{
			high = mid;
		}
		else
		{
			low = mid;
			++low; 
		}
	}
	container.insert(low, toPlace);
}


void PmergeMe::listSorting()
{
	for (std::list<Pairs>::iterator it = listData_.begin(); it != listData_.end(); it++) //needs to happen recursively
    {
		if (it->max != EMPTY)
			sortedList_.push_back(it->max);
    }

	if (BINARY == 0)
	{
		for (std::list<Pairs>::iterator it = listData_.begin(); it != listData_.end(); it++)
		{
			listBinarySearch(it->min, it->max, sortedList_);
		}
	}
	else
	{
		size_t jacobshtal = 0;
		size_t prevJacobshtal = 0;
		size_t index = 0;
			
		listBinarySearch(listData_.begin()->min, listData_.begin()->max,  sortedList_);
		while (sortedList_.size() < inputSize)
		{
			prevJacobshtal = jacobshtal;
			jacobshtal = Jacobsthal(prevJacobshtal);
			
			if (jacobshtal > listData_.size())
				jacobshtal = listData_.size() - 1;
				
			index = jacobshtal;
			int element;
			while (index > prevJacobshtal)
			{
				std::list<Pairs>::iterator it = listData_.begin();
				std::advance(it, index);		
				element = it->min;
				listBinarySearch(element, it->max, sortedList_);
				index--;
			}
		}
	}
	gettimeofday(&listEnd, 0);
    long seconds = listEnd.tv_sec - listBegin.tv_sec;
    long microseconds = listEnd.tv_usec - listBegin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;
	print(sortedList_, "After:");
	std::cout << "Time to process a range of " << inputSize << " elements with std::list : " << elapsed << "us\n" << std::endl;
}

void PmergeMe::vectorSorting()
{
	for (std::vector<Pairs>::iterator it = vecData_.begin(); it != vecData_.end(); it++)
    {
		if (it->max != EMPTY)
			sortedVec_.push_back(it->max);
    }
	if (BINARY == 0)
	{
		for (std::vector<Pairs>::iterator it = vecData_.begin(); it != vecData_.end(); it++)
		{
			vecBinarySearch(it->min, it->max, sortedVec_);
		}
	}
	else
	{
		size_t jacobshtal = 0;
		size_t prevJacobshtal = 0;
		size_t index = 0;
			
		vecBinarySearch(vecData_[index].min, vecData_[index].max, sortedVec_);
		while (sortedVec_.size() < inputSize)
		{
			prevJacobshtal = jacobshtal;
			jacobshtal = Jacobsthal(prevJacobshtal);
			
			if (jacobshtal > vecData_.size())
				jacobshtal = vecData_.size() - 1;
				
			index = jacobshtal;
			while (index > prevJacobshtal)
			{
				vecBinarySearch(vecData_[index].min, vecData_[index].max, sortedVec_);
				index--;
			}
		}
	}
	print(sortedVec_, "\n\nAfter:");
	gettimeofday(&vecEnd, 0);
    long seconds = vecEnd.tv_sec - vecBegin.tv_sec;
    long microseconds = vecEnd.tv_usec - vecBegin.tv_usec;
    float elapsed = seconds + microseconds*1e-6;
	std::cout << "Time to process a range of " << inputSize << " elements with std::vector : " << std::fixed << std::setprecision(5) << elapsed << "us\n" << std::endl;
}
bool Pairs::operator()(const Pairs& left, const Pairs& right) const
{
	return left.max < right.max;
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