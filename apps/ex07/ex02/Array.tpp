/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:33:13 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/17 11:43:42 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	arr_ = new T[0](); //allocate, delete this
	size_ = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	arr_ = new T[n](); // Use default constructor to initialize elements
	size_ = n;
}

template <typename T>
Array<T>::Array(const  Array<T>& src) //deep copy
{
	arr_ = new T[src.size_];
	size_ = src.size_;
	for (int i = 0; i < size_; i++)
	{
		arr_[i] = src.arr_[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr_;
}
template <typename T>
int Array<T>::size() const
{
	return size_;
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || index >= size_)
	{
		throw outOfBounds();
	}
	return arr_[index];
}

template <typename T>
Array<T>& Array<T>::operator=(const  Array<T>& right) // deep copy
{
	if (this != &right)
	{
		delete[] arr_;
		arr_ = new T[right.size_];
		size_ = right.size_;
		for (int i = 0; i < right.size_; i++)
		{
			arr_[i] = right.arr_[i];
		}
	}
	return *this;
}