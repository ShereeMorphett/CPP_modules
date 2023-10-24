/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:00:19 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/24 13:50:46 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()  : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const & src) : std::stack<T>(src) {}

template<typename T>
MutantStack<T>::~MutantStack(){}


template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& right)
{
	if (this == &right)
		return *this;
	std::stack<T>::operator=(right);
	return *this;
}