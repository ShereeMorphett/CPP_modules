/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:30:54 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/14 16:05:53 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string id) : ClapTrap(id)
{
    std::cout << "ScavTrap named " << id << " created!" << std::endl;
    HitPoints_ = 100;
    EnergyPoints_ = 50;
    AttackDamage_ = 20;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;

}
void ScavTrap::attack(const std::string& target) // Override attack to print a different message
{
	if (EnergyPoints_ > 0 && HitPoints_ > 0)
		{
			std::cout << COLOR_MAGENTA << "ScavTrap " << name_<< " attacks "<< target << " causing " << AttackDamage_ << " damage!" << COLOR_RESET << std::endl;
			EnergyPoints_--;
		}
		else
		{
			if (EnergyPoints_ > 0)
				std::cout << COLOR_RED << "ScavTrap " << name_<< " has no more energy! It cannot be attack! "<< COLOR_RESET << std::endl;
			else
				std::cout << COLOR_RED << "ScavTrap " << name_<< " has no more HP! It cannot be attack! "<< COLOR_RESET << std::endl;
		}

}


void ScavTrap::guardGate()
{
    std::cout << COLOR_CYAN  << "ScavTrap " << GetName() << " is now in Gatekeeper mode!" << COLOR_RESET << std::endl;
}