/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:18:51 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/14 15:56:48 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap ClapTrp("ClapTrap");
	ScavTrap ScavTrap("ScavTrap");
	ClapTrap CpyTrp(ClapTrp);
	
	std::cout << COLOR_BRIGHT_BLUE << "Battle Comences" << COLOR_RESET << std::endl;
	CpyTrp.attack(ScavTrap.GetName());
	ScavTrap.takeDamage(CpyTrp.GetAttackDamage());
	ClapTrp.attack(ScavTrap.GetName());
	ScavTrap.takeDamage(ClapTrp.GetAttackDamage());

	std::cout << std::endl << COLOR_BRIGHT_BLUE << "Clap and Cpy trap use repair then attack twice....but did ClapTrp get too keen?" << COLOR_RESET << std::endl;
	CpyTrp.beRepaired(5);

	for (int i = 0; i < 9 ; i++)
		ClapTrp.beRepaired(5);
	
	
	ScavTrap.attack(CpyTrp.GetName());
	CpyTrp.takeDamage(ScavTrap.GetAttackDamage());
	ScavTrap.attack(ClapTrp.GetName());
	ClapTrp.takeDamage(ScavTrap.GetAttackDamage());
	
	std::cout << std::endl << COLOR_BRIGHT_BLUE << "ScavTrap use repair then bullies dead/tired opponents" << COLOR_RESET << std::endl;
	ScavTrap.beRepaired(5);
	
	ScavTrap.attack(CpyTrp.GetName());
	CpyTrp.takeDamage(ScavTrap.GetAttackDamage());
	ClapTrp.takeDamage(ScavTrap.GetAttackDamage());
	
	std::cout << std::endl << COLOR_BRIGHT_BLUE << "Clap and Cpy trap try to use repair" << COLOR_RESET << std::endl;
	CpyTrp.beRepaired(5);
	ClapTrp.beRepaired(5);
	std::cout << std::endl;
	std::cout << std::endl;
	ScavTrap.guardGate();
	
	std::cout << std::endl << COLOR_BRIGHT_BLUE << "The Battle is over!" << COLOR_RESET << std::endl;
	
	
	return 0;
}