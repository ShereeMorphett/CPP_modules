/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:29:09 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/07 15:46:10 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"	

Fixed::Fixed()
{
	fixedPoint = 0;
	std::cout << "Fixed constructor called" << std::endl;
}

Fixed::Fixed(Fixed &self)
{
	fixedPoint = self.fixedPoint;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &self)
{
	fixedPoint = self.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (fixedPoint);
}

void Fixed::setRawBits(int const rawBit)
{
	fixedPoint = rawBit;
}