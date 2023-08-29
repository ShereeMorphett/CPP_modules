/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:26:41 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 20:01:11 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

const std::string& Weapon::getType(void)
{
	return type;
}


Weapon::Weapon(std::string weaponName)
{
	type = weaponName;
}

void Weapon::setType(std::string weaponName)
{
	type = weaponName;
}


