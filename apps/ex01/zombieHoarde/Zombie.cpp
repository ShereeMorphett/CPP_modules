/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:21:27 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 10:21:30 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << "\e[1;32m" << name  << ": " << "\e[0m";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}


void	Zombie::nameObject(std::string identify)
{
	name = identify;
}


Zombie::Zombie(void)
{
	std::cout << "Hoarde size increases (constructor call)" << std::endl;
}


Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl; 
}
