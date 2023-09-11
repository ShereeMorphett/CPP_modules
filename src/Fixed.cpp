/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:29:09 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/11 09:17:07 by smorphet         ###   ########.fr       */
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
    setRawBits(num << fractionalBits);
}

/*initializes a fixed-point number `fixedPoint` 
by rounding the floating-point value `num` scaled up by a power of 2 (based on `fractionalBits`) 
and then converting it to an integer, effectively creating a fixed-point representation 
from a floating-point value.*/

Fixed::Fixed(const float num)
{
    fixedPoint = static_cast<int>(roundf(num * (1 << fractionalBits)));
}


Fixed::Fixed(const Fixed &self)
{
	fixedPoint = self.fixedPoint;
}

Fixed::~Fixed()
{
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
   out << fixed.toFloat();  
    return out;
}


Fixed& Fixed::operator=(Fixed const &self)
{
	fixedPoint = self.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const &right)
{
	Fixed value(*this);

	value.setRawBits(getRawBits() + right.getRawBits());
	return (value);
}

Fixed Fixed::operator-(Fixed const &right)
{
	Fixed value(*this);

	value.setRawBits(getRawBits() - right.getRawBits());
	return (value);
}

//must be longs and not ints, loses precision
Fixed Fixed::operator*(Fixed const &right)
{
	Fixed leftValue(*this);
	long temp1 = ((long)getRawBits());
	long temp2 = ((long)right.getRawBits());
	
	leftValue.setRawBits((temp1 * temp2) / (1 << Fixed::fractionalBits));
	return (leftValue);
}

Fixed Fixed::operator/(Fixed const &right)
{
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)getRawBits());
	tmp2 = ((long)right.getRawBits());
	val.setRawBits((tmp1 * (1 << Fixed::fractionalBits)) / tmp2);
	return (val);
}

bool Fixed::operator>(const Fixed& right)
{
    return (getRawBits() > right.getRawBits());
}

bool Fixed::operator<(const Fixed& right)
{
	return (getRawBits() < right.getRawBits());
}



bool Fixed::operator>=(const Fixed& right)
{
	return (getRawBits() >= right.getRawBits());
}

bool Fixed::operator<=(const Fixed& right)
{
	return (getRawBits() <= right.getRawBits());
}

bool Fixed::operator==(const Fixed& right)
{
	return (getRawBits() == right.getRawBits());
}

bool Fixed::operator!=(const Fixed& right)
{
	return (getRawBits() != right.getRawBits());
}


Fixed& Fixed::operator++(void)
{
	this->fixedPoint++;
	return (*this);
}


Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	operator++();
	return (temp);
}

Fixed& Fixed::operator--()
{
	fixedPoint--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	operator--();
	return (temp);
}


/////////////////////////////////////////

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	else
		return b;
}
 Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (b < a)
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
//////////////////////


/*This member function converts the fixed-point number into a floating-point representation 
by dividing the raw fixed-point bits by 2 raised to the power of `fractionalBits`, 
returning the corresponding floating-point value.*/

float Fixed::toFloat( void ) const
{
  	float floatValue = (float)(getRawBits()) / (1 << fractionalBits);
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