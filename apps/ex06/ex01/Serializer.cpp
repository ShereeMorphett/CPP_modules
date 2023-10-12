/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:57:58 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/12 19:24:34 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"



uintptr_t Serializer::serialize(Data* ptr){}; //work out these things

Data* Serializer::deserialize(uintptr_t raw){};//work out these things




/// totall unneccessary but needed to meet the subject orthodox canonical bs
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