/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:23:46 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 15:32:31 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>


class Weapon
{
	private:
	std::string type;

	public:
	std::string getType();
	void setType(std::string weaponName);
	Weapon(std::string weaponName);
	// ~Weapon();
};

#endif