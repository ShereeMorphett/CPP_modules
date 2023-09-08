/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:33:34 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/08 17:43:18 by smorphet         ###   ########.fr       */
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

		friend std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

		float toFloat() const;
		int toInt() const;
		int getRawBits() const;
		void setRawBits(int const rawValue);
};




#endif