/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:09 by smorphet          #+#    #+#             */
/*   Updated: 2023/11/02 20:47:52 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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

int Jacobsthal(int n)
{
    if (n == 0)
        return 3;
    if (n == 1)
        return 3;
    return Jacobsthal(n - 1) + 2 * Jacobsthal(n - 2);
}

int getNextJacobsthal(int last)
{
    return Jacobsthal(last + 1);
}

template<typename T>
void PmergeMe::printPairs(T container)
{
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        std::cout << "Min: " << it->min << "	" << "Max: " << it->max << std::endl;
    }
}

void PmergeMe::initValues(std::vector<int>& validatedInput)
{
	gettimeofday(&vecBegin, 0);
	listData_.sort();
	gettimeofday(&listBegin, 0);
	std::sort(vecData_.begin(), vecData_.end());
	inputSize = validatedInput.size();
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
}


void PmergeMe::vecBinarySearch(int toPlace, std::vector<int>& container)
{
    std::vector<int>::iterator low = container.begin();
    std::vector<int>::iterator high = container.end();
	
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

void PmergeMe::listBinarySearch(int toPlace, std::list<int>& container)
{
	std::list<int>::iterator low = container.begin();
	std::list<int>::iterator high = container.end();

	while (low != high)
	{
		std::list<int>::iterator mid = low;
		std::advance(mid, std::distance(low, high) / 2);
		if (toPlace < *mid)
		{
			high = mid;
		} else
		{
			low = mid;
			++low; 
		}
	}
	container.insert(low, toPlace);
}


void PmergeMe::listSorting()
{
	for (std::list<Pairs>::iterator it = listData_.begin(); it != listData_.end(); it++)
    {
		if (it->max != EMPTY)
			sortedList_.push_back(it->max);
    }
	
	for (std::list<Pairs>::iterator it = listData_.begin(); it != listData_.end(); it++)
    {
		listBinarySearch(it->min, sortedList_);
    }

	gettimeofday(&listEnd, 0);
    long seconds = listEnd.tv_sec - listBegin.tv_sec;
    long microseconds = listEnd.tv_usec - listBegin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;
	// print(sortedList_, "Sorted List:");
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
			vecBinarySearch(it->min, sortedVec_);
		}
	}
	else
	{
		size_t jacobshtal = -1;
		size_t prevJacobshtal = -1;
		size_t index = 0;
		while (index < vecData_.size())
		{
			prevJacobshtal = jacobshtal;
			jacobshtal = getNextJacobsthal(prevJacobshtal);
			if (jacobshtal > vecData_.size())
				jacobshtal = inputSize;
			index = jacobshtal;
			while (index != prevJacobshtal)
			{
				vecBinarySearch(vecData_[index].min, sortedVec_);
				index--;
			}
		}
	}	
	print(sortedVec_, "\n\nAfter:");
	gettimeofday(&vecEnd, 0);
    long seconds = vecEnd.tv_sec - vecBegin.tv_sec;
    long microseconds = vecEnd.tv_usec - vecBegin.tv_usec;
    float elapsed = seconds + microseconds*1e-6;
	std::cout << "\nTime to process a range of " << inputSize << " elements with std::vector : " << std::fixed << std::setprecision(5) << elapsed << "us\n" << std::endl;
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