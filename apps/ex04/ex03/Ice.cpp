/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:21:35 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 10:19:22 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Color.hpp"


AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << COLOR_CYAN << "* shoots an ice bolt at "<< target.getName() << "*" << COLOR_RESET << std::endl;	
}

Ice &	Ice::operator=( Ice const &right )
{
	if( this != &right )
		static_cast<AMateria&>(*this) = right;
	return *this;
}


Ice::Ice() : AMateria("ice")
{
	//std::cout << "Default Ice constructor" << std::endl;
}

Ice::Ice(std::string type) : AMateria(type)
{
	//std::cout << "type specified Ice constructor" << std::endl;
}

Ice::Ice( Ice const & src ) : AMateria(src)
{
	//std::cout << "Copy Ice constructor" << std::endl;
}

Ice::~Ice()
{
	//std::cout << "Ice destructor" << std::endl;
}
