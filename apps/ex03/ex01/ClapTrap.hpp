/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:55:33 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/14 15:08:42 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include "Color.hpp"



class ClapTrap
{
	private:

	protected:
		std::string name_;
		int HitPoints_ = 10;
		int EnergyPoints_ = 10;
		int AttackDamage_ = 0;

	public:
		ClapTrap& operator=(ClapTrap const &right);
		ClapTrap(std::string id);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

	 void attack(const std::string& target);
	 void takeDamage(unsigned int amount);
	 void beRepaired(unsigned int amount);
	 int GetAttackDamage();
	 std::string GetName();

};

#endif