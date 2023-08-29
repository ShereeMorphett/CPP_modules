/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:23:46 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 19:47:47 by smorphet         ###   ########.fr       */
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
	const std::string& getType(void);
	void setType(std::string weaponName);
	Weapon(std::string weaponName);
};

#endif