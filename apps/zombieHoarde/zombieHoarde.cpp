/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHoarde.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:21:37 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 10:21:41 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	zombieHorde(int size, std::string name)
{
	Zombie *horde = new Zombie[size];
	for (int index = 0; index < size; index++)
		horde[index].nameObject(name);
	return (horde);
}