/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Searilizer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:57:58 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/12 19:09:01 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"
#include "Data.hpp"






uintptr_t Serializer::serialize(Data* ptr){};

Data* Serializer::deserialize(uintptr_t raw){};





Serializer::Serializer()
{}

Serializer::Serializer( Serializer const & src )
{
    this = src; 
}

Serializer::~Serializer()
{}

Serializer &	Serializer::operator=( Serializer const & right )
{
	( void ) to_copy;
	return (*this);
}