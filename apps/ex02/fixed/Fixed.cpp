/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:29:09 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/06 14:56:03 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"	

/*Constructor Fixed::Fixed():

This is the default constructor for the Fixed class.
It initializes the fixedPoint member variable to 0.
It also prints "Fixed constructor called" to the standard output using std::cout.
Copy Constructor Fixed::Fixed(Fixed &c):

This is a copy constructor for the Fixed class.
It takes a reference to another Fixed object c as its parameter.
It copies the value of the fixedPoint member variable from the c object to the current object.
It prints "Copy constructor called" to the standard output.
Destructor Fixed::~Fixed():

This is the destructor for the Fixed class.
It is called automatically when an instance of the class goes out of scope or is explicitly deleted.
It prints "Destructor called" to the standard output.
Assignment Operator Fixed &Fixed::operator=(Fixed const &other):

This is the assignment operator for the Fixed class, used for assigning one Fixed object to another.
It takes a constant reference to another Fixed object other as its parameter.
It copies the raw binary value (referred to as value) from the other object to the current object.
It prints "Assignation operator called" to the standard output.
It returns a reference to the current object to allow for chained assignments.
Member Function int Fixed::getRawBits(void) const:

This member function is used to retrieve the raw binary representation of the fixed-point number.
It doesn't modify the object (hence the const keyword), and it returns the value member variable.
It prints "set raw bits" to the standard output.
Member Function void Fixed::setRawBits(int const raw):

This member function is used to set the raw binary representation of the fixed-point number.
It takes an integer raw as its parameter and assigns it to the value member variable.
It prints "set Raw Bits" to the standard output.
Overall, this code defines a class for working with fixed-point numbers, 
allowing for construction, copy construction, destruction, assignment, and retrieval/manipulation of the raw binary 
representation of the fixed-point value. The print statements are used for debugging and understanding the flow of the program.
Note that there is an inconsistency in the naming of the fixedPoint member variable, which is used in the default constructor 
but not defined elsewhere in the code (it seems like it should be value based on the assignment operator implementation).*/

Fixed::Fixed()
{
	fixedPoint = 0;
	std::cout << "Fixed constructor called" << std::endl;
}

Fixed::Fixed(Fixed &c)
{
	fixedPoint = c.fixedPoint;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	value = other.getRawBits();
	return (value);
}

int Fixed::getRawBits(void) const
{
	std::cout << "set raw bits" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "set Raw Bits" << std::endl;
	value = raw;
}