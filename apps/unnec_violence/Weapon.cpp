/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:26:41 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 15:32:32 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

std::string Weapon::getType()
{
	return type;
}


void Weapon::setType(std::string weaponName)
{
	type = weaponName;
}


Weapon::Weapon(std::string weaponName)
{
	type = weaponName;

}

