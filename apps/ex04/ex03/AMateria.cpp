/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:08:59 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 15:07:18 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


void AMateria::use(ICharacter& target)
{
	std::cout << "There is no use for this materia " << target.getName() << "had no changes" << std::endl;
}

AMateria::AMateria(std::string const &type) : type_(type)
{
	// std::cout << "AMateria Constructor called" << std::endl;
}	

AMateria::AMateria(AMateria const &cpy)
{
	type_ = cpy.type_;
	// std::cout << "AMateria Copy Constructor called" << std::endl;
}	

AMateria::~AMateria()
{
	// std::cout << "AMateria Destructor call" << std::endl;
}


AMateria& AMateria::operator=(AMateria const &right)
{
    type_ = right.type_;
    return *this;
}


std::string const & AMateria::getType() const
{
	return type_;
}