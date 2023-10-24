/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:37:59 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/24 13:51:19 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP

# include <iostream>
#include <deque>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T, std::deque<T>>
{
	public:
		MutantStack();
		MutantStack(const MutantStack& src);
		~MutantStack();
		MutantStack& operator=(const MutantStack& right);
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		typename MutantStack<T>::iterator begin() { return std::stack<T>::c.begin();};
		typename MutantStack<T>::iterator end() { return std::stack<T>::c.end(); };
		typename MutantStack<T>::const_iterator begin() const { return std::stack<T>::c.begin(); };
		typename MutantStack<T>::const_iterator end() const { return std::stack<T>::c.end(); };
};
#include "MutantStack.tpp"

#endif