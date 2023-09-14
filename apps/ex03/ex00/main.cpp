/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:18:51 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/14 15:11:10 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



int main()
{
	ClapTrap ClapTrp("ClapTrap");
	ClapTrap CpyTrp(ClapTrp);
	
	CpyTrp.beRepaired(5);
	ClapTrp.beRepaired(5);
	ClapTrp.attack(CpyTrp.GetName());
	CpyTrp.takeDamage(ClapTrp.GetAttackDamage());
	ClapTrp.takeDamage(CpyTrp.GetAttackDamage());
	ClapTrp.beRepaired(5);
	
	return 0;
}