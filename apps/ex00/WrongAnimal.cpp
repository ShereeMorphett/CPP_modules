/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:20:15 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 09:29:30 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"


void WrongAnimal::makeSound() const
{
    std::cout << COLOR_GREEN << "Some generic WrongAnimal sound" << COLOR_RESET <<std::endl;
}

std::string WrongAnimal::getType() const
{
    return (Type_);   
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &right)
{
    Type_ = right.Type_;
	
    return (*this);
}

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal with " << type << " constructor called" << std::endl;
    Type_ = type;
}

WrongAnimal::WrongAnimal(WrongAnimal& Cpy)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = Cpy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
