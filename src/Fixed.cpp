/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:29:09 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/08 18:03:00 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/Fixed.hpp"
#include <iomanip>


/*
Fixed Precision:
	Fixed-point numbers have a fixed number of fractional and integer bits,
	which means they can represent a limited range of values with a fixed level of precision.
	For example, you might have a fixed-point type with 16 bits, where 8 bits are dedicated to the
	integer part and 8 bits to the fractional part.

Integer and Fractional Parts:
	The integer part of a fixed-point number represents the whole number portion,
	while the fractional part represents the decimal or fractional portion of the number.
	The position of the binary point (or decimal point) is fixed based on the number of integer and
	fractional bits.

Arithmetic Operations:
	Fixed-point numbers support basic arithmetic operations like addition,
	subtraction, multiplication, and division, but these operations must take into account the
	fixed precision. Overflow and underflow can occur if the result of an operation exceeds the
	range of the fixed-point representation.

No Rounding Errors:
	Fixed-point numbers are deterministic and do not suffer from rounding errors like floating-point
	numbers. However, they can still lose precision if the number of fractional bits is insufficient
	to represent the desired level of accuracy.

Custom Implementation:
	In C++, fixed-point numbers are typically implemented using user-defined data types, classes, or structures.
	You can create your own fixed-point type by specifying the number of integer and 
	fractional bits and overloading operators to handle arithmetic operations.
*/

Fixed::Fixed()
{
	fixedPoint = 0;
}


/*This constructor initializes a fixed-point number fixedPoint by left-shifting the integer num 
by fractionalBits positions, effectively converting it into a fixed-point representation with a 
specific number of fractional bits.*/
Fixed::Fixed(const int num)
{
    fixedPoint = num << fractionalBits;
}

/*initializes a fixed-point number `fixedPoint` 
by rounding the floating-point value `num` scaled up by a power of 2 (based on `fractionalBits`) 
and then converting it to an integer, effectively creating a fixed-point representation 
from a floating-point value.*/

Fixed::Fixed(const float num)
{
    fixedPoint = static_cast<int>(roundf(num * (1 << fractionalBits)));
	/*math library function that rounds a floating-point number to the nearest integer value, 
	using the round-half-to-even (or "banker's rounding") rule. In other words, 
	it rounds to the nearest integer, and if the number is exactly halfway between two integers, 
	it rounds to the nearest even integer.*/
}


Fixed::Fixed(const Fixed &self)
{
	fixedPoint = self.fixedPoint;
}

Fixed::~Fixed()
{
}

/*This `<<` operator overload allows you to output a `Fixed` fixed-point number to a stream.
It converts the fixed-point value to a floating-point value, sets the output precision to two decimal
places, and then streams it to the provided `std::ostream` object, ensuring a formatted 
representation with two decimal places.*/

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    float floatValue = static_cast<float>(fixed.getRawBits()) / (1 << Fixed::fractionalBits);
    out << std::fixed << std::setprecision(2) << floatValue;
    return out;
}
/*This assignment operator overloads the `=` operator to copy the raw fixed-point representation from 
another `Fixed` object (`self`) into the current object and 
returns a reference to the modified object.*/

Fixed& Fixed::operator=(Fixed const &self)
{
	fixedPoint = self.getRawBits();
	return (*this);
}

/*This member function converts the fixed-point number into a floating-point representation 
by dividing the raw fixed-point bits by 2 raised to the power of `fractionalBits`, 
returning the corresponding floating-point value.*/

float Fixed::toFloat( void ) const
{
  float floatValue = static_cast<float>(getRawBits()) / (1 << fractionalBits);

	return (floatValue);
}

/*This member function converts the fixed-point number into an integer by right-shifting the raw 
fixed-point bits by `fractionalBits`, effectively truncating the fractional part,
 and returning the integer value.*/
int Fixed::toInt( void ) const
{
	int value = fixedPoint >> fractionalBits;
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