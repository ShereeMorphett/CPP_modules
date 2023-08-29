/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:26:38 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 20:05:53 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weaponType)
{
	weapon = &weaponType;
}

HumanB::HumanB(std::string id) : weapon()
{
	name = id;
	weapon = NULL;
}

void HumanB::attack()
{
    if (weapon != nullptr && weapon->getType() != "NULL") {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " has no weapon" << std::endl;
    }
}

