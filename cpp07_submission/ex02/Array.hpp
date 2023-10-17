/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:22:59 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/17 11:46:49 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Array_HPP
# define Array_HPP
# include <iostream>


template<typename T>
class Array
{
	private:
		T* arr_;
		int size_;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& src);
		~Array();
		int size() const;
		T& operator[](int index);
		Array& operator=(const Array& right);
		
		class outOfBounds : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Index out of bounds";
				}
		};
};


# include "Array.tpp"
#endif