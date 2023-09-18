/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:21:35 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 12:57:36 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

void use(int idx, ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getType() << "*" << std::endl;
	
}

Ice::Ice()
{}

Ice::Ice( Ice const & src )
{
	*this = src;
}

Ice::~Ice()
{}

// Ice &	Ice::operator=( Ice const & right )
// {
// 	if( this != &right )
// 		_ATRIBUTE = right.ATTRIBUTE;
// 	return (this);
// }
