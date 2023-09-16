/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:56:44 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 18:48:53 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void Animal::makeSound() const
{
    std::cout << COLOR_GREEN << "Not sure what they are supposed to do in animal" << COLOR_RESET <<std::endl;
}

const std::string& Animal::getType() const
{
    return type_;   
}

Animal& Animal::operator=(Animal const &right)
{
    type_ = right.type_;
	
    return *this;
}

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal with type " << type << " constructor called" << std::endl;
    type_ = type;
}

Animal::Animal(Animal& Cpy)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = Cpy;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
