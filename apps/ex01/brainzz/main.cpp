/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:20:37 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 10:20:40 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
	Zombie	thing("sally");
	thing.announce();
	
	Zombie *newbie = newZombie("NewDude");
	newbie->announce();
	
	randomChump("spaghetti");

	delete newbie;

    return 0;
} 
