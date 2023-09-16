/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:55:33 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/15 16:58:49 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include "Color.hpp"

/*
    public - members are accessible from outside the class
    private - members cannot be accessed (or viewed) from outside the class
    protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
*/

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
	 void setName(std::string target);
	 std::string GetName();

};

#endif