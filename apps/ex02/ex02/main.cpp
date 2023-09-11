/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:51:29 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/11 09:17:21 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/Fixed.hpp"
#include "ft/Color.hpp"

int main( void )
{

    Fixed a;
    
    Fixed const b( Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
	
	
	std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;
	
	std::cout << Fixed::max(a, a) << std::endl;
    std::cout << Fixed::min(a, a) << std::endl;

	
    return 0;
}

///expected outcome
/*$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>*/