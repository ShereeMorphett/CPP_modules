/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:04 by smorphet          #+#    #+#             */
/*   Updated: 2023/11/05 17:09:45 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include "Color.hpp"
# include <iostream>
# include <list>
# include <vector>
# include <string>
# include <iterator>
#include <sys/time.h>
#include <iomanip>

# define EMPTY -1
# define BINARY 1


template<typename T>
void print(T container,  const std::string& heading);
int Jacobsthal(int n);
int getNextJacobsthal(int last);


struct Pairs
{
	int min;
	int max;
	bool operator< (const Pairs& right) const;
};

class PmergeMe
{
	private:
		int inputSize;
		std::list<Pairs> listData_; 
		std::vector<Pairs> vecData_;
		std::list<int> sortedList_; 
		std::vector<int> sortedVec_;

		struct timeval vecBegin, vecEnd;
		struct timeval listBegin, listEnd;
				
	public:

		void vecBinarySearch(int toPlace, std::vector<int>& container);
		void listBinarySearch(int toPlace, std::list<int>& container);
		void listSorting();
		void vectorSorting();
		template<typename T>
		void printPairs(T container);
		void initValues(std::vector<int>& validatedInput);
		PmergeMe();
		PmergeMe(PmergeMe const & src);
		~PmergeMe();
		PmergeMe &	operator=( PmergeMe const & right);

};



#endif