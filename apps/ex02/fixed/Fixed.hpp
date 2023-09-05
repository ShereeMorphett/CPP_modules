/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:33:34 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/05 15:55:00 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
 #define FIXED_HPP

#include <iostream>

/* Create a class in Orthodox Canonical Form that represents a fixed-point number:
• Private members:
	◦ An integer to store the fixed-point number value.✓
	◦ A static constant integer to store the number of fractional bits. 
		Its value will always be the integer literal 8.✓
• Public members:
	◦ A default constructor that initializes the fixed-point number value to 0. ✓
	◦ A copy constructor. ✓
		A copy constructor is a member function that initializes an object using another object of the same class.
		In simple terms, a constructor which creates an object by initializing it with an object of the same class,
		which has been created previously is known as a copy constructor.  
		Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
		Copy constructor takes a reference to an object of the same class as an argument.
	◦ A copy assignment operator overload.
	◦ A member function int getRawBits( void ) const;
		that returns the raw value of the fixed-point value.
	◦ A member function void setRawBits( int const raw );
		that sets the raw value of the fixed-point number.  */


class Fixed
{
	private:
	int fixedPoint;
	static const int constInt = 8;

	public:
	
	Fixed();
	Fixed(Fixed &c);
	
	~Fixed();
	
	// operator =() const;
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif