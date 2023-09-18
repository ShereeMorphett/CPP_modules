/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:29:26 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 11:32:47 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "IMateria.hpp"

/* The Character possesses an inventory of 4 slots, which means 4 Materias at most. 
	The inventory is empty at construction. They equip the Materias in the first empty slot they find. 
	This means, in this order: from slot 0 to slot 3. In case they try to add a Materia to a full inventory, or 
	use/unequip an unexisting Materia, don’t do anything (but still, bugs are forbidden).
	The unequip() member function must NOT delete the Materia!
*/

class Character : public ICharacter
{
	private:
		Materia things[4];
	public:
	
	
};

#endif