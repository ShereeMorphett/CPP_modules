/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:38:49 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/20 15:57:14 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Brain	*Dog::getBrain() const
{
    return dogBrain_;
}


void Dog::makeSound() const
{
    std::cout << COLOR_RED << "Woof! " << COLOR_RESET <<std::endl;
}

Dog& Dog::operator=(Dog const &right)
{
    *static_cast<Animal*>(this) = right;
	*dogBrain_ = *right.dogBrain_;
    return *this;
}

Dog::Dog(): Animal ("Dog"), dogBrain_(new Brain)
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog& Cpy): dogBrain_(new Brain(*Cpy.dogBrain_))
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = Cpy;
}

Dog::~Dog()
{
	if (dogBrain_)
		delete dogBrain_;
    std::cout << "Dog destructor called" << std::endl;
}