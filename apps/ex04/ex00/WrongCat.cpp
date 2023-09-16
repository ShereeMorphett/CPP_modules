/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:38:49 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 16:13:59 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"



void WrongCat::makeSound() const
{
    std::cout << COLOR_BRIGHT_CYAN << "Wrong Meow! " << COLOR_RESET <<std::endl;
}


WrongCat& WrongCat::operator=(WrongCat const &right)
{
    Type_ = right.Type_;
	
    return (*this);
}

WrongCat::WrongCat(): WrongAnimal ("spaghetti")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& Cpy)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = Cpy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}