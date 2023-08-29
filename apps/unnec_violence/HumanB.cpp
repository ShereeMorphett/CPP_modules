/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:26:38 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 15:24:24 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"


void HumanB::setWeapon(Weapon weaponType)
{	
	weapon = weaponType;
}


HumanB::HumanB(std::string id) : weapon("NULL")
{
	name = id;
}


HumanB::~HumanB()
{
	std::cout << name << " has been destroyed" << std::endl;
}


void HumanB::attack()
{
	if (weapon.getType() != "NULL")
		std::cout << name << " attacks with their "<< weapon.getType() << std::endl;
	else
		std::cout << name << " has no weapon" << std::endl;
}

