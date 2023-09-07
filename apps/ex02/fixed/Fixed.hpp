/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:33:34 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/07 15:57:26 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
 #define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
	int fixedPoint;
	static const int rawBit = 8;

	public:
	
	Fixed();
	Fixed(Fixed &c);
	~Fixed();
	
	Fixed& operator=(Fixed const &self);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif