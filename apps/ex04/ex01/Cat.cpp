/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:38:49 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 19:09:06 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


void Cat::makeSound() const
{
    std::cout << COLOR_BLUE << "Meow! " << COLOR_RESET << std::endl ;
}


Cat& Cat::operator=(Cat const &right)
{
    *static_cast<Animal*>(this) = right; 
    //type_ = right.type_;
    *catBrain_ = *right.catBrain_;
    
    return *this;
}

Cat::Cat(): Animal("Cat") , catBrain_(new Brain)
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& Cpy): Cat()
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = Cpy;
}

Cat::~Cat()
{
    delete catBrain_;
    std::cout << "Cat destructor called" << std::endl;
}