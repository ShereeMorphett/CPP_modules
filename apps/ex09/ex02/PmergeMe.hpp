/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:19:04 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/31 16:23:57 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
# define PmergeMe_HPP

# include <iostream>
# include <list>
# include <vector>
# include <iterator>
# define EMPTY = -1

struct Pairs
{
	int min;
	int max;
};


class PmergeMe
{
	private:
		std::list<Pairs> listData_; 
		std::vector<Pairs> vecData_;
		
		// template<typename T>
		// T sortedData_;
		//vec start time
		//vec used time
		//list start time
		//list used time
		
	
		
	public:
		template<typename T>
		//void print(T contain);
		PmergeMe();
		PmergeMe(PmergeMe const & src);
		~PmergeMe();
		PmergeMe &	operator=( PmergeMe const & right);

};



#endif