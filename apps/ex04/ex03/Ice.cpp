/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:21:35 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 18:36:51 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


AMateria* Ice::clone() const
{
    return new Ice(*this);
}


void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << "*" << std::endl;
	
}


Ice &	Ice::operator=( Ice const &right )
{
	if( this != &right )
		static_cast<AMateria&>(*this) = right;
	return *this;
}


Ice::Ice() : AMateria("ice")
{
	//print statement
}

Ice::Ice( Ice const & src ) : AMateria(src)
{
}

Ice::~Ice()
{
	//print statement
}
