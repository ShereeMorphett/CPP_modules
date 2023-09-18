/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:33:32 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 12:36:07 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"




ICharacter::ICharacter()
{}

ICharacter::ICharacter( ICharacter const & src )
{
	*this = src; 
}

ICharacter::~ICharacter()
{}

ICharacter &	ICharacter::operator=( ICharacter const & rhs )
{
	if( this != &rhs )
		_ATRIBUTE = rhs.ATTRIBUTE;
	return (this);
}
