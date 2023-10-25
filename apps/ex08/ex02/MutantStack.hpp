/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:37:59 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/25 14:53:29 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP

# include <iostream>
#include <deque>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack& src);
		~MutantStack();
		MutantStack& operator=(const MutantStack& right);
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin() { return std::stack<T>::c.begin();};
		iterator end() { return std::stack<T>::c.end(); };
		const_iterator begin() const { return std::stack<T>::c.begin(); };
		const_iterator end() const { return std::stack<T>::c.end(); };
};
#include "MutantStack.tpp"

#endif