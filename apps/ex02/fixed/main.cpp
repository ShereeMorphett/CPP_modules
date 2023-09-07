/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:27:15 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/07 15:47:40 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Color.hpp"



int main(void)
{
	Fixed f;
    Fixed copyF(f);

	std::cout << COLOR_RED << "INITIAL CLASSES" << std::endl;	
	std::cout << COLOR_MAGENTA << "f.getRawBits(): " << f.getRawBits() << COLOR_RESET << std::endl;
	std::cout << COLOR_CYAN << "copyF.getRawBits(): " << copyF.getRawBits()<< COLOR_RESET << std::endl << std::endl;
	
	
	copyF.setRawBits(42);
	std::cout << COLOR_RED << "AFTER THE SET BITS WERE CHANGED FOR COPYF" << std::endl;
    std::cout << COLOR_CYAN << "copyF.getRawBits(): " << copyF.getRawBits()<< COLOR_RESET << std::endl;	
	std::cout << COLOR_MAGENTA << "f.getRawBits(): " << f.getRawBits()<< COLOR_RESET << std::endl << std::endl;
	
	copyF = f;
	std::cout << COLOR_RED << "AFTER COPYF WAS RESET TO BE F" << std::endl;
	std::cout << COLOR_MAGENTA << "f.getRawBits(): " << f.getRawBits()<< COLOR_RESET << std::endl;
	std::cout << COLOR_CYAN << "copyF.getRawBits(): " << copyF.getRawBits()<< COLOR_RESET << std::endl << std::endl;
	
	return 0;
}