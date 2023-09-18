/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:27:11 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 19:15:13 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* Heals "<< target.getName() << " wounds*" << std::endl;
	
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	//print statement
}


Cure::~Cure()
{}

Cure &	Cure::operator=( Cure const & right )
{
	if( this != &right )
		static_cast<AMateria&>(*this) = right;
	return (*this);
}