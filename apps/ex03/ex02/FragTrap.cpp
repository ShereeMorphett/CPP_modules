/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:13:58 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/16 12:47:15 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"


void FragTrap::highFivesGuys(void)
{
	char response;
	
 	std::cout << COLOR_BRIGHT_BLUE << "FragTrap " << GetName() << "requests a High-Five! (y/n)" << std::endl;
	std::cin >> response;
	
	if (response == 'y')
		std::cout << GetName() << ": WOOOO! High-Fives all round!" << COLOR_RESET << std::endl;
	else
		std::cout << GetName() << ": Well this is awkward....." << COLOR_RESET << std::endl;
}

FragTrap::FragTrap(std::string id) : ClapTrap(id)
{
    std::cout << "FragTrap named " << id << " created!" << std::endl;
    HitPoints_ = 100;         // Initialize FragTrap specific attributes
    EnergyPoints_ = 100;
    AttackDamage_ = 30;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}


FragTrap &FragTrap::operator=(const FragTrap &right)
{

	name_ = right.name_;
	HitPoints_ = right.HitPoints_;
	EnergyPoints_ = right.EnergyPoints_;
	AttackDamage_ = right.AttackDamage_;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}