/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:57:58 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/15 11:09:41 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"


/*
	Serializer::serialize function is called with a pointer to the fish object. 
	This function converts the pointer into an unsigned integer type uintptr_t and returns it. 
	This conversion allows you to save or transmit the object's state in a serialized form, 
	which can later be used to recreate the object.
*/

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}


/// totally unneccessary but needed to meet the subject orthodox canonical
Serializer::Serializer()
{}

Serializer::Serializer( Serializer const & src )
{
    *this = src; 
}

Serializer::~Serializer()
{}

Serializer &	Serializer::operator=( Serializer const & right )
{
	static_cast<void>(right);
	return (*this);
}