/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:29:09 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/05 15:54:38 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"	

	
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
		
	}


	int Fixed::getRawBits(void) const
	{

		return 0;
	}
	
	void Fixed::setRawBits(int const raw)
	{

		
	}