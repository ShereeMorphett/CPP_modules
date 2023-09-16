/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:18:51 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/15 17:00:04 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap ClapTrp("ClapTrap");
	ClapTrap CpyTrp(ClapTrp);
	ScavTrap ScavTrp("ScavTrap");
	ScavTrap CpyScavTrap(ScavTrp);
	
	CpyTrp.setName("COPYTrap");
	
	std::cout << COLOR_BRIGHT_BLUE << "Battle Comences" << COLOR_RESET << std::endl;
	CpyTrp.attack(ScavTrp.GetName());
	ScavTrp.takeDamage(CpyTrp.GetAttackDamage());
	ClapTrp.attack(ScavTrp.GetName());
	ScavTrp.takeDamage(ClapTrp.GetAttackDamage());

	std::cout << std::endl << COLOR_BRIGHT_BLUE << "Clap and Cpy trap use repair then attack twice....but did ClapTrp get too keen?" << COLOR_RESET << std::endl;
	CpyTrp.beRepaired(5);

	for (int i = 0; i < 9 ; i++)
		ClapTrp.beRepaired(5);
	
	
	ScavTrp.attack(CpyTrp.GetName());
	CpyTrp.takeDamage(ScavTrp.GetAttackDamage());
	ScavTrp.attack(ClapTrp.GetName());
	ClapTrp.takeDamage(ScavTrp.GetAttackDamage());
	
	std::cout << std::endl << COLOR_BRIGHT_BLUE << "ScavTrp use repair then bullies dead/tired opponents" << COLOR_RESET << std::endl;
	ScavTrp.beRepaired(5);
	
	ScavTrp.attack(CpyTrp.GetName());
	CpyTrp.takeDamage(ScavTrp.GetAttackDamage());
	ClapTrp.takeDamage(ScavTrp.GetAttackDamage());
	
	std::cout << std::endl << COLOR_BRIGHT_BLUE << "Clap and Cpy trap try to use repair" << COLOR_RESET << std::endl;
	CpyTrp.beRepaired(5);
	ClapTrp.beRepaired(5);
	std::cout << std::endl;
	std::cout << std::endl;
	ScavTrp.guardGate();
	
	std::cout << std::endl << COLOR_BRIGHT_BLUE << "The Battle is over!" << COLOR_RESET << std::endl;
	
	
	return 0;
}