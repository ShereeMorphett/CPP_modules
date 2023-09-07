/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:29:09 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/07 16:14:31 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/*
	• A constructor that takes a constant integer as a parameter.
		It converts it to the corresponding fixed-point value.
		The fractional bits value is initialized to 8 like in exercise 00.
	
	• A constructor that takes a constant floating-point number as a parameter.
		It converts it to the corresponding fixed-point value. 
		The fractional bits value is initialized to 8 like in exercise 00.
	
	And add the following function to the Fixed class files:
	• An overload of the insertion («) operator that inserts a floating-point representation
	of the fixed-point number into the output stream object passed as parameter.√ 
*/



Fixed::Fixed()
{
	fixedPoint = 0;
	std::cout << "Fixed constructor called" << std::endl;
}

Fixed::	Fixed(const int num)
{
	fixedPoint = 0;
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float num)
{

	std::cout << "Float constructor called" << std::endl;
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


// • An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.


// Fixed& Fixed::operator<<(Fixed const &fixedNum)
// {
	
// 	return (floatingPoint);
// }

Fixed& Fixed::operator=(Fixed const &self)
{
	fixedPoint = self.getRawBits();
	return (*this);
}


float Fixed::toFloat( void ) const
{
	// 	that converts the fixed-point value to a floating-point value.
	float value = 0.0;
	return (value);
}


int Fixed::toInt( void ) const
{
	// 	that converts the fixed-point value to an integer value.
	int value = 0.0;
	return (value);
}


int Fixed::getRawBits(void) const
{
	return (fixedPoint);
}

void Fixed::setRawBits(int const rawBit)
{
	fixedPoint = rawBit;
}