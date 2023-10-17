/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:58:38 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/16 17:14:00 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Color.hpp"
#include <iostream>
#include "Whatever.hpp"


int main( void )
{
	int a = 2;
	int b = 3;

	std::cout << COLOR_CYAN << "Subject Tests\n\n" << COLOR_RESET;	
	std::cout << "a= " << a << " b= " << b << std::endl;
	std::cout << COLOR_MAGENTA<< "After Swap" << COLOR_RESET << std::endl;	
	::swap(a, b);
	std::cout << "a= " << a << " b= " << b << std::endl;

	std::cout << COLOR_MAGENTA<< "\nMin Max test" << COLOR_RESET << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::cout << COLOR_MAGENTA<< "\nMin Max test with strings" << COLOR_RESET << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0; 
}