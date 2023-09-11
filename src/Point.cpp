/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:45:44 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/11 08:56:56 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point()
{
	x = Fixed();
	y = Fixed();
}


Point::Point(float pointX, float pointY)
{
	x = Fixed(pointX);
	y = Fixed(pointY);
	
}

Point::Point(const Point& p)
{
	x = p.x;
	y = p.y;
}

// Point& Point::operator=(Point const& self); //