/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:27:11 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 12:42:38 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{}

Cure::Cure( Cure const & src )
{
	*this = src; 
}

Cure::~Cure()
{}

Cure &	Cure::operator=( Cure const & right )
{
	if( this != &right )
		*static_cast<Cure*>(this) = right; 
	return (*this);
}