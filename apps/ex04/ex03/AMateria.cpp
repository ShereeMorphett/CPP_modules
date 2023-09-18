/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:08:59 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 11:26:26 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria Constructor called with type:	" << type << std::endl;
	type_ = type;
}	
AMateria::~AMateria()
{
	std::cout << "AMateria Destructor call" << std::endl;
}
std::string const & AMateria::getType() const
{
	return type_;
}

