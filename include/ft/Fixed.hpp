/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:33:34 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/11 09:15:57 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
 #define FIXED_HPP

#include <iostream>
#include <cmath>



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
		Fixed operator+(const Fixed& right);
		Fixed operator-(const Fixed& right);
		Fixed operator*(const Fixed& right);
		Fixed operator/(const Fixed& right);


		bool	operator>(const Fixed& right);
		bool	operator<(const Fixed& right);
		bool	operator>=(const Fixed& right);
		bool	operator<=(const Fixed& right);
		bool	operator==(const Fixed& right);
		bool	operator!=(const Fixed& right);

		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);


/*		static	const Fixed&	min(const Fixed& one, const Fixed& two);
		static	Fixed&	min(Fixed& one, Fixed& two);
		static	const Fixed&	max(const Fixed& one, const Fixed& two);
		static	Fixed&	max(Fixed& one, Fixed& two);
*/


		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
					

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits() const;
		void setRawBits(int const rawValue);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif