/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:26:35 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/29 19:59:44 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

/*Now, create two classes: HumanA and HumanB.
They both have a Weapon and a name.
They also have a member function attack() that displays (of course, without the angle brackets):
    <name> attacks with their <weapon type>
HumanA and HumanB are almost the same except for these two tiny details: • While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, whereas HumanA will always be armed.*/

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
		
	public:
	
	HumanB(std::string id);
	void attack(void);
	void setWeapon(Weapon &weaponType);
};



#endif