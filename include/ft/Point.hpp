/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:39:53 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/11 08:57:11 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//BSP stands for Binary space partitioning. 

/*
Let’s start by creating the class Point in Orthodox Canonical Form that represents a 2D point:
• Private members:
◦ A Fixed const attribute x. √◦ A Fixed const attribute y.√ ◦ Anything else useful.
• Public members:
◦ A default constructor that initializes x and y to 0.√
◦ A constructor that takes as parameters two constant floating-point numbers. It initializes x and y with those parameters.√
◦ A copy constructor.√
◦ A copy assignment operator overload.
◦ A destructor.√
*/


#ifndef POINT_HPP
 #define PONT_HPP
 #include "ft/Fixed.hpp"


class Point
{
	private:
	Fixed x;
	Fixed y;
	
	public:

	Point();
	Point(float x, float y);
	Point(const Point& p);
	~Point();
	Point& operator=(Point const& self);
};

#endif