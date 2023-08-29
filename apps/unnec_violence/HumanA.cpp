/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:15:22 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 19:58:08 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string id, Weapon &weaponType) : weapon(weaponType)
{
	name = id;
}


void HumanA::attack()
{
	std::cout << name << " attacks with their "<< weapon.getType() << std::endl;
}