/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:08:59 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 18:17:13 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type_(type)
{
	std::cout << "AMateria Constructor called with type:	" << type << std::endl;
}	

AMateria::AMateria(AMateria const &cpy) : AMateria(cpy.type_)
{
	std::cout << "AMateria Copy Constructor called with type:	" << type_ << std::endl;
}	

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor call" << std::endl;
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

