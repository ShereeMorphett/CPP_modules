/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:38:49 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 17:16:20 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const
{
    std::cout << COLOR_RED << "Woof! " << COLOR_RESET <<std::endl;
}

Dog& Dog::operator=(Dog const &right)
{
    type_ = right.type_;
	
    return (*this);
}

Dog::Dog(): Animal ("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& Cpy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = Cpy;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}