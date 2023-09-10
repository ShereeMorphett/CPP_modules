/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:33:34 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/10 14:57:08 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
 #define FIXED_HPP

#include <iostream>
#include <cmath>

/*Add public member functions to your class to overload the following operators:
• The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /. 
• The 4 increment/decrement
(pre-increment and post-increment, pre-decrement and post-decrement) operators, 
that will increase or decrease the fixed-point value from
the smallest representable ϵ such as 1 + ϵ > 1.
Add these four public overloaded member functions to your class:
• A static member function min that takes as parameters two references on fixed-point
numbers, and returns a reference to the smallest one.
• A static member function min that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the smallest one.
• A static member function max that takes as parameters two references on fixed-point
numbers, and returns a reference to the greatest one.
• A static member function max that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the greatest one.*/


class Fixed
{
	private:
		int fixedPoint;
		static const int fractionalBits = 8; // Initialize fractional bits to 8

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& c);
		~Fixed();

		Fixed& operator=(Fixed const& self);
		Fixed operator+(const Fixed& rhs);
		Fixed operator-(const Fixed& rhs);
		Fixed operator*(const Fixed& rhs);
		Fixed operator/(const Fixed& rhs);

		bool	operator>(const Fixed& rhs);
		bool	operator<(const Fixed& rhs);
		bool	operator>=(const Fixed& rhs);
		bool	operator<=(const Fixed& rhs);
		bool	operator==(const Fixed& rhs);
		bool	operator!=(const Fixed& rhs);

		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits() const;
		void setRawBits(int const rawValue);
};
	
	std::ostream& operator<<(std::ostream& out, const Fixed& fixed);




#endif