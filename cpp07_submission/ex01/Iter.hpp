/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:16:26 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/17 09:20:50 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

/*
	Implement a function template iter that takes 3 parameters and returns nothing.
	• The first parameter is the address of an array.
	• The second one is the length of the array.
	• The third one is a function that will be call on every element of the array.
	Turn in a main.cpp file that contains your tests. Provide enough code to generate a test executable.
	Your iter function template must work with any type of array. The third parameter can be an instantiated function template.
*/

template <typename T>
void iter(T* arr, int length, void (*f)( T & ))
{
    for (int i = 0; i < length; ++i)
	{
        (f)(arr[i]);
    }
}

template <typename T>
void iter(const T* arr, int length, void (*f)(const T&))
{
    for (int i = 0; i < length; ++i)
    {
        f(arr[i]);
    }
}

#endif
