/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:38:49 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 17:53:29 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


void Cat::makeSound() const
{
    std::cout << COLOR_BLUE << "Meow! " << COLOR_RESET <<std::endl;
}


Cat::Cat(): Animal ("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat& Cpy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = Cpy;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}