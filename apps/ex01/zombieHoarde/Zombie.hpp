/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:21:32 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 10:21:33 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Zombie
{
	private:
		std::string name;

	public:
		void announce( void );
		Zombie(void);
		~Zombie();
	void	nameObject(std::string name);
};

Zombie*	zombieHorde(int size, std::string name);



#endif

