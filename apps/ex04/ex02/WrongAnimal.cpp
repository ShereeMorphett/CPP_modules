/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:20:15 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/17 14:51:13 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"


void WrongAnimal::makeSound() const
{
    std::cout << COLOR_GREEN << "Not sure what they are supposed to do in WrongAnimal" << COLOR_RESET <<std::endl;
}

std::string WrongAnimal::getType() const
{
    return Type_;   
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &right)
{
    Type_ = right.Type_;
	
    return *this;
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
