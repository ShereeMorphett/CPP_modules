/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:07:46 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/18 13:09:04 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>


/*
	A first easy exercise is the way to start off on the right foot.
	Write a function template easyfind that accepts a type T. It takes two parameters.
	The first one has type T and the second one is an integer.
	Assuming T is a container of integers, this function has to find the first occurrence
	of the second parameter in the first parameter.
	If no occurrence is found, you can either throw an exception or return an error value of your choice. If you need some inspiration, analyze how standard containers behave.
	Of course, implement and turn in your own tests to ensure everything works as expected.
*/


class notFound : public std::exception
{
	public:
		virtual const char* what() const throw();
};

const char* notFound::what() const throw()
{
    return "Not Found";
} 


template <typename T>
typename T::iterator easyfind(T& intCont, int toFind)
{
	typename T::iterator it;

	it = find (intCont.begin(), intCont.end(), toFind);
	if (it != intCont.end())
		return (it);
	throw notFound();
}
