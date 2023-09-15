/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:18:51 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/15 16:24:57 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap ClapTrp("ClapTrap");
	ClapTrap CpyTrp(ClapTrp);
	ScavTrap ScavTrap("ScavTrap");
	FragTrap FragTrap("FragTrap");
	
	CpyTrp.setName("COPYTrap");
	
	std::cout << COLOR_BRIGHT_BLUE << "Battle Comences" << COLOR_RESET << std::endl;
	CpyTrp.attack(ScavTrap.GetName());
	ScavTrap.takeDamage(CpyTrp.GetAttackDamage());
	ClapTrp.attack(ScavTrap.GetName());
	ScavTrap.takeDamage(ClapTrp.GetAttackDamage());
	ClapTrp.attack(FragTrap.GetName());
	FragTrap.takeDamage(ClapTrp.GetAttackDamage());

	std::cout << std::endl << COLOR_BRIGHT_BLUE << "Clap and Cpy trap use repair then attack twice....but did ClapTrp get too keen?" << COLOR_RESET << std::endl;
	CpyTrp.beRepaired(5);

	// for (int i = 0; i < 9 ; i++)
	// 	ClapTrp.beRepaired(5);
	
	
	ScavTrap.attack(CpyTrp.GetName());
	CpyTrp.takeDamage(ScavTrap.GetAttackDamage());
	ScavTrap.attack(ClapTrp.GetName());
	ClapTrp.takeDamage(ScavTrap.GetAttackDamage());
	
	std::cout << std::endl << COLOR_BRIGHT_BLUE << "ScavTrap and FragTrap use repair then bully dead/tired opponents" << COLOR_RESET << std::endl;
//////////////////////new test/////////////////////////////////////
	FragTrap.beRepaired(50);
	FragTrap.attack(ClapTrp.GetName());
	ClapTrp.takeDamage(ScavTrap.GetAttackDamage());
	
	ScavTrap.beRepaired(5);	
	ScavTrap.attack(CpyTrp.GetName());
	CpyTrp.takeDamage(ScavTrap.GetAttackDamage());
	ClapTrp.takeDamage(ScavTrap.GetAttackDamage());
	
	std::cout << std::endl << COLOR_BRIGHT_BLUE << "Clap and Cpy trap try to use repair" << COLOR_RESET << std::endl;
	CpyTrp.beRepaired(5);
	ClapTrp.beRepaired(5);
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl << COLOR_BRIGHT_BLUE << "The Battle is over!" << COLOR_RESET << std::endl;
	ScavTrap.guardGate();
	FragTrap.highFivesGuys();
	
	
	return 0;
}