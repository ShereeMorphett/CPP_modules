/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:33:34 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/07 16:12:01 by smorphet         ###   ########.fr       */
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
	static const int rawBit = 8;

	public:
	
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(Fixed &c);
	~Fixed();
	
	Fixed& operator=(Fixed const &self);
	Fixed& operator<<(Fixed const &self);

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif