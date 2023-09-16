/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:56:44 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 14:10:24 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void Animal::makeSound() const
{
    std::cout << COLOR_GREEN << "Not sure what they are supposed to do in animal" << COLOR_RESET <<std::endl;
}

std::string Animal::getType() const
{
    return (Type_);   
}

Animal& Animal::operator=(Animal const &right)
{
    Type_ = right.Type_;
	
    return (*this);
}

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
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
