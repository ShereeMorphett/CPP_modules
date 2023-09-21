/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:27:11 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/19 16:38:34 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Color.hpp"

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << COLOR_RED << "* Heals "<< target.getName() << "'s wounds*" << COLOR_RESET << std::endl;
	
}
Cure::Cure() : AMateria("cure")
{
	//std::cout << "default cure constructor" << std::endl;
}
Cure::Cure(std::string type) : AMateria(type)
{
	//std::cout << "Cure constructor with type" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	//std::cout << "Copy cure constructor" << std::endl;
}

Cure::~Cure()
{
	//std::cout << "Cure destructor" << std::endl;
}

Cure &	Cure::operator=( Cure const & right )
{
	if( this != &right )
		static_cast<AMateria&>(*this) = right;
	return (*this);
}