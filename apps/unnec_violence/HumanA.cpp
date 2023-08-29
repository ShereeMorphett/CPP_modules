/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:15:22 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 15:03:00 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string id, Weapon weaponType) : weapon(weaponType)
{
	name = id;
}


HumanA::~HumanA()
{
	std::cout << name << " has been destroyed" << std::endl;
}


void HumanA::attack()
{
	std::cout << name << " attacks with their "<< weapon.getType() << std::endl;
}