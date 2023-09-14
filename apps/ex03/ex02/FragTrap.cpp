/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:13:58 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/14 16:20:02 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"


void FragTrap::highFivesGuys(void)
{
	char response;
	
 	std::cout << COLOR_BRIGHT_BLUE << "FragTrap " << GetName() << "requests a High-Five! (y/n)" << std::endl;
	std::cin >> response;
	
	if (response == 'y')
		std::cout << GetName() << ": WOOOO! High-Fives all round!" << std::endl;
	else
		std::cout << GetName() << ": Well this is awkward....." << COLOR_RESET << std::endl;
}


FragTrap::FragTrap(std::string id) : ClapTrap(id)
{
    std::cout << "FragTrap named " << id << " created!" << std::endl;
    HitPoints_ = 100;         // Initialize FragTrap attributes
    EnergyPoints_ = 100;
    AttackDamage_ = 30;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}