/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:04 by smorphet          #+#    #+#             */
/*   Updated: 2023/11/01 16:26:57 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include "Color.hpp"
# include <iostream>
# include <list>
# include <vector>
# include <iterator>
# define EMPTY -1


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
	

	 	template<typename T>
		void binarySearch(int toPlace, T& container);
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

template<typename T>
void print(T container,  std::string heading);


#endif