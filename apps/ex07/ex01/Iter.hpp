/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:16:26 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/16 18:23:20 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Implement a function template iter that takes 3 parameters and returns nothing.
	• The first parameter is the address of an array.
	• The second one is the length of the array.
	• The third one is a function that will be call on every element of the array.
	Turn in a main.cpp file that contains your tests. Provide enough code to generate a test executable.
	Your iter function template must work with any type of array. The third parameter can be an instantiated function template.
*/


template <typename T, typename Func>
void iter(T* arr, int length, Func func)
{
    for (int i = 0; i < length; ++i)
	{
        func(arr[i]);
    }
}
