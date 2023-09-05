/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:21:21 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 10:21:22 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


int	main(void)
{
	int	size;

	size = 20;
	Zombie *horde = zombieHorde(size, "Sally");
	for (int index = 0; index < size; index++)
		horde[index].announce();
	delete [] horde; //deletes full array and anything in it

}
